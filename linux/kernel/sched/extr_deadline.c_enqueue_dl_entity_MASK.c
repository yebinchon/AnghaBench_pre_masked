
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {int deadline; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sched_dl_entity*) ;
 int FUNC_2 (struct sched_dl_entity*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sched_dl_entity*) ;
 int FUNC_5 (struct sched_dl_entity*,struct sched_dl_entity*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sched_dl_entity*) ;
 int FUNC_9 (struct sched_dl_entity*,int) ;
 int FUNC_10 (struct sched_dl_entity*,struct sched_dl_entity*) ;

__attribute__((used)) static void
FUNC_11(struct sched_dl_entity *VAR_3,
    struct sched_dl_entity *VAR_4, int VAR_5)
{
 FUNC_0(FUNC_4(VAR_3));






 if (VAR_5 & VAR_2) {
  FUNC_9(VAR_3, VAR_5);
  FUNC_10(VAR_3, VAR_4);
 } else if (VAR_5 & VAR_0) {
  FUNC_5(VAR_3, VAR_4);
 } else if ((VAR_5 & VAR_1) &&
    FUNC_3(VAR_3->deadline,
     FUNC_6(FUNC_7(FUNC_2(VAR_3))))) {
  FUNC_8(VAR_3);
 }

 FUNC_1(VAR_3);
}
