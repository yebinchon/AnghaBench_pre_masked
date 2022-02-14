
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int buf ;
struct TYPE_5__ {TYPE_1__* core; } ;
struct TYPE_4__ {int io; } ;
typedef TYPE_2__ RCoreObjc ;


 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ut64 FUNC_2 (RCoreObjc *VAR_0, ut64 VAR_1) {
 ut8 VAR_2[8];
 (void)FUNC_0 (VAR_0->core->io, VAR_1, VAR_2, sizeof (VAR_2));
 return FUNC_1 (VAR_2);
}
