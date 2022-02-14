
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int idle ;
struct TYPE_7__ {int ss_family; } ;
struct TYPE_8__ {TYPE_1__ addr; } ;
struct TYPE_9__ {int keepalives_idle; int default_keepalives_idle; int keepalives_interval; int sock; TYPE_2__ laddr; } ;
typedef TYPE_3__ Port ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,int) ;

int
FUNC_5(int VAR_6, Port *VAR_7)
{
 if (VAR_7 == ((void*)0) || FUNC_0(VAR_7->laddr.addr.ss_family))
  return VAR_5;
 if (VAR_6 != 0)
 {
  FUNC_1(VAR_1, "setting the keepalive idle time is not supported");
  return VAR_4;
 }


 return VAR_5;
}
