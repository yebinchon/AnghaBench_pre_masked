
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut16 ;


 int FUNC_0 (char const* const*,scalar_t__,int **) ;
 int FUNC_1 (char const* const*,scalar_t__,int **) ;
 int FUNC_2 (char const* const*,scalar_t__,int **) ;
 int FUNC_3 (int,int **) ;
 int FUNC_4 (char const* const,char*) ;
 int FUNC_5 (char const* const,scalar_t__*) ;

__attribute__((used)) static bool FUNC_6(char const*const*VAR_0, ut16 VAR_1, ut8**VAR_2) {
 if (!FUNC_4 (VAR_0[0], "@a+dptr")
  || !FUNC_4 (VAR_0[0], "[a+dptr]")) {
  return FUNC_3 (0x73, VAR_2);
 }

 ut16 VAR_3;
 if (!FUNC_5 (VAR_0[0], &VAR_3)) {
  return 0;
 }
 ut16 VAR_4;
 if ( VAR_1 < VAR_3 ) {
  VAR_4 = VAR_3 - VAR_1;
 }
 else {
  VAR_4 = VAR_1 - VAR_3;
 }

 if ( VAR_4 < 0x100 ) {
  return FUNC_2 (VAR_0, VAR_1, VAR_2);
 }
 else if ( VAR_4 < 0x08FF ) {
  return FUNC_0 (VAR_0, VAR_1, VAR_2);
 }
 else {
  return FUNC_1 (VAR_0, VAR_1, VAR_2);
 }
}
