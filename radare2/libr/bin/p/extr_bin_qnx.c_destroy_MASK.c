
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fixups; int sections; } ;
struct TYPE_7__ {TYPE_1__* o; } ;
struct TYPE_6__ {TYPE_3__* bin_obj; } ;
typedef TYPE_2__ RBinFile ;
typedef TYPE_3__ QnxObj ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(RBinFile *VAR_0) {
 QnxObj *VAR_1 = VAR_0->o->bin_obj;
 FUNC_1 (VAR_1->sections);
 FUNC_1 (VAR_1->fixups);
 VAR_0->o->bin_obj = ((void*)0);
 FUNC_0 (VAR_1);
}
