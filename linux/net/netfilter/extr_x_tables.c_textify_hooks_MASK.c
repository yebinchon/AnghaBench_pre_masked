
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 unsigned int FUNC_0 (char const* const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,size_t,char*,char*,char const* const) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_1, size_t VAR_2, unsigned int VAR_3, uint8_t VAR_4)
{
 static const char *const VAR_5[] = {
  "PREROUTING", "INPUT", "FORWARD",
  "OUTPUT", "POSTROUTING", "BROUTING",
 };
 static const char *const VAR_6[] = {
  "INPUT", "FORWARD", "OUTPUT",
 };
 const char *const *VAR_7;
 unsigned int VAR_8, VAR_9;
 char *VAR_10 = VAR_1;
 bool VAR_11 = 0;
 int VAR_12;

 VAR_7 = (VAR_4 == VAR_0) ? VAR_6 : VAR_5;
 VAR_9 = (VAR_4 == VAR_0) ? FUNC_0(VAR_6) :
                                    FUNC_0(VAR_5);
 *VAR_10 = '\0';
 for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
  if (!(VAR_3 & (1 << VAR_8)))
   continue;
  VAR_12 = FUNC_1(VAR_10, VAR_2, "%s%s", VAR_11 ? "/" : "", VAR_7[VAR_8]);
  if (VAR_12 > 0) {
   VAR_2 -= VAR_12;
   VAR_10 += VAR_12;
  }
  VAR_11 = 1;
 }

 return VAR_1;
}
