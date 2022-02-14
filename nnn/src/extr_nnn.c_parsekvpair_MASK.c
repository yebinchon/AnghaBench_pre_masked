
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_3__ {char key; char* val; } ;
typedef TYPE_1__ kv ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(kv *VAR_2, char **VAR_3, const char *VAR_4, uchar VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7;
 char *VAR_8 = FUNC_0(VAR_4);

 if (!VAR_8 || !*VAR_8)
  return VAR_1;

 *VAR_3 = FUNC_1(VAR_8);
 VAR_8 = *VAR_3;
 VAR_7 = VAR_8;

 while (*VAR_8 && VAR_6 < VAR_5) {
  if (VAR_8 == VAR_7) {
   VAR_2[VAR_6].key = *VAR_8;
   if (*++VAR_8 != ':')
    return VAR_0;
   if (*++VAR_8 == '\0')
    return VAR_0;
   VAR_2[VAR_6].val = VAR_8;
   ++VAR_6;
  }

  if (*VAR_8 == ';') {

   if (VAR_6 > 0 && *(VAR_8 - 1) == '/')
    *(VAR_8 - 1) = '\0';

   *VAR_8 = '\0';
   VAR_7 = VAR_8 + 1;
  }

  ++VAR_8;
 }

 if (VAR_6 < VAR_5) {
  if (*VAR_2[VAR_6 - 1].val == '\0')
   return VAR_0;
  VAR_2[VAR_6].key = '\0';
 }

 return VAR_1;
}
