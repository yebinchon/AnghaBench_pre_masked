
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef double uint16_t ;
typedef scalar_t__ BOOL ;


 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 char** VAR_4 ;
 float FUNC_0 (float) ;
 double FUNC_1 (double) ;
 char** VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (double) ;

char* FUNC_4(uint64_t VAR_7, BOOL VAR_8, BOOL VAR_9)
{
 int VAR_10;
 static char VAR_11[32];
 const char* VAR_12 = ((VAR_6) && (!VAR_8)) ? VAR_0 : "";
 double VAR_13 = (double)VAR_7;
 double VAR_14;
 uint16_t VAR_15;
 char **VAR_16 = VAR_8?VAR_4:VAR_5;
 const double VAR_17 = VAR_9?1000.0:1024.0;

 for (VAR_10=0; VAR_10<VAR_1-1; VAR_10++) {
  if (VAR_13 < VAR_17)
   break;
  VAR_13 /= VAR_17;
 }
 if (VAR_10 == 0) {
  FUNC_2(VAR_11, "%s%d%s %s", VAR_12, (int)VAR_13, VAR_12, VAR_16[VAR_3-VAR_2]);
 } else if (VAR_9) {
  if (VAR_13 < 8) {
   FUNC_2(VAR_11, (FUNC_0((VAR_13*10.0)-(FUNC_1(VAR_13 + 0.5)*10.0)) < 0.5)?"%0.0f%s":"%0.1f%s",
    VAR_13, VAR_16[VAR_3+VAR_10-VAR_2]);
  } else {
   VAR_14 = (double)FUNC_3((uint16_t)VAR_13);
   VAR_15 = (uint16_t)((FUNC_0(1.0f-(VAR_13 / VAR_14)) < 0.05f)?VAR_14:VAR_13);
   FUNC_2(VAR_11, "%s%d%s %s", VAR_12, VAR_15, VAR_12, VAR_16[VAR_3+VAR_10-VAR_2]);
  }
 } else {
  FUNC_2(VAR_11, (VAR_13 * 10.0 - (FUNC_1(VAR_13) * 10.0)) < 0.5?
   "%s%0.0f%s %s":"%s%0.1f%s %s", VAR_12, VAR_13, VAR_12, VAR_16[VAR_3+VAR_10-VAR_2]);
 }
 return VAR_11;
}
