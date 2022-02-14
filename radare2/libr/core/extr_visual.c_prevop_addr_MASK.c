
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int buf ;
struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int anal; int io; int config; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAnalOp ;
typedef int RAnalBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,TYPE_2__*,scalar_t__,int *,int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int,int*) ;
 int FUNC_7 (int ,scalar_t__,int *,int) ;

__attribute__((used)) static ut64 FUNC_8(RCore *VAR_6, ut64 VAR_7) {
 ut8 VAR_8[VAR_0 * 2];
 ut64 VAR_9, VAR_10;
 RAnalBlock *VAR_11;
 RAnalOp VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16 = FUNC_0 (VAR_6->anal, VAR_2);
 int VAR_17 = FUNC_0 (VAR_6->anal, VAR_1);

 if (VAR_16 == VAR_17) {
  if (VAR_16 == -1) {
   return VAR_7 - 4;
  }
  return VAR_7 - VAR_16;
 }





 VAR_11 = FUNC_1 (VAR_6->anal, VAR_7 - VAR_16);
 if (VAR_11) {
  ut64 VAR_18 = FUNC_2 (VAR_11, VAR_7 - VAR_16);
  if (VAR_18 != VAR_5) {
   return VAR_18;
  }
 }

 int VAR_19 = FUNC_5 (VAR_6->config, "asm.flags.middle");
 VAR_9 = VAR_7;
 VAR_10 = VAR_9 > VAR_0 ? VAR_9 - VAR_0 : 0;
 FUNC_7 (VAR_6->io, VAR_10, VAR_8, sizeof (VAR_8));
 for (VAR_15 = 0; VAR_15 < sizeof (VAR_8); VAR_15++) {
  VAR_14 = FUNC_3 (VAR_6->anal, &VAR_12, VAR_10 + VAR_15,
   VAR_8 + VAR_15, sizeof (VAR_8) - VAR_15, VAR_3);
  if (VAR_14) {
   VAR_13 = VAR_12.size;
   if (VAR_13 < 1) {
    VAR_13 = 1;
   }
   FUNC_4 (&VAR_12);
   if (VAR_19 >= VAR_4) {
    int VAR_20 = FUNC_6 (VAR_6, VAR_10 + VAR_15, VAR_13, &VAR_19);
    if (VAR_20 && VAR_10 + VAR_15 + VAR_20 < VAR_9) {
     VAR_15 += VAR_20 - 1;
     continue;
    }
   }
  } else {
   VAR_13 = 1;
  }
  if (VAR_9 <= VAR_10 + VAR_15 + VAR_13) {
   return VAR_10 + VAR_15;
  }
  VAR_15 += VAR_13 - 1;
 }
 return VAR_9 > 4 ? VAR_9 - 4 : 0;
}
