
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixel_buffer {double* lambda; int primitive; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;

struct pixel_buffer *FUNC_1(void)
{
   struct pixel_buffer *VAR_2;
   VAR_2 = (struct pixel_buffer *) FUNC_0(sizeof(struct pixel_buffer), 1);
   if (VAR_2) {
      int VAR_3;

      VAR_2->primitive = VAR_0;



      for (VAR_3=0; VAR_3<VAR_1; VAR_3++) {
         VAR_2->lambda[VAR_3] = 0.0;
      }
   }
   return VAR_2;
}
