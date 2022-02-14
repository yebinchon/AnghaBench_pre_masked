
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ftp_session_t ;
typedef int INT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int,int *,int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *,int,int ) ;

__attribute__((used)) static BOOL FUNC_6(ftp_session_t *VAR_3, INT VAR_4, HANDLE VAR_5)
{
    DWORD VAR_6;
    INT VAR_7 = 0;
    CHAR *VAR_8;

    FUNC_1("\n");

    VAR_8 = FUNC_3(sizeof(CHAR)*VAR_0);
    if (((void*)0) == VAR_8)
    {
        FUNC_0(VAR_1);
        return VAR_2;
    }

    while (VAR_7 != -1)
    {
        VAR_7 = FUNC_5(VAR_4, VAR_8, VAR_0, 0);
        if (VAR_7 != -1)
        {

            if (VAR_7 == 0)
                goto recv_end;
            FUNC_2(VAR_5, VAR_8, VAR_7, &VAR_6, ((void*)0));
        }
    }

    FUNC_1("Data transfer complete\n");

recv_end:
    FUNC_4(VAR_8);
    return (VAR_7 != -1);
}
