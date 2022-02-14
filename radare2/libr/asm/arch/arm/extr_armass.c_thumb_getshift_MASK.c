
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static ut32 FUNC_6(const char *VAR_1) {

 const char *VAR_2[] = {
  "LSL", "LSR", "ASR", "ROR", 0, "RRX"
 };
 char *VAR_3 = FUNC_5 (VAR_1);
 char *VAR_4;
 char *VAR_5;
 ut32 VAR_6 = 0;
 ut32 VAR_7 = 0;
 VAR_0 = 0;
 ut32 VAR_8;
 ut32 VAR_9;

 FUNC_2 (VAR_3,1);

 if (!FUNC_4 (VAR_3, VAR_2[5])) {

  VAR_6 |= 3 << 12;
  FUNC_0 (VAR_3);
  return VAR_6;
 }

 VAR_5 = FUNC_3 (VAR_3, ' ');
 if (!VAR_5) {
  FUNC_0 (VAR_3);
  VAR_0 = 1;
  return 0;
 }
 *VAR_5 = 0;
 VAR_4 = FUNC_5 (++VAR_5);

 for (VAR_9 = 0; VAR_2[VAR_9]; VAR_9++) {
  if (!FUNC_4 (VAR_3, VAR_2[VAR_9])) {
   VAR_7 = 1;
   break;
  }
 }
 if (!VAR_7) {
  VAR_0 = 1;
  FUNC_0 (VAR_3);
  FUNC_0 (VAR_4);
  return 0;
 }
 VAR_6 |= VAR_9 << 12;

 VAR_8 = FUNC_1 (VAR_4);
 if (VAR_0 || VAR_8 > 32) {
  VAR_0 = 1;
  FUNC_0 (VAR_3);
  FUNC_0 (VAR_4);
  return 0;
 }
 VAR_6 |= ( (VAR_8 & 0x1c) << 2);
 VAR_6 |= ( (VAR_8 & 0x3) << 14);

 FUNC_0 (VAR_3);
 FUNC_0 (VAR_4);
 return VAR_6;
}
