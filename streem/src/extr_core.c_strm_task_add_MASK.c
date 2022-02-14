
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_task {scalar_t__ mode; int queue; } ;
typedef struct strm_task strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct strm_task*) ;

void
FUNC_1(strm_stream* VAR_3, struct strm_task* VAR_4)
{
  FUNC_0(VAR_3->queue, VAR_4);
  if (VAR_3->mode == VAR_2) {
    FUNC_0(VAR_0, VAR_3);
  }
  else {
    FUNC_0(VAR_1, VAR_3);
  }
}
