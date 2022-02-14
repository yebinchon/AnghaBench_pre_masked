
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct global_queue {int dummy; } ;


 struct global_queue* VAR_0 ;
 int FUNC_0 (struct global_queue*) ;
 int FUNC_1 (struct global_queue*,int ,int) ;
 struct global_queue* FUNC_2 (int) ;

void
FUNC_3() {
 struct global_queue *VAR_1 = FUNC_2(sizeof(*VAR_1));
 FUNC_1(VAR_1,0,sizeof(*VAR_1));
 FUNC_0(VAR_1);
 VAR_0=VAR_1;
}
