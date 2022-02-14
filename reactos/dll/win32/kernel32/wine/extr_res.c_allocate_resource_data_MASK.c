
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_data {int codepage; int cbData; struct resource_data* lpData; int lang; } ;
typedef int WORD ;
typedef struct resource_data* LPVOID ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 struct resource_data* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct resource_data*,struct resource_data*,int) ;

__attribute__((used)) static struct resource_data *FUNC_3( WORD VAR_0, DWORD VAR_1,
                                                     LPVOID VAR_2, DWORD VAR_3, BOOL VAR_4 )
{
    struct resource_data *VAR_5;

    if (!VAR_2 || !VAR_3)
        return ((void*)0);

    VAR_5 = FUNC_1( FUNC_0(), 0, sizeof *VAR_5 + (VAR_4 ? VAR_3 : 0) );
    if (VAR_5)
    {
        VAR_5->lang = VAR_0;
        VAR_5->codepage = VAR_1;
        VAR_5->cbData = VAR_3;
        if (VAR_4)
        {
            VAR_5->lpData = &VAR_5[1];
            FUNC_2( VAR_5->lpData, VAR_2, VAR_3 );
        }
        else
            VAR_5->lpData = VAR_2;
    }

    return VAR_5;
}
