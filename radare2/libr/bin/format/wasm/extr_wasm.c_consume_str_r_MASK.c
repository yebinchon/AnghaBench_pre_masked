
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int RBuffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static size_t FUNC_4 (RBuffer *VAR_1, ut64 VAR_2, size_t VAR_3, char *VAR_4) {
 ut64 VAR_5 = FUNC_3 (VAR_1);
 if (!VAR_1 || VAR_2 >= FUNC_2 (VAR_1) || VAR_5 > VAR_2) {
  return 0;
 }
 if (!(VAR_5 + VAR_3 - 1 <= VAR_2)) {
  return 0;
 }
 if (VAR_3 > 0) {
  FUNC_1 (VAR_1, (ut8 *)VAR_4, FUNC_0 (VAR_0 - 1, VAR_3));
 } else {
  *VAR_4 = 0;
 }
 return VAR_3;
}
