
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_13__ {TYPE_1__ sin_addr; int sin_port; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_11__ {TYPE_2__ sin_addr; int sin_port; } ;
struct TYPE_12__ {scalar_t__ dataPortMode; int dataSocket; scalar_t__ connTimeout; int errNo; scalar_t__ require20; TYPE_3__ servCtlAddr; TYPE_5__ servDataAddr; } ;
typedef TYPE_4__* FTPCIPtr ;


 int FUNC_0 (TYPE_4__* const,int ,char*) ;
 int FUNC_1 (int,TYPE_5__*,int) ;
 int FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 unsigned short FUNC_7 (int ) ;

int
FUNC_8(const FTPCIPtr VAR_5)
{
 int VAR_6;

 int VAR_7;

 unsigned short VAR_8;
 unsigned short VAR_9;




 if (VAR_5->dataPortMode == VAR_4) {



  FUNC_6(&VAR_5->servDataAddr, 0, sizeof(VAR_5->servDataAddr));




  VAR_7 = (int) sizeof(VAR_5->servDataAddr);
  if (VAR_5->connTimeout > 0)
   (void) FUNC_3(VAR_5->connTimeout);
  VAR_6 = FUNC_2(VAR_5->dataSocket, (struct sockaddr *) &VAR_5->servDataAddr, &VAR_7);
  if (VAR_5->connTimeout > 0)
   (void) FUNC_3(0);


  (void) FUNC_4(VAR_5->dataSocket);
  if (VAR_6 < 0) {
   FUNC_0(VAR_5, VAR_1, "Could not accept a data connection.\n");
   VAR_5->dataSocket = VAR_0;
   VAR_5->errNo = VAR_3;
   return (VAR_3);
  }

  if (VAR_5->require20 != 0) {
   VAR_8 = FUNC_7(VAR_5->servDataAddr.sin_port);
   VAR_9 = FUNC_7(VAR_5->servCtlAddr.sin_port);
   if ((int) VAR_8 != ((int) VAR_9 - 1)) {
    FUNC_0(VAR_5, VAR_2, "Data connection did not originate on correct port!\n");
    (void) FUNC_4(VAR_6);
    VAR_5->dataSocket = VAR_0;
    VAR_5->errNo = VAR_3;
    return (VAR_3);
   } else if (FUNC_5(&VAR_5->servDataAddr.sin_addr.s_addr, &VAR_5->servCtlAddr.sin_addr.s_addr, sizeof(VAR_5->servDataAddr.sin_addr.s_addr)) != 0) {
    FUNC_0(VAR_5, VAR_2, "Data connection did not originate from remote server!\n");
    (void) FUNC_4(VAR_6);
    VAR_5->dataSocket = VAR_0;
    VAR_5->errNo = VAR_3;
    return (VAR_3);
   }
  }

  VAR_5->dataSocket = VAR_6;
 }

 return (0);
}
