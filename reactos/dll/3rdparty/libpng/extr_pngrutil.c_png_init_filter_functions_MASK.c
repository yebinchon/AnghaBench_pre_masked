
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
struct TYPE_4__ {int pixel_depth; int * read_filter; } ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_1(png_structrp VAR_9)
{
   unsigned int VAR_10 = (VAR_9->pixel_depth + 7) >> 3;

   VAR_9->read_filter[VAR_2-1] = VAR_7;
   VAR_9->read_filter[VAR_3-1] = VAR_8;
   VAR_9->read_filter[VAR_0-1] = VAR_4;
   if (VAR_10 == 1)
      VAR_9->read_filter[VAR_1-1] =
         VAR_5;
   else
      VAR_9->read_filter[VAR_1-1] =
         VAR_6;
}
