
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwbm_pool {scalar_t__ buf_num; scalar_t__ size; int buf_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hwbm_pool*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,unsigned int) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct hwbm_pool *VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(&VAR_1->buf_lock);
 if (VAR_1->buf_num == VAR_1->size) {
  FUNC_4("pool already filled\n");
  FUNC_2(&VAR_1->buf_lock);
  return VAR_1->buf_num;
 }

 if (VAR_2 + VAR_1->buf_num > VAR_1->size) {
  FUNC_4("cannot allocate %d buffers for pool\n",
   VAR_2);
  FUNC_2(&VAR_1->buf_lock);
  return 0;
 }

 if ((VAR_2 + VAR_1->buf_num) < VAR_1->buf_num) {
  FUNC_4("Adding %d buffers to the %d current buffers will overflow\n",
   VAR_2, VAR_1->buf_num);
  FUNC_2(&VAR_1->buf_lock);
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_0);
  if (VAR_3 < 0)
   break;
 }


 VAR_1->buf_num += VAR_4;

 FUNC_3("hwpm pool: %d of %d buffers added\n", VAR_4, VAR_2);
 FUNC_2(&VAR_1->buf_lock);

 return VAR_4;
}
