
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum join_op { ____Placeholder_join_op } join_op ;
typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;



 int * FUNC_1 (int **,int ,int **,int ,int *) ;
 int FUNC_2 (int **,int ,int **,int ) ;

__attribute__((used)) static WCHAR *FUNC_3( enum join_op VAR_0, WCHAR **VAR_1, DWORD VAR_2,
                                        WCHAR **VAR_3, DWORD VAR_4, DWORD *VAR_5 )
{
    switch (VAR_0)
    {
    case 130:
        VAR_2 = FUNC_2( VAR_1, VAR_2, VAR_3, VAR_4 );
        return FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 );

    case 129:
        VAR_2 = FUNC_2( VAR_1, VAR_2, VAR_3, VAR_4 );
        return FUNC_1( VAR_3, VAR_4, VAR_1, VAR_2, VAR_5 );

    case 128:
        return FUNC_1( VAR_3, VAR_4, ((void*)0), 0, VAR_5 );

    default:
        FUNC_0("unhandled join op %u\n", VAR_0);
        return ((void*)0);
    }
}
