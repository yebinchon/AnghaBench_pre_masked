
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_4__ {int width; int height; scalar_t__* bitmap; } ;
typedef TYPE_1__ Wbmp ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int,int) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *,int,int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int *,TYPE_1__**) ;

gdImagePtr FUNC_5 (gdIOCtx * VAR_2)
{

 Wbmp *VAR_3;
 gdImagePtr VAR_4 = ((void*)0);
 int VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_4 (&VAR_1, VAR_2, &VAR_3)) {
  return ((void*)0);
 }

 if (!(VAR_4 = FUNC_2 (VAR_3->width, VAR_3->height))) {
  FUNC_0 (VAR_3);
  return ((void*)0);
 }


 VAR_6 = FUNC_1(VAR_4, 255, 255, 255);

 VAR_5 = FUNC_1(VAR_4, 0, 0, 0);


 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3->height; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_3->width; VAR_7++) {
   if (VAR_3->bitmap[VAR_9++] == VAR_0) {
    FUNC_3(VAR_4, VAR_7, VAR_8, VAR_6);
   } else {
    FUNC_3(VAR_4, VAR_7, VAR_8, VAR_5);
   }
  }
 }

 FUNC_0(VAR_3);

 return VAR_4;
}
