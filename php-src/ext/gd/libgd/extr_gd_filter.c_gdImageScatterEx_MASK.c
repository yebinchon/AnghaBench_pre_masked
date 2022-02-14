
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* gdScatterPtr ;
typedef TYPE_2__* gdImagePtr ;
struct TYPE_9__ {int sy; int sx; } ;
struct TYPE_8__ {int sub; int plus; int num_colors; int* colors; int seed; } ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_2__*,int,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

int FUNC_5(gdImagePtr VAR_0, gdScatterPtr VAR_1)
{
 register int VAR_2, VAR_3;
 int VAR_4, VAR_5;
 int VAR_6, VAR_7;
 unsigned int VAR_8;
 int VAR_9 = VAR_1->sub, VAR_10 = VAR_1->plus;

 if (VAR_10 == 0 && VAR_9 == 0) {
  return 1;
 }
 else if (VAR_9 >= VAR_10) {
  return 0;
 }

 (void)FUNC_4(VAR_1->seed);

 if (VAR_1->num_colors) {
  for (VAR_3 = 0; VAR_3 < VAR_0->sy; VAR_3++) {
   for (VAR_2 = 0; VAR_2 < VAR_0->sx; VAR_2++) {
    VAR_4 = (int)(VAR_2 + ((FUNC_3() % (VAR_10 - VAR_9)) + VAR_9));
    VAR_5 = (int)(VAR_3 + ((FUNC_3() % (VAR_10 - VAR_9)) + VAR_9));

    if (!FUNC_0(VAR_0, VAR_4, VAR_5)) {
     continue;
    }

    VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3);
    VAR_7 = FUNC_1(VAR_0, VAR_4, VAR_5);

    for (VAR_8 = 0; VAR_8 < VAR_1->num_colors; VAR_8++) {
     if (VAR_6 == VAR_1->colors[VAR_8]) {
      FUNC_2(VAR_0, VAR_4, VAR_5, VAR_6);
      FUNC_2(VAR_0, VAR_2, VAR_3, VAR_7);
     }
    }
   }
  }
 }
 else {
  for (VAR_3 = 0; VAR_3 < VAR_0->sy; VAR_3++) {
   for (VAR_2 = 0; VAR_2 < VAR_0->sx; VAR_2++) {
    VAR_4 = (int)(VAR_2 + ((FUNC_3() % (VAR_10 - VAR_9)) + VAR_9));
    VAR_5 = (int)(VAR_3 + ((FUNC_3() % (VAR_10 - VAR_9)) + VAR_9));

    if (!FUNC_0(VAR_0, VAR_4, VAR_5)) {
     continue;
    }

    VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3);
    VAR_7 = FUNC_1(VAR_0, VAR_4, VAR_5);

    FUNC_2(VAR_0, VAR_4, VAR_5, VAR_6);
    FUNC_2(VAR_0, VAR_2, VAR_3, VAR_7);
   }
  }
 }

 return 1;
}
