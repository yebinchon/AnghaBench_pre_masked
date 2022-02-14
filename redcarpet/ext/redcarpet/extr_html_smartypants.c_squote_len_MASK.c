
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const*,char*,size_t) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static size_t
FUNC_2(const uint8_t *VAR_0, size_t VAR_1)
{
 static char* VAR_2[] = { "'", "&#39;", "&#x27;", "&apos;", ((void*)0) };
 char** VAR_3;

 for (VAR_3 = VAR_2; *VAR_3; ++VAR_3) {
  size_t VAR_4 = FUNC_1(*VAR_3);
  if (VAR_1 >= VAR_4 && FUNC_0(VAR_0, *VAR_3, VAR_4) == 0) {
   return VAR_4;
  }
 }

 return 0;
}
