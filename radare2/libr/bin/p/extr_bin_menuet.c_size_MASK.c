
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_6__ {int buf; TYPE_1__* o; } ;
struct TYPE_5__ {scalar_t__ info; } ;
typedef TYPE_2__ RBinFile ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static ut64 FUNC_3(RBinFile *VAR_0) {
 ut8 VAR_1[4] = {0};
 if (!VAR_0->o->info) {
  VAR_0->o->info = FUNC_0 (VAR_0);
 }
 if (!VAR_0->o->info) {
  return 0;
 }
 FUNC_1 (VAR_0->buf, 16, VAR_1, 4);
 return (ut64)FUNC_2 (VAR_1, 0);
}
