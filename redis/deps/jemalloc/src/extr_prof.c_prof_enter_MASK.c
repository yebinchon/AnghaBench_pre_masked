
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_4__ {int enq; } ;
typedef TYPE_1__ prof_tdata_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(tsd_t *VAR_2, prof_tdata_t *VAR_3) {
 FUNC_1(VAR_1);
 FUNC_0(VAR_3 == FUNC_3(VAR_2, 0));

 if (VAR_3 != ((void*)0)) {
  FUNC_0(!VAR_3->enq);
  VAR_3->enq = 1;
 }

 FUNC_2(FUNC_4(VAR_2), &VAR_0);
}
