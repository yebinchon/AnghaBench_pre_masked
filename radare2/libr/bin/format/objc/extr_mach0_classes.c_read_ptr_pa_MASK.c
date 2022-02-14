
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int mach0_ut ;
struct TYPE_7__ {TYPE_2__* o; int buf; } ;
struct TYPE_6__ {TYPE_1__* info; } ;
struct TYPE_5__ {int big_endian; } ;
typedef TYPE_3__ RBinFile ;


 int FUNC_0 (int ,int ,int *,size_t) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static bool FUNC_3(RBinFile *VAR_0, ut64 VAR_1, mach0_ut *VAR_2) {
 FUNC_2 (VAR_2, 0);
 FUNC_2 (VAR_0 && VAR_0->o && VAR_0->o->info, 0);

 size_t VAR_3 = sizeof (mach0_ut);
 ut8 VAR_4[sizeof (mach0_ut)] = {0};

 int VAR_5 = FUNC_0 (VAR_0->buf, VAR_1, VAR_4, VAR_3);
 if (VAR_5 != VAR_3) {
  return 0;
 }

 mach0_ut VAR_6 = FUNC_1 (&VAR_4[0], VAR_0->o->info->big_endian, 8 * VAR_3);
 *VAR_2 = VAR_6;

 return 1;
}
