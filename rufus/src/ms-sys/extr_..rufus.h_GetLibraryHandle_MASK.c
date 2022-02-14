
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HMODULE ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static __inline HMODULE FUNC_3(char* VAR_3) {
 HMODULE VAR_4 = ((void*)0);
 if ((VAR_4 = FUNC_0(VAR_3)) == ((void*)0)) {
  if (VAR_2 >= VAR_0) {
   FUNC_2("Error: MAX_LIBRARY_HANDLES is too small\n");
  } else {
   VAR_4 = FUNC_1(VAR_3);
   if (VAR_4 != ((void*)0))
    VAR_1[VAR_2++] = VAR_4;
  }
 }
 return VAR_4;
}
