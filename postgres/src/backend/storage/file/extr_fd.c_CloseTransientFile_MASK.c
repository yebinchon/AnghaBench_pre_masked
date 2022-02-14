
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {scalar_t__ kind; TYPE_1__ desc; } ;
typedef TYPE_2__ AllocateDesc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_4 ;

int
FUNC_4(int VAR_5)
{
 int VAR_6;

 FUNC_0(FUNC_3(VAR_1, "CloseTransientFile: Allocated %d", VAR_4));


 for (VAR_6 = VAR_4; --VAR_6 >= 0;)
 {
  AllocateDesc *VAR_7 = &VAR_3[VAR_6];

  if (VAR_7->kind == VAR_0 && VAR_7->desc.fd == VAR_5)
   return FUNC_1(VAR_7);
 }


 FUNC_3(VAR_2, "fd passed to CloseTransientFile was not obtained from OpenTransientFile");

 return FUNC_2(VAR_5);
}
