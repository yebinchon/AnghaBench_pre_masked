
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int width; int height; } ;
typedef TYPE_1__ gdRect ;
typedef int * gdImagePtr ;







 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int,int,int,int ) ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

gdImagePtr FUNC_7(gdImagePtr VAR_0, const unsigned int VAR_1)
{
 const int VAR_2 = FUNC_5(VAR_0);
 const int VAR_3 = FUNC_6(VAR_0);

 int VAR_4,VAR_5;
 int VAR_6, VAR_7;
 gdRect VAR_8;

 VAR_8.x = 0;
 VAR_8.y = 0;
 VAR_8.width = 0;
 VAR_8.height = 0;

 switch (VAR_1) {
  case 129:
   VAR_6 = FUNC_4(VAR_0);
   break;

  case 132:
   VAR_6 = FUNC_1(VAR_0, 0, 0, 0, 0);
   break;

  case 128:
   VAR_6 = FUNC_1(VAR_0, 255, 255, 255, 0);
   break;

  case 130:
   FUNC_0(VAR_0, &VAR_6);
   break;

  case 131:
  default:
   VAR_6 = FUNC_4(VAR_0);
   break;
 }





 VAR_7 = 1;
 for (VAR_5 = 0; VAR_7 && VAR_5 < VAR_3; VAR_5++) {
  for (VAR_4 = 0; VAR_7 && VAR_4 < VAR_2; VAR_4++) {
   int VAR_9 = FUNC_3(VAR_0, VAR_4, VAR_5);
   VAR_7 = (VAR_6 == VAR_9);
  }
 }


 if (VAR_7) {
  return ((void*)0);
 }

 VAR_8.y = VAR_5 - 1;

 VAR_7 = 1;
 for (VAR_5 = VAR_3 - 1; VAR_7 && VAR_5 >= 0; VAR_5--) {
  for (VAR_4 = 0; VAR_7 && VAR_4 < VAR_2; VAR_4++) {
   VAR_7 = (VAR_6 == FUNC_3(VAR_0, VAR_4,VAR_5));
  }
 }
 VAR_8.height = VAR_5 - VAR_8.y + 2;

 VAR_7 = 1;
 for (VAR_4 = 0; VAR_7 && VAR_4 < VAR_2; VAR_4++) {
  for (VAR_5 = 0; VAR_7 && VAR_5 < VAR_8.y + VAR_8.height; VAR_5++) {
   VAR_7 = (VAR_6 == FUNC_3(VAR_0, VAR_4,VAR_5));
  }
 }
 VAR_8.x = VAR_4 - 1;

 VAR_7 = 1;
 for (VAR_4 = VAR_2 - 1; VAR_7 && VAR_4 >= 0; VAR_4--) {
  for (VAR_5 = 0; VAR_7 && VAR_5 < VAR_8.y + VAR_8.height; VAR_5++) {
   VAR_7 = (VAR_6 == FUNC_3(VAR_0, VAR_4,VAR_5));
  }
 }
 VAR_8.width = VAR_4 - VAR_8.x + 2;

 return FUNC_2(VAR_0, &VAR_8);
}
