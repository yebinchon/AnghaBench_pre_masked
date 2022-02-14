
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * buf; } ;
struct TYPE_6__ {int error; int mlist; scalar_t__ haderr; TYPE_1__ o; } ;
typedef TYPE_2__ RMagic ;


 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int *) ;

int FUNC_2(RMagic *VAR_0) {
 if (!VAR_0) {
  return 0;
 }
 FUNC_1 (VAR_0->o.buf);
 VAR_0->o.buf = ((void*)0);
 VAR_0->haderr = 0;
 VAR_0->error = -1;
 if (!VAR_0->mlist) {
  FUNC_0 (VAR_0, 0, "no magic files loaded! ");
  return -1;
 }
 return 0;
}
