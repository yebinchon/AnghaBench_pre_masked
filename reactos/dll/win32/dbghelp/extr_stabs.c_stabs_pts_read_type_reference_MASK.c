
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ParseTypedefData {char* ptr; } ;


 int FUNC_0 (struct ParseTypedefData*,int) ;
 int FUNC_1 (struct ParseTypedefData*,long*) ;

__attribute__((used)) static int FUNC_2(struct ParseTypedefData* VAR_0,
                                         long* VAR_1, long* VAR_2)
{
    if (*VAR_0->ptr == '(')
    {

 VAR_0->ptr++;
 FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_1) == -1);
 FUNC_0(VAR_0, *VAR_0->ptr++ != ',');
 FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_2) == -1);
 FUNC_0(VAR_0, *VAR_0->ptr++ != ')');
    }
    else
    {
     *VAR_1 = 0;
 FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_2) == -1);
    }
    return 0;
}
