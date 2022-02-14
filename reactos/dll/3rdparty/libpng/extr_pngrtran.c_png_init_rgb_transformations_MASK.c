
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* png_uint_16 ;
typedef TYPE_3__* png_structrp ;
struct TYPE_6__ {int gray; void* blue; void* green; void* red; } ;
struct TYPE_5__ {int gray; void* blue; void* green; void* red; } ;
struct TYPE_7__ {int color_type; scalar_t__ num_trans; int transformations; int bit_depth; TYPE_2__ trans_color; TYPE_1__ background; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_0(png_structrp VAR_8)
{




   int VAR_9 = (VAR_8->color_type & VAR_1) != 0;
   int VAR_10 = VAR_8->num_trans > 0;


   if (VAR_9 == 0)
   {
      if (VAR_10 == 0)
         VAR_8->transformations &= ~(VAR_3 | VAR_0);
   }
}
