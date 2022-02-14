
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t __u32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 size_t VAR_4 ;
 char** VAR_5 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static __u32 FUNC_2(const char *VAR_6, bool *VAR_7)
{
 __u32 VAR_8;

 if (VAR_6[0] == '!') {
  *VAR_7 = 1;
  VAR_6++;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (!FUNC_0(VAR_0) && VAR_8 == VAR_2)
   continue;


  if (!*VAR_7 && VAR_8 == VAR_3)
   continue;

  if (FUNC_1(VAR_6, VAR_5[VAR_8]) == 0)
   return 1 << VAR_8;
 }

 if (FUNC_1(VAR_6, "FLOW_RND") == 0) {
  *VAR_7 = !*VAR_7;
  return VAR_1;
 }

 return 0;
}
