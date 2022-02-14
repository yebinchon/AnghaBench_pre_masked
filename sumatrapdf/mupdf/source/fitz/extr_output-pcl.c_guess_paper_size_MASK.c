
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ paper_size; int features; int orientation; } ;
typedef TYPE_1__ fz_pcl_options ;
struct TYPE_6__ {void* code; int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static void FUNC_1(fz_pcl_options *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12 = 0;


 if (VAR_6->paper_size != 0)
  return;

 VAR_7 = VAR_7 * 300 / VAR_9;
 VAR_8 = VAR_8 * 300 / VAR_9;


 for (VAR_11 = 0; VAR_11 < (int)FUNC_0(VAR_5); VAR_11++)
 {
  if (VAR_5[VAR_11].code > VAR_4 && (VAR_6->features & VAR_3) == 0)
   continue;
  if (VAR_7 == VAR_5[VAR_11].width && VAR_8 == VAR_5[VAR_11].height)
   break;
  if ((VAR_6->features & VAR_2) && VAR_7 == VAR_5[VAR_11].height && VAR_8 == VAR_5[VAR_11].width)
  {
   VAR_12 = 1;
   break;
  }
 }



 if (VAR_11 == FUNC_0(VAR_5))
 {
  if ((VAR_6->features & VAR_1) != 0)
  {

   VAR_11 = VAR_4;
  }
  else
  {

   int VAR_13;
   int VAR_14 = VAR_0;
   for (VAR_13 = 0; VAR_13 < (int)FUNC_0(VAR_5); VAR_13++)
   {
    int VAR_15;
    if (VAR_5[VAR_13].code > VAR_4 && (VAR_6->features & VAR_3) == 0)
     continue;
    VAR_15 = VAR_5[VAR_13].width * VAR_5[VAR_13].height - VAR_7 * VAR_8;
    if (VAR_15 > VAR_14)
     continue;
    if (VAR_7 <= VAR_5[VAR_13].width && VAR_8 <= VAR_5[VAR_13].height)
    {
     VAR_14 = VAR_15;
     VAR_12 = 0;
     VAR_11 = VAR_13;
    }
    if ((VAR_6->features & VAR_2) && VAR_7 <= VAR_5[VAR_13].height && VAR_8 <= VAR_5[VAR_13].width)
    {
     VAR_14 = VAR_15;
     VAR_12 = 1;
     VAR_11 = VAR_13;
    }
   }
  }
 }



 if (VAR_11 < (int)FUNC_0(VAR_5))
  VAR_6->paper_size = VAR_5[VAR_11].code;
 else
  VAR_6->paper_size = VAR_4;

 VAR_6->orientation = VAR_12;
}
