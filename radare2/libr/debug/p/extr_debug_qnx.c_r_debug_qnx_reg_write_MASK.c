
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_11__ {int reg; TYPE_1__* anal; } ;
struct TYPE_10__ {int size; int name; } ;
struct TYPE_9__ {int bits; int reg; } ;
typedef TYPE_2__ RRegItem ;
typedef TYPE_3__ RDebug ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,char*,int) ;
 TYPE_2__* FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ,int,int*) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ,int,int *,int,TYPE_2__*,int) ;
 int * FUNC_8 (int *,int) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_9 (RDebug *VAR_4, int VAR_5, const ut8 *VAR_6, int VAR_7) {
 int VAR_8 = 0;
 int VAR_9 = VAR_4->anal->bits;
 const char *VAR_10 = FUNC_5 (VAR_4->anal->reg, VAR_0);
 RRegItem *VAR_11 = FUNC_3 (VAR_4->anal->reg, VAR_10, 0);
 if (!VAR_3) {

  return -1;
 }
 if (VAR_11) {
  if (VAR_4->anal->bits != VAR_11->size) {
   VAR_9 = VAR_11->size;
  }
 }
 FUNC_0 (FUNC_4 (VAR_4->reg, VAR_5, &VAR_8));






 if (VAR_1 < VAR_8) {
  ut8 *VAR_12 = FUNC_8 (VAR_3, VAR_8 * sizeof (ut8));
  if (!VAR_12) {
   return -1;
  }
  VAR_3 = VAR_12;
  FUNC_1 (VAR_12 + VAR_1, 0, VAR_8 - VAR_1);
 }

 RRegItem *VAR_13 = ((void*)0);
 for (;;) {
  VAR_13 = FUNC_7 (VAR_4->reg, VAR_5, VAR_3, VAR_8, VAR_13, VAR_9);
  if (!VAR_13) {
   break;
  }
  ut64 VAR_14 = FUNC_6 (VAR_4->reg, VAR_13);
  int VAR_15 = VAR_9 / 8;
  FUNC_2 (VAR_2, VAR_13->name, (char *)&VAR_14, VAR_15);
 }
 return 1;
}
