
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;


 char FUNC_0 (char,int) ;

__attribute__((used)) static void FUNC_1(ut8 VAR_0, const ut8 *VAR_1, ut8 *VAR_2, int VAR_3) {
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2[VAR_4] = VAR_1[VAR_4];
  if ((VAR_1[VAR_4] < 'a' || VAR_1[VAR_4] > 'z') && (VAR_1[VAR_4] < 'A' || VAR_1[VAR_4] > 'Z')) {
   continue;
  }
  VAR_2[VAR_4] += VAR_0;
  VAR_2[VAR_4] -= (VAR_1[VAR_4] >= 'a' && VAR_1[VAR_4] <= 'z') ? 'a' : 'A';
  VAR_2[VAR_4] = FUNC_0 (VAR_2[VAR_4], 26);
  VAR_2[VAR_4] += (VAR_1[VAR_4] >= 'a' && VAR_1[VAR_4] <= 'z') ? 'a' : 'A';
 }
}
