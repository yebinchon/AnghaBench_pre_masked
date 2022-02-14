
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_queue {int decoder; } ;


 int FUNC_0 (struct cs_etm_queue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cs_etm_queue*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct cs_etm_queue *VAR_1 = VAR_0;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1->decoder);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
}
