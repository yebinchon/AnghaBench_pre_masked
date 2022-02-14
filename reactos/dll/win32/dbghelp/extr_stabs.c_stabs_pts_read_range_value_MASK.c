
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pts_range_value {int sign; int val; } ;
struct ParseTypedefData {int* ptr; } ;


 int FUNC_0 (struct ParseTypedefData*,int) ;
 int FUNC_1 (char) ;
 void* FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int FUNC_3(struct ParseTypedefData* VAR_0, struct pts_range_value* VAR_1)
{
    char* VAR_2;

    switch (*VAR_0->ptr)
    {
    case '0':
        while (*VAR_0->ptr == '0') VAR_0->ptr++;
        if (*VAR_0->ptr >= '1' && *VAR_0->ptr <= '7')
        {
            switch (VAR_0->ptr[1])
            {
            case '0':
                FUNC_0(VAR_0, VAR_0->ptr[0] != '1');
                VAR_1->sign = -1;
                VAR_1->val = 0;
                while (FUNC_1(*VAR_0->ptr)) VAR_1->val = (VAR_1->val << 3) + *VAR_0->ptr++ - '0';
                break;
            case '7':
                VAR_1->sign = 1;
                VAR_1->val = 0;
                while (FUNC_1(*VAR_0->ptr)) VAR_1->val = (VAR_1->val << 3) + *VAR_0->ptr++ - '0';
                break;
            default: FUNC_0(VAR_0, 1); break;
            }
        } else VAR_1->sign = 0;
        break;
    case '-':
        VAR_1->sign = -1;
        VAR_1->val = FUNC_2(++VAR_0->ptr, &VAR_2, 10);
        VAR_0->ptr = VAR_2;
        break;
    case '+':
    default:
        VAR_1->sign = 1;
        VAR_1->val = FUNC_2(VAR_0->ptr, &VAR_2, 10);
        VAR_0->ptr = VAR_2;
        break;
    }
    return 0;
}
