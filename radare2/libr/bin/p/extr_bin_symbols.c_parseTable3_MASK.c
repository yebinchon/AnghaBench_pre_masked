
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RBuffer ;


 int * FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(RBuffer *VAR_2, int VAR_3) {

 const int VAR_4 = VAR_0;
 int VAR_5 = VAR_1;
 int VAR_6, VAR_7 = VAR_5 - VAR_4;
 int VAR_8 = -1;
 int VAR_9 = -1;

 ut8 *VAR_10 = FUNC_0 (VAR_7, 1);
 if (!VAR_10) {
  return;
 }
 FUNC_3 (VAR_2, VAR_3, VAR_10, VAR_7);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6 += 8) {

  if (VAR_6 + 4 >= VAR_7) {
   FUNC_1 ("..skip..\n");
   continue;
  }
  int VAR_11 = FUNC_4 (VAR_10 + VAR_6);


  if (VAR_8 == -1 || VAR_11 < VAR_8) {
   VAR_8 = VAR_11;
  }
  if (VAR_9 == -1 || VAR_11 > VAR_9) {
   VAR_9 = VAR_11;
  }
 }
 FUNC_2 (VAR_10);
}
