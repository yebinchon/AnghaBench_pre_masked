
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int timeout ;
struct TYPE_6__ {int ss_family; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct TYPE_8__ {int tcp_user_timeout; int default_tcp_user_timeout; int sock; TYPE_2__ laddr; } ;
typedef TYPE_3__ Port ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,char*,int) ;

int
FUNC_4(int VAR_5, Port *VAR_6)
{
 if (VAR_6 == ((void*)0) || FUNC_0(VAR_6->laddr.addr.ss_family))
  return VAR_3;
 if (VAR_5 != 0)
 {
  FUNC_1(VAR_1, "setsockopt(%s) not supported", "TCP_USER_TIMEOUT");
  return VAR_2;
 }


 return VAR_3;
}
