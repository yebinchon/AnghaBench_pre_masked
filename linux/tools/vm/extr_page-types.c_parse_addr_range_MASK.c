
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_3(VAR_1, ',');
 if (!VAR_4)
  VAR_4 = FUNC_3(VAR_1, '+');

 if (VAR_4 == VAR_1) {
  VAR_2 = 0;
  VAR_3 = FUNC_2(VAR_4 + 1);
 } else if (VAR_4) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_4[1] == '\0')
   VAR_3 = VAR_0;
  else {
   VAR_3 = FUNC_2(VAR_4 + 1);
   if (*VAR_4 == ',') {
    if (VAR_3 < VAR_2)
     FUNC_1("invalid range: %lu,%lu\n",
       VAR_2, VAR_3);
    VAR_3 -= VAR_2;
   }
  }
 } else {
  VAR_2 = FUNC_2(VAR_1);
  VAR_3 = 1;
 }

 FUNC_0(VAR_2, VAR_3);
}
