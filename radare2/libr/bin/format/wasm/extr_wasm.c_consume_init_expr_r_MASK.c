
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef scalar_t__ ut64 ;
typedef int RBuffer ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static size_t FUNC_3 (RBuffer *VAR_0, ut64 VAR_1, ut8 VAR_2, void *VAR_3) {
 if (!VAR_0 || VAR_1 >= FUNC_1 (VAR_0) || FUNC_2 (VAR_0) > VAR_1) {
  return 0;
 }
 size_t VAR_4 = 0;
 ut8 VAR_5 = FUNC_0 (VAR_0);
 while (FUNC_2 (VAR_0) <= VAR_1 && VAR_5 != VAR_2) {
  VAR_5 = FUNC_0 (VAR_0);
  VAR_4++;
 }
 if (VAR_5 != VAR_2) {
  return 0;
 }
 return VAR_4 + 1;
}
