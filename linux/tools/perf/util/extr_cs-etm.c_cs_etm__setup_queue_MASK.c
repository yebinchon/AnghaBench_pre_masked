
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct cs_etm_queue {unsigned int queue_nr; scalar_t__ offset; struct cs_etm_auxtrace* etm; } ;
struct cs_etm_auxtrace {int heap; scalar_t__ timeless_decoding; } ;
struct auxtrace_queue {struct cs_etm_queue* priv; int head; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int *,unsigned int,int ) ;
 struct cs_etm_queue* FUNC_2 (struct cs_etm_auxtrace*) ;
 int FUNC_3 (struct cs_etm_queue*) ;
 int FUNC_4 (struct cs_etm_queue*) ;
 int FUNC_5 (struct cs_etm_queue*,int *) ;
 int FUNC_6 (struct cs_etm_queue*) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct cs_etm_auxtrace *VAR_2,
          struct auxtrace_queue *VAR_3,
          unsigned int VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;
 u8 VAR_7;
 u64 VAR_8;
 struct cs_etm_queue *VAR_9 = VAR_3->priv;

 if (FUNC_7(&VAR_3->head) || VAR_9)
  goto out;

 VAR_9 = FUNC_2(VAR_2);

 if (!VAR_9) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_3->priv = VAR_9;
 VAR_9->etm = VAR_2;
 VAR_9->queue_nr = VAR_4;
 VAR_9->offset = 0;

 if (VAR_2->timeless_decoding)
  goto out;
 while (1) {




  VAR_5 = FUNC_6(VAR_9);
  if (VAR_5 <= 0)
   goto out;






  VAR_5 = FUNC_4(VAR_9);
  if (VAR_5)
   goto out;





  VAR_8 = FUNC_5(VAR_9, &VAR_7);


  if (VAR_8)
   break;
  FUNC_3(VAR_9);
 }
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_5 = FUNC_1(&VAR_2->heap, VAR_6, VAR_8);
out:
 return VAR_5;
}
