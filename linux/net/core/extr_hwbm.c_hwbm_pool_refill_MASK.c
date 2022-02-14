
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwbm_pool {int frag_size; scalar_t__ (* construct ) (struct hwbm_pool*,void*) ;} ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hwbm_pool*,void*) ;
 void* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct hwbm_pool*,void*) ;

int FUNC_5(struct hwbm_pool *VAR_2, gfp_t VAR_3)
{
 int VAR_4 = VAR_2->frag_size;
 void *VAR_5;

 if (FUNC_2(VAR_4 <= VAR_1))
  VAR_5 = FUNC_3(VAR_4);
 else
  VAR_5 = FUNC_1(VAR_4, VAR_3);

 if (!VAR_5)
  return -VAR_0;

 if (VAR_2->construct)
  if (VAR_2->construct(VAR_2, VAR_5)) {
   FUNC_0(VAR_2, VAR_5);
   return -VAR_0;
  }

 return 0;
}
