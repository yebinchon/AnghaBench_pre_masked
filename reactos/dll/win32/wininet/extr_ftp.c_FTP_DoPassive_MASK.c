
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int S_addr; } ;
struct TYPE_9__ {TYPE_2__ S_un; } ;
struct sockaddr_in {int sin_port; TYPE_3__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {int dwContext; } ;
struct TYPE_10__ {int pasvSocket; struct sockaddr_in socketAddress; TYPE_1__ hdr; int sndSocket; } ;
typedef TYPE_4__ ftp_session_t ;
typedef int dataSocketAddress ;
typedef char* LPSTR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,int ,int *,int ,int ,int ) ;
 int FUNC_3 (int) ;
 char* FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,struct sockaddr*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*,char*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static BOOL FUNC_10(ftp_session_t *VAR_5)
{
    INT VAR_6;
    BOOL VAR_7 = VAR_1;

    FUNC_5("\n");
    if (!FUNC_2(VAR_5->sndSocket, VAR_2, ((void*)0), 0, 0, 0))
        goto lend;

    VAR_6 = FUNC_1(VAR_5, VAR_5->hdr.dwContext);
    if (VAR_6)
    {
        if (VAR_6 == 227)
 {
     LPSTR VAR_8 = FUNC_4();
     LPSTR VAR_9;
     int VAR_10[6];
     int VAR_11;
     char *VAR_12, *VAR_13;
     INT VAR_14 = -1;
     struct sockaddr_in VAR_15;

     VAR_9 = VAR_8+4;
     while (*VAR_9 != '\0' && (*VAR_9 < '0' || *VAR_9 > '9')) VAR_9++;

     if (*VAR_9 == '\0')
     {
  FUNC_0("no address found in response, aborting\n");
  goto lend;
     }

     if (FUNC_9(VAR_9, "%d,%d,%d,%d,%d,%d", &VAR_10[0], &VAR_10[1], &VAR_10[2], &VAR_10[3],
          &VAR_10[4], &VAR_10[5]) != 6)
     {
  FUNC_0("unknown response address format '%s', aborting\n", VAR_9);
  goto lend;
     }
     for (VAR_11=0; VAR_11 < 6; VAR_11++)
  VAR_10[VAR_11] = VAR_10[VAR_11] & 0xff;

     VAR_15 = VAR_5->socketAddress;
     VAR_12 = (char *)&(VAR_15.sin_addr.S_un.S_addr);
     VAR_13 = (char *)&(VAR_15.sin_port);
            VAR_12[0] = VAR_10[0];
            VAR_12[1] = VAR_10[1];
            VAR_12[2] = VAR_10[2];
            VAR_12[3] = VAR_10[3];
     VAR_13[0] = VAR_10[4];
     VAR_13[1] = VAR_10[5];

            VAR_14 = FUNC_8(VAR_0,VAR_3,0);
            if (VAR_14 == -1)
                goto lend;

     if (FUNC_7(VAR_14, (struct sockaddr *)&VAR_15, sizeof(VAR_15)))
            {
         FUNC_0("can't connect passive FTP data port.\n");
                FUNC_6(VAR_14);
         goto lend;
            }
     VAR_5->pasvSocket = VAR_14;
            VAR_7 = VAR_4;
 }
        else
            FUNC_3(VAR_6);
    }

lend:
    return VAR_7;
}
