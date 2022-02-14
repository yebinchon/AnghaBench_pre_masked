
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_12__ {int sy; int sx; int alphaBlendingFlag; int transparent; scalar_t__ trueColor; } ;
typedef int (* FuncPtr ) (gdImagePtr,int,int) ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (gdImagePtr,int,int) ;
 int FUNC_4 (gdImagePtr,int,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int) ;
 int FUNC_9 (int,int,int,int) ;

gdImagePtr FUNC_10 (gdImagePtr VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;
 gdImagePtr VAR_9;
 typedef int (*FuncPtr)(gdImagePtr, int, int);
 FuncPtr VAR_10;

 if (VAR_0->trueColor) {
  VAR_10 = FUNC_4;
 } else {
  VAR_10 = FUNC_3;
 }
 VAR_9 = FUNC_2 (VAR_0->sy, VAR_0->sx);

 if (VAR_9 != ((void*)0)) {
  int VAR_11 = VAR_9->alphaBlendingFlag;
  VAR_9->alphaBlendingFlag = 0;

  VAR_9->transparent = VAR_0->transparent;

  FUNC_6 (VAR_9, VAR_0);

  for (VAR_2 = 0; VAR_2<VAR_0->sy; VAR_2++) {
   for (VAR_3 = 0; VAR_3<VAR_0->sx; VAR_3++) {
    VAR_4 = VAR_10 (VAR_0, VAR_3, VAR_2);
    if (!VAR_0->trueColor) {
     VAR_5 = FUNC_7(VAR_0,VAR_4);
     VAR_6 = FUNC_5(VAR_0,VAR_4);
     VAR_7 = FUNC_1(VAR_0,VAR_4);
     VAR_8 = FUNC_0(VAR_0,VAR_4);
     VAR_4 = FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8);
    }

    if (VAR_1 && VAR_4 == VAR_9->transparent) {
     FUNC_8(VAR_9, (VAR_9->sx - VAR_2 - 1), VAR_3, VAR_9->transparent);
    } else {
     FUNC_8(VAR_9, (VAR_9->sx - VAR_2 - 1), VAR_3, VAR_4);
    }
   }
  }
  VAR_9->alphaBlendingFlag = VAR_11;
 }

 return VAR_9;
}
