
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ img_buffer; scalar_t__ img_buffer_end; } ;
typedef TYPE_1__ stbi ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 unsigned char* FUNC_2 (TYPE_1__*,int*,int*,int*,int) ;

unsigned char *FUNC_3(FILE *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
   unsigned char *VAR_6;
   stbi VAR_7;
   FUNC_1(&VAR_7,VAR_1);
   VAR_6 = FUNC_2(&VAR_7,VAR_2,VAR_3,VAR_4,VAR_5);
   if (VAR_6) {

      FUNC_0(VAR_1, - (int) (VAR_7.img_buffer_end - VAR_7.img_buffer), VAR_0);
   }
   return VAR_6;
}
