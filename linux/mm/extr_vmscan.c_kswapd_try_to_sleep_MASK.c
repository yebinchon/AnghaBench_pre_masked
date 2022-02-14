
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int kswapd_wait; int node_id; int kswapd_order; int kswapd_classzone_idx; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,unsigned int) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 long FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int ) ;
 int VAR_7 ;
 int FUNC_14 (TYPE_1__*,int,unsigned int) ;

__attribute__((used)) static void FUNC_15(pg_data_t *VAR_8, int VAR_9, int VAR_10,
    unsigned int VAR_11)
{
 long VAR_12 = 0;
 FUNC_0(VAR_7);

 if (FUNC_3(VAR_6) || FUNC_5())
  return;

 FUNC_8(&VAR_8->kswapd_wait, &VAR_7, VAR_3);
 if (FUNC_7(VAR_8, VAR_10, VAR_11)) {






  FUNC_9(VAR_8);





  FUNC_14(VAR_8, VAR_9, VAR_11);

  VAR_12 = FUNC_11(VAR_0/10);






  if (VAR_12) {
   VAR_8->kswapd_classzone_idx = FUNC_4(VAR_8, VAR_11);
   VAR_8->kswapd_order = FUNC_6(VAR_8->kswapd_order, VAR_10);
  }

  FUNC_2(&VAR_8->kswapd_wait, &VAR_7);
  FUNC_8(&VAR_8->kswapd_wait, &VAR_7, VAR_3);
 }





 if (!VAR_12 &&
     FUNC_7(VAR_8, VAR_10, VAR_11)) {
  FUNC_13(VAR_8->node_id);
  FUNC_12(VAR_8, VAR_4);

  if (!FUNC_5())
   FUNC_10();

  FUNC_12(VAR_8, VAR_5);
 } else {
  if (VAR_12)
   FUNC_1(VAR_2);
  else
   FUNC_1(VAR_1);
 }
 FUNC_2(&VAR_8->kswapd_wait, &VAR_7);
}
