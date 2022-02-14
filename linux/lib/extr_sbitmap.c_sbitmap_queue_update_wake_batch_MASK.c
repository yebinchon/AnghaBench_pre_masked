
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbitmap_queue {unsigned int wake_batch; TYPE_1__* ws; } ;
struct TYPE_2__ {int wait_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int *,int) ;
 unsigned int FUNC_2 (struct sbitmap_queue*,unsigned int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct sbitmap_queue *VAR_1,
         unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_2(VAR_1, VAR_2);
 int VAR_4;

 if (VAR_1->wake_batch != VAR_3) {
  FUNC_0(VAR_1->wake_batch, VAR_3);





  FUNC_3();
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_1(&VAR_1->ws[VAR_4].wait_cnt, 1);
 }
}
