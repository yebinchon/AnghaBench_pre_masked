
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_queue {int buf_len; int decoder; } ;


 int FUNC_0 (struct cs_etm_queue*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cs_etm_queue *VAR_0)
{
 int VAR_1;

 if (!VAR_0->buf_len) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 <= 0)
   return VAR_1;




  VAR_1 = FUNC_1(VAR_0->decoder);
  if (VAR_1)
   return VAR_1;
 }

 return VAR_0->buf_len;
}
