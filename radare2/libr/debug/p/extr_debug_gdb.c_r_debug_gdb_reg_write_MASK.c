
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_12__ {scalar_t__ core; scalar_t__ (* cfggeti ) (scalar_t__,char*) ;} ;
struct TYPE_14__ {int reg; TYPE_2__ corebind; TYPE_1__* anal; } ;
struct TYPE_13__ {int size; int name; } ;
struct TYPE_11__ {int bits; int reg; } ;
typedef TYPE_3__ RRegItem ;
typedef TYPE_4__ RDebug ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int *,int ,int) ;
 TYPE_3__* FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (int ,int,int*) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int ,int,int *,int,TYPE_3__*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int *,int) ;
 int * VAR_4 ;
 scalar_t__ FUNC_13 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_14(RDebug *VAR_5, int VAR_6, const ut8 *VAR_7, int VAR_8) {
 FUNC_0 (VAR_5);
 if (!VAR_3) {
  return VAR_0;
 }
 if (!VAR_4) {

  return -1;
 }
 int VAR_9 = 0;
 int VAR_10 = VAR_5->anal->bits;
 const char *VAR_11 = FUNC_6 (VAR_5->anal->reg, VAR_1);
 RRegItem *VAR_12 = FUNC_4 (VAR_5->anal->reg, VAR_11, 0);
 if (VAR_12) {
  if (VAR_5->anal->bits != VAR_12->size) {
   VAR_10 = VAR_12->size;
  }
 }
 FUNC_1 (FUNC_5 (VAR_5->reg, VAR_6, &VAR_9));






 if (VAR_2 < VAR_9) {
  ut8* VAR_13 = FUNC_12 (VAR_4, VAR_9 * sizeof (ut8));
  if (!VAR_13) {
   return -1;
  }
  VAR_4 = VAR_13;
  FUNC_3 (VAR_13 + VAR_2, 0, VAR_9 - VAR_2);
 }

 RRegItem* VAR_14 = ((void*)0);


 bool VAR_15 = VAR_5->corebind.core && VAR_5->corebind.cfggeti (VAR_5->corebind.core, "cfg.bigendian");

 for (;;) {
  VAR_14 = FUNC_8 (VAR_5->reg, VAR_6, VAR_4, VAR_9, VAR_14, VAR_10);
  if (!VAR_14) {
   break;
  }
  ut64 VAR_16 = FUNC_7 (VAR_5->reg, VAR_14);
  int VAR_17 = VAR_10 / 8;
  if (VAR_15) {

   switch (VAR_17) {
   case 2:
    VAR_16 = FUNC_9 (VAR_16);
    break;
   case 4:
    VAR_16 = FUNC_10 (VAR_16);
    break;
   case 8:
   default:
    VAR_16 = FUNC_11 (VAR_16);
    break;
   }
  }
  FUNC_2 (VAR_3, VAR_14->name, (char*)&VAR_16, VAR_17);
 }
 return 1;
}
