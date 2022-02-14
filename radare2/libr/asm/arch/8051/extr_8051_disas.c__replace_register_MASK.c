
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (char*,char*,char*,int ) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static char* FUNC_3(char* VAR_3, ut8 VAR_4, ut8 VAR_5) {
 char VAR_6[10];
 char VAR_7[10];
 if (VAR_4 == VAR_1) {
  if (VAR_2[VAR_5]) {
   FUNC_2 (VAR_6, " 0x%02x", VAR_5);
   FUNC_2 (VAR_7, " %s", VAR_2[VAR_5]);
   VAR_3 = FUNC_1 (VAR_3, VAR_6, VAR_7, 0);
  }
 } else if (VAR_4 == VAR_0) {
  VAR_5 = FUNC_0 (VAR_5);
  if (VAR_2[VAR_5]) {
   FUNC_2 (VAR_6, "0x%02x.", VAR_5);
   FUNC_2 (VAR_7, "%s.", VAR_2[VAR_5]);
   VAR_3 = FUNC_1 (VAR_3, VAR_6, VAR_7, 0);
  }
 }
 return VAR_3;
}
