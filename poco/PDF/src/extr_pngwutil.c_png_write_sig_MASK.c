
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
typedef int png_byte ;
struct TYPE_4__ {size_t sig_bytes; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int*,scalar_t__) ;

void
FUNC_1(png_structp VAR_1)
{
   png_byte VAR_2[8] = {137, 80, 78, 71, 13, 10, 26, 10};

   FUNC_0(VAR_1, &VAR_2[VAR_1->sig_bytes],
      (png_size_t)8 - VAR_1->sig_bytes);
   if(VAR_1->sig_bytes < 3)
      VAR_1->mode |= VAR_0;
}
