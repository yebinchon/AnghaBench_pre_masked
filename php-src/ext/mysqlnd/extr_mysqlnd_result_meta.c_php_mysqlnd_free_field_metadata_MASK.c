
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sname; int * def; int * root; } ;
typedef TYPE_1__ MYSQLND_FIELD ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(MYSQLND_FIELD *VAR_0)
{
 if (VAR_0) {
  VAR_0->root = ((void*)0);
  VAR_0->def = ((void*)0);
  if (VAR_0->sname) {
   FUNC_0(VAR_0->sname, 0);
  }
 }
}
