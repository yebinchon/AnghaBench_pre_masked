
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hdr; int sndSocket; } ;
typedef TYPE_1__ ftp_session_t ;
typedef char* LPSTR ;
typedef int INT ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int*) ;
 char* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int*,int) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;

INT FUNC_7(ftp_session_t *VAR_4, DWORD_PTR VAR_5)
{
    LPSTR VAR_6 = FUNC_1();
    DWORD VAR_7;
    INT VAR_8 = 0;
    char VAR_9[5];
    BOOL VAR_10 = VAR_0;

    FUNC_3("socket(%d)\n", VAR_4->sndSocket);

    FUNC_2(&VAR_4->hdr, VAR_5, VAR_1, ((void*)0), 0);

    while(1)
    {
 if (!FUNC_0(VAR_4->sndSocket, &VAR_7))
     goto lerror;

        if (VAR_7 >= 3)
 {
     if(!VAR_10)
     {
         if(VAR_6[3] != '-')
      break;
  else
  {
      VAR_10 = VAR_3;
      FUNC_6(VAR_9, VAR_6, 3);
      VAR_9[3] = ' ';
      VAR_9[4] = '\0';
  }
     }
     else
     {
         if(!FUNC_5(VAR_9, VAR_6, 4))
      break;
     }
 }
    }

    if (VAR_7 >= 3)
    {
        VAR_8 = FUNC_4(VAR_6);

        FUNC_2(&VAR_4->hdr, VAR_5, VAR_2,
      &VAR_7, sizeof(DWORD));
    }

lerror:
    FUNC_3("return %d\n", VAR_8);
    return VAR_8;
}
