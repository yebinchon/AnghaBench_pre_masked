
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_4__ {int enq; int enq_idump; int enq_gdump; } ;
typedef TYPE_1__ prof_tdata_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(tsd_t *VAR_2, prof_tdata_t *VAR_3) {
 FUNC_1(VAR_1);
 FUNC_0(VAR_3 == FUNC_5(VAR_2, 0));

 FUNC_2(FUNC_6(VAR_2), &VAR_0);

 if (VAR_3 != ((void*)0)) {
  bool VAR_4, VAR_5;

  FUNC_0(VAR_3->enq);
  VAR_3->enq = 0;
  VAR_4 = VAR_3->enq_idump;
  VAR_3->enq_idump = 0;
  VAR_5 = VAR_3->enq_gdump;
  VAR_3->enq_gdump = 0;

  if (VAR_4) {
   FUNC_4(FUNC_6(VAR_2));
  }
  if (VAR_5) {
   FUNC_3(FUNC_6(VAR_2));
  }
 }
}
