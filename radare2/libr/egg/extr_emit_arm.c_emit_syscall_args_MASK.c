
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(REgg *VAR_2, int VAR_3) {
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = VAR_4 * VAR_0;
  FUNC_0 (VAR_2, "  ldr %s, [sp, %d]\n",
   VAR_1[VAR_4 + 1], VAR_5? VAR_5 + 4: VAR_5 + 8);
 }
}
