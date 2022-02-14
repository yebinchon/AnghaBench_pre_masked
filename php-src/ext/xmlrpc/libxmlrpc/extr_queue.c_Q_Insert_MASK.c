
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int queue ;


 int VAR_0 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,int (*) (void const*,void const*)) ;
 int VAR_1 ;

int FUNC_2(queue *VAR_2, void *VAR_3, int (*VAR_4)(const void *, const void *))
{
   if (VAR_2 == ((void*)0)) {
 return VAR_0;
   }

   FUNC_0(VAR_2, VAR_3);

   if(!FUNC_1(VAR_2, VAR_4))
      return VAR_0;

   return VAR_1;
}
