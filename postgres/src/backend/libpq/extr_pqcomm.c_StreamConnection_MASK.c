
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int pgsocket ;
typedef int on ;
typedef int oldopt ;
typedef int newopt ;
struct TYPE_11__ {int ss_family; } ;
struct TYPE_12__ {int salen; TYPE_2__ addr; } ;
struct TYPE_10__ {int salen; int addr; } ;
struct TYPE_13__ {int sock; TYPE_3__ laddr; TYPE_1__ raddr; } ;
typedef TYPE_4__ Port ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,char*,int*) ;
 int FUNC_8 (long) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 int FUNC_10 (int ,TYPE_4__*) ;
 int FUNC_11 (int ,TYPE_4__*) ;
 int FUNC_12 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_13 (int ,int ,int ,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_14(pgsocket VAR_14, Port *VAR_15)
{

 VAR_15->raddr.salen = sizeof(VAR_15->raddr.addr);
 if ((VAR_15->sock = FUNC_1(VAR_14,
        (struct sockaddr *) &VAR_15->raddr.addr,
        &VAR_15->raddr.salen)) == VAR_2)
 {
  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not accept new connection: %m")));
  FUNC_8(100000L);
  return VAR_7;
 }


 VAR_15->laddr.salen = sizeof(VAR_15->laddr.addr);
 if (FUNC_6(VAR_15->sock,
     (struct sockaddr *) &VAR_15->laddr.addr,
     &VAR_15->laddr.salen) < 0)
 {
  FUNC_2(VAR_1, "getsockname() failed: %m");
  return VAR_7;
 }


 if (!FUNC_0(VAR_15->laddr.addr.ss_family))
 {
  int VAR_16;
  VAR_16 = 1;
  if (FUNC_13(VAR_15->sock, VAR_4, VAR_5,
        (char *) &VAR_16, sizeof(VAR_16)) < 0)
  {
   FUNC_2(VAR_1, "setsockopt(%s) failed: %m", "SO_KEEPALIVE");
   return VAR_7;
  }
  (void) FUNC_10(VAR_11, VAR_15);
  (void) FUNC_11(VAR_12, VAR_15);
  (void) FUNC_9(VAR_10, VAR_15);
  (void) FUNC_12(VAR_13, VAR_15);
 }

 return VAR_8;
}
