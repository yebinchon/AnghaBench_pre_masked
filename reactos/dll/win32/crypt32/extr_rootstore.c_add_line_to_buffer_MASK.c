
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DynamicBuffer {int used; int allocated; scalar_t__* data; } ;
typedef char* LPCSTR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__* FUNC_0 (int) ;
 scalar_t__* FUNC_1 (scalar_t__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static BOOL FUNC_5(struct DynamicBuffer *VAR_3, LPCSTR VAR_4)
{
    BOOL VAR_5;

    if (VAR_3->used + FUNC_4(VAR_4) + 1 > VAR_3->allocated)
    {
        if (!VAR_3->allocated)
        {
            VAR_3->data = FUNC_0(VAR_1);
            if (VAR_3->data)
            {
                VAR_3->data[0] = 0;
                VAR_3->allocated = VAR_1;
            }
        }
        else
        {
            DWORD VAR_6 = FUNC_2(VAR_3->allocated * 2,
             VAR_3->used + FUNC_4(VAR_4) + 1);

            VAR_3->data = FUNC_1(VAR_3->data, VAR_6);
            if (VAR_3->data)
                VAR_3->allocated = VAR_6;
        }
    }
    if (VAR_3->data)
    {
        FUNC_3((char *)VAR_3->data + FUNC_4((char *)VAR_3->data), VAR_4);




        VAR_3->used += FUNC_4(VAR_4);
        VAR_5 = VAR_2;
    }
    else
        VAR_5 = VAR_0;
    return VAR_5;
}
