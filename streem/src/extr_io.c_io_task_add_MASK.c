
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_task {int data; } ;
typedef int strm_stream ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct strm_task*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct strm_task* VAR_0)
{
  strm_stream* VAR_1 = FUNC_2(VAR_0->data);
  VAR_0->data = FUNC_0();
  FUNC_1(VAR_1, VAR_0);
}
