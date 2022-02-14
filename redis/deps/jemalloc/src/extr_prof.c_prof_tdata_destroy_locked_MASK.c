
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_6__ {int bt2tctx; struct TYPE_6__* thread_name; } ;
typedef TYPE_1__ prof_tdata_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int *,int *,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(tsd_t *VAR_2, prof_tdata_t *VAR_3,
    bool VAR_4) {
 FUNC_3(FUNC_6(VAR_2), &VAR_1);

 FUNC_5(&VAR_0, VAR_3);

 FUNC_0(FUNC_4(VAR_3, VAR_4));

 if (VAR_3->thread_name != ((void*)0)) {
  FUNC_2(FUNC_6(VAR_2), VAR_3->thread_name, ((void*)0), ((void*)0), 1,
      1);
 }
 FUNC_1(VAR_2, &VAR_3->bt2tctx);
 FUNC_2(FUNC_6(VAR_2), VAR_3, ((void*)0), ((void*)0), 1, 1);
}
