
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 int FUNC_0 (char const*,int*) ;

__attribute__((used)) static bool FUNC_1(char const* VAR_0, ut8* VAR_1) {
 ut16 VAR_2;


 if ( !FUNC_0 (VAR_0, &VAR_2)
  || (0xFF < VAR_2)) {
  return 0;
 }
 *VAR_1 = VAR_2;
 return 1;
}
