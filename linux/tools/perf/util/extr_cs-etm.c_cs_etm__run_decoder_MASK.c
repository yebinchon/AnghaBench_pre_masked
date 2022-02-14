
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_traceid_queue {int dummy; } ;
struct cs_etm_queue {scalar_t__ buf_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs_etm_queue*) ;
 int FUNC_1 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;
 struct cs_etm_traceid_queue* FUNC_2 (struct cs_etm_queue*,int ) ;
 int FUNC_3 (struct cs_etm_queue*) ;
 int FUNC_4 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;

__attribute__((used)) static int FUNC_5(struct cs_etm_queue *VAR_2)
{
 int VAR_3 = 0;
 struct cs_etm_traceid_queue *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_4)
  return -VAR_1;


 while (1) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3 <= 0)
   return VAR_3;


  do {
   VAR_3 = FUNC_0(VAR_2);
   if (VAR_3)
    return VAR_3;






   VAR_3 = FUNC_4(VAR_2, VAR_4);

  } while (VAR_2->buf_len);

  if (VAR_3 == 0)

   VAR_3 = FUNC_1(VAR_2, VAR_4);
 }

 return VAR_3;
}
