
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,int,unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(unsigned char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 unsigned char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

 VAR_9 = (unsigned char *) FUNC_2(VAR_3);
 if (!VAR_9) {
  return -1;
 }

 FUNC_4(VAR_9, VAR_2, VAR_3);
 VAR_11 = VAR_10 = VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_7 == 0) {
   VAR_9 = VAR_10;
   VAR_7++;
   VAR_10++;
   VAR_4 = VAR_0;
   continue;
  }

  if (VAR_7 == 1) {

   if (FUNC_3(VAR_10, VAR_10 - 1, 1) == 0) {
    VAR_4 = VAR_1;
   }
  }

  if (VAR_4 == VAR_1) {
   if (VAR_7 >= 128 || FUNC_3(VAR_10, VAR_10 - 1, 1) != 0) {

    VAR_8 = FUNC_0(VAR_2, VAR_4, VAR_7, VAR_9);
    VAR_2 += VAR_8;
    VAR_5 += VAR_8;
    VAR_7 = 0;
    VAR_6--;
   } else {
    VAR_7++;
    VAR_10++;
   }
  } else {
   if (VAR_7 >= 128 || FUNC_3(VAR_10, VAR_10 - 1, 1) == 0) {

    VAR_8 = FUNC_0(VAR_2, VAR_4, VAR_7, VAR_9);
    VAR_2 += VAR_8;
    VAR_5 += VAR_8;
    VAR_7 = 0;
    VAR_6--;
   } else {

    VAR_7++;
    VAR_10++;
   }

  }
 }

 if (VAR_7) {
  if (VAR_4 == VAR_1) {
   VAR_5 += FUNC_0(VAR_2, VAR_4, VAR_7, VAR_9);
  }
 }

 FUNC_1(VAR_11);

 return VAR_5;
}
