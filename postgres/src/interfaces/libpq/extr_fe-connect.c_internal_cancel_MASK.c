
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct sockaddr {int dummy; } ;
typedef int sebuf ;
typedef scalar_t__ pgsocket ;
typedef int crp ;
struct TYPE_7__ {void* cancelAuthCode; void* backendPID; scalar_t__ cancelRequestCode; } ;
struct TYPE_5__ {int ss_family; } ;
struct TYPE_6__ {int salen; TYPE_1__ addr; } ;
typedef TYPE_2__ SockAddr ;
typedef scalar_t__ MsgType ;
typedef TYPE_3__ CancelRequestPacket ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,struct sockaddr*,int ) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__,char*,int,int ) ;
 int FUNC_6 (scalar_t__,char*,int,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_12(SockAddr *VAR_6, int VAR_7, int VAR_8,
    char *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_4;
 pgsocket VAR_12 = VAR_2;
 char VAR_13[VAR_3];
 int VAR_14;
 struct
 {
  uint32 packetlen;
  CancelRequestPacket cp;
 } VAR_15;





 if ((VAR_12 = FUNC_7(VAR_6->addr.ss_family, VAR_5, 0)) == VAR_2)
 {
  FUNC_9(VAR_9, "PQcancel() -- socket() failed: ", VAR_10);
  goto cancel_errReturn;
 }
retry3:
 if (FUNC_3(VAR_12, (struct sockaddr *) &VAR_6->addr,
    VAR_6->salen) < 0)
 {
  if (VAR_4 == VAR_1)

   goto retry3;
  FUNC_9(VAR_9, "PQcancel() -- connect() failed: ", VAR_10);
  goto cancel_errReturn;
 }







 VAR_15.packetlen = FUNC_4((uint32) sizeof(VAR_15));
 VAR_15.cp.cancelRequestCode = (MsgType) FUNC_4(VAR_0);
 VAR_15.cp.backendPID = FUNC_4(VAR_7);
 VAR_15.cp.cancelAuthCode = FUNC_4(VAR_8);

retry4:
 if (FUNC_6(VAR_12, (char *) &VAR_15, sizeof(VAR_15), 0) != (int) sizeof(VAR_15))
 {
  if (VAR_4 == VAR_1)

   goto retry4;
  FUNC_9(VAR_9, "PQcancel() -- send() failed: ", VAR_10);
  goto cancel_errReturn;
 }
retry5:
 if (FUNC_5(VAR_12, (char *) &VAR_15, 1, 0) < 0)
 {
  if (VAR_4 == VAR_1)

   goto retry5;

 }


 FUNC_2(VAR_12);
 FUNC_0(VAR_11);
 return 1;

cancel_errReturn:





 VAR_14 = VAR_10 - FUNC_10(VAR_9) - 2;
 if (VAR_14 >= 0)
 {
  FUNC_11(VAR_9, FUNC_1(VAR_4, VAR_13, sizeof(VAR_13)),
    VAR_14);
  FUNC_8(VAR_9, "\n");
 }
 if (VAR_12 != VAR_2)
  FUNC_2(VAR_12);
 FUNC_0(VAR_11);
 return 0;
}
