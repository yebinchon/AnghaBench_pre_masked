
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int width; int height; } ;
typedef TYPE_1__ gdRect ;
typedef int * gdImagePtr ;


 scalar_t__ FUNC_0 (int *,unsigned int const,int ,float const) ;
 unsigned int const FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

gdImagePtr FUNC_7(gdImagePtr VAR_0, const unsigned int VAR_1, const float VAR_2)
{
 const int VAR_3 = FUNC_4(VAR_0);
 const int VAR_4 = FUNC_5(VAR_0);

 int VAR_5,VAR_6;
 int VAR_7;
 gdRect VAR_8;

 VAR_8.x = 0;
 VAR_8.y = 0;
 VAR_8.width = 0;
 VAR_8.height = 0;


 if (VAR_2 > 100.0) {
  return ((void*)0);
 }

 if (!FUNC_6(VAR_0) && VAR_1 >= FUNC_1(VAR_0)) {
  return ((void*)0);
 }





 VAR_7 = 1;
 for (VAR_6 = 0; VAR_7 && VAR_6 < VAR_4; VAR_6++) {
  for (VAR_5 = 0; VAR_7 && VAR_5 < VAR_3; VAR_5++) {
   VAR_7 = (FUNC_0(VAR_0, VAR_1, FUNC_3(VAR_0, VAR_5,VAR_6), VAR_2)) > 0;
  }
 }


 if (VAR_7) {
  return ((void*)0);
 }

 VAR_8.y = VAR_6 - 1;

 VAR_7 = 1;
 for (VAR_6 = VAR_4 - 1; VAR_7 && VAR_6 >= 0; VAR_6--) {
  for (VAR_5 = 0; VAR_7 && VAR_5 < VAR_3; VAR_5++) {
   VAR_7 = (FUNC_0(VAR_0, VAR_1, FUNC_3(VAR_0, VAR_5, VAR_6), VAR_2)) > 0;
  }
 }
 VAR_8.height = VAR_6 - VAR_8.y + 2;

 VAR_7 = 1;
 for (VAR_5 = 0; VAR_7 && VAR_5 < VAR_3; VAR_5++) {
  for (VAR_6 = 0; VAR_7 && VAR_6 < VAR_8.y + VAR_8.height; VAR_6++) {
   VAR_7 = (FUNC_0(VAR_0, VAR_1, FUNC_3(VAR_0, VAR_5,VAR_6), VAR_2)) > 0;
  }
 }
 VAR_8.x = VAR_5 - 1;

 VAR_7 = 1;
 for (VAR_5 = VAR_3 - 1; VAR_7 && VAR_5 >= 0; VAR_5--) {
  for (VAR_6 = 0; VAR_7 && VAR_6 < VAR_8.y + VAR_8.height; VAR_6++) {
   VAR_7 = (FUNC_0(VAR_0, VAR_1, FUNC_3(VAR_0, VAR_5,VAR_6), VAR_2)) > 0;
  }
 }
 VAR_8.width = VAR_5 - VAR_8.x + 2;

 return FUNC_2(VAR_0, &VAR_8);
}
