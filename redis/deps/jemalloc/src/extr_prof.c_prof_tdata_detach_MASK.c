
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_5__ {int attached; int lock; } ;
typedef TYPE_1__ prof_tdata_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(tsd_t *VAR_0, prof_tdata_t *VAR_1) {
 bool VAR_2;

 FUNC_0(FUNC_5(VAR_0), VAR_1->lock);
 if (VAR_1->attached) {
  VAR_2 = FUNC_3(FUNC_5(VAR_0), VAR_1,
      1);




  if (!VAR_2) {
   VAR_1->attached = 0;
  }
  FUNC_4(VAR_0, ((void*)0));
 } else {
  VAR_2 = 0;
 }
 FUNC_1(FUNC_5(VAR_0), VAR_1->lock);
 if (VAR_2) {
  FUNC_2(VAR_0, VAR_1, 1);
 }
}
