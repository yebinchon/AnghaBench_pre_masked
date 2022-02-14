
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int queue ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int VAR_1 ;

int FUNC_3(queue *VAR_2, void *VAR_3,
           int (*VAR_4)(const void *, const void *))
{
   void *VAR_5;

   if (VAR_2 == ((void*)0)) {
 return VAR_0;
   }

   VAR_5 = FUNC_1(VAR_2);
   do {
      if(VAR_4(VAR_5, VAR_3) == 0)
         return VAR_1;
      VAR_5 = FUNC_2(VAR_2);
   } while(!FUNC_0(VAR_2));

   if(VAR_4(VAR_5, VAR_3) == 0)
      return VAR_1;

   return VAR_0;
}
