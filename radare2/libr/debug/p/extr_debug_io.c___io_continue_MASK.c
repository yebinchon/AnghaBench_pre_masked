
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io; int (* system ) (int ,char*) ;} ;
struct TYPE_5__ {TYPE_1__ iob; } ;
typedef TYPE_2__ RDebug ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(RDebug *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
 VAR_0->iob.system (VAR_0->iob.io, "dc");
 FUNC_0 ();
 return 1;
}
