
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct sortslot {int v; TYPE_1__* J; } ;
struct TYPE_17__ {int gcpause; } ;
typedef TYPE_1__ js_State ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct sortslot*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int) ;
 struct sortslot* FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int * FUNC_12 (TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct sortslot*,int,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_15(js_State *VAR_2)
{
 struct sortslot *VAR_3 = ((void*)0);
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_4(VAR_2, 0);
 if (VAR_6 <= 0) {
  FUNC_0(VAR_2, 0);
  return;
 }

 if (VAR_6 >= VAR_0 / (int)sizeof(*VAR_3))
  FUNC_9(VAR_2, "array is too large to sort");

 VAR_3 = FUNC_6(VAR_2, VAR_6 * sizeof *VAR_3);





 ++VAR_2->gcpause;

 if (FUNC_13(VAR_2)) {
  --VAR_2->gcpause;
  FUNC_3(VAR_2, VAR_3);
  FUNC_11(VAR_2);
 }

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {
  if (FUNC_5(VAR_2, 0, VAR_4)) {
   VAR_3[VAR_5].v = *FUNC_12(VAR_2, -1);
   VAR_3[VAR_5].J = VAR_2;
   FUNC_7(VAR_2, 1);
   ++VAR_5;
  }
 }

 FUNC_14(VAR_3, VAR_5, sizeof *VAR_3, VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  FUNC_8(VAR_2, VAR_3[VAR_4].v);
  FUNC_10(VAR_2, 0, VAR_4);
 }
 for (VAR_4 = VAR_5; VAR_4 < VAR_6; ++VAR_4) {
  FUNC_1(VAR_2, 0, VAR_4);
 }

 --VAR_2->gcpause;

 FUNC_2(VAR_2);
 FUNC_3(VAR_2, VAR_3);

 FUNC_0(VAR_2, 0);
}
