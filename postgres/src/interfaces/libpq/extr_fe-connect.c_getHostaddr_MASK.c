
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
struct TYPE_7__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct TYPE_8__ {struct sockaddr_storage addr; } ;
struct TYPE_9__ {TYPE_3__ raddr; } ;
typedef TYPE_4__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (scalar_t__,int *,int,char*,int) ;

__attribute__((used)) static void
FUNC_1(PGconn *VAR_2, char *VAR_3, int VAR_4)
{
 struct sockaddr_storage *VAR_5 = &VAR_2->raddr.addr;

 if (VAR_5->ss_family == VAR_0)
 {
  if (FUNC_0(VAR_0,
        &((struct sockaddr_in *) VAR_5)->sin_addr.s_addr,
        32,
        VAR_3, VAR_4) == ((void*)0))
   VAR_3[0] = '\0';
 }
 else
  VAR_3[0] = '\0';
}
