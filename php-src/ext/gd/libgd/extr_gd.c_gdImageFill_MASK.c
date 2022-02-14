
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct seg {int dummy; } ;
typedef TYPE_1__* gdImagePtr ;
struct TYPE_6__ {int colorsTotal; int alphaBlendingFlag; int sx; int sy; int trueColor; } ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (struct seg*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int,int,int) ;

void FUNC_7(gdImagePtr VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;
 int VAR_10,VAR_11;

 int VAR_12;



 struct seg *VAR_13 = ((void*)0);
 struct seg *VAR_14;

 if (!VAR_1->trueColor && VAR_4 > (VAR_1->colorsTotal -1)) {
  return;
 }

 VAR_12 = VAR_1->alphaBlendingFlag;
 VAR_1->alphaBlendingFlag = 0;

 if (VAR_4==VAR_0){
  FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4);
  VAR_1->alphaBlendingFlag = VAR_12;
  return;
 }

 VAR_10=VAR_1->sx;VAR_11=VAR_1->sy;
 VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_9==VAR_4 || VAR_2<0 || VAR_2>VAR_10 || VAR_3<0 || VAR_3>VAR_11) {
  VAR_1->alphaBlendingFlag = VAR_12;
  return;
 }




 if (VAR_1->sx < 4) {
  int VAR_15 = VAR_2, VAR_16 = VAR_3, VAR_17;
  do {
   do {
    VAR_17 = FUNC_4(VAR_1, VAR_15, VAR_16);
    if (VAR_17 != VAR_9) {
     goto done;
    }
    FUNC_5(VAR_1, VAR_15, VAR_16, VAR_4);
   } while(VAR_15++ < (VAR_1->sx -1));
   VAR_15 = VAR_2;
  } while(VAR_16++ < (VAR_1->sy -1));
  goto done;
 }

 VAR_13 = (struct seg *)FUNC_6(sizeof(struct seg), ((int)(VAR_1->sy*VAR_1->sx)/4), 1);
 VAR_14 = VAR_13;


 FUNC_1(VAR_3,VAR_2,VAR_2,1);

  FUNC_1(VAR_3+1, VAR_2, VAR_2, -1);
 while (VAR_14>VAR_13) {
  FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8);

  for (VAR_2=VAR_6; VAR_2>=0 && FUNC_4(VAR_1,VAR_2, VAR_3)==VAR_9; VAR_2--) {
   FUNC_5(VAR_1,VAR_2, VAR_3, VAR_4);
  }
  if (VAR_2>=VAR_6) {
   goto skip;
  }
  VAR_5 = VAR_2+1;


  if (VAR_5<VAR_6) {
   FUNC_1(VAR_3, VAR_5, VAR_6-1, -VAR_8);
  }
  VAR_2 = VAR_6+1;
  do {
   for (; VAR_2<=VAR_10 && FUNC_4(VAR_1,VAR_2, VAR_3)==VAR_9; VAR_2++) {
    FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
   }
   FUNC_1(VAR_3, VAR_5, VAR_2-1, VAR_8);

   if (VAR_2>VAR_7+1) {
    FUNC_1(VAR_3, VAR_7+1, VAR_2-1, -VAR_8);
   }
skip:
   for (VAR_2++; VAR_2<=VAR_7 && (FUNC_4(VAR_1, VAR_2, VAR_3)!=VAR_9); VAR_2++);

   VAR_5 = VAR_2;
  } while (VAR_2<=VAR_7);
 }

 FUNC_3(VAR_13);

done:
 VAR_1->alphaBlendingFlag = VAR_12;
}
