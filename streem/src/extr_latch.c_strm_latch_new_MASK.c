
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct latch_data {void* rq; void* dq; } ;
typedef int strm_stream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct latch_data* FUNC_1 (int) ;
 int VAR_2 ;
 void* FUNC_2 () ;
 int * FUNC_3 (int ,int ,int ,struct latch_data*) ;

strm_stream*
FUNC_4()
{
  struct latch_data* VAR_3 = FUNC_1(sizeof(struct latch_data));

  FUNC_0(VAR_3 != ((void*)0));
  VAR_3->dq = FUNC_2();
  VAR_3->rq = FUNC_2();
  return FUNC_3(VAR_2, VAR_1, VAR_0, VAR_3);
}
