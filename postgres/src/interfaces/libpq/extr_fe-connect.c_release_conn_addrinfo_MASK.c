
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * addr_cur; int * addrlist; int addrlist_family; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(PGconn *VAR_0)
{
 if (VAR_0->addrlist)
 {
  FUNC_0(VAR_0->addrlist_family, VAR_0->addrlist);
  VAR_0->addrlist = ((void*)0);
  VAR_0->addr_cur = ((void*)0);
 }
}
