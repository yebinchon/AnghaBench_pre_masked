
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {char** String; size_t Index; size_t Max; } ;
typedef TYPE_1__ StrArray ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char**,int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

int32_t FUNC_4(StrArray* VAR_0, const char* VAR_1, BOOL VAR_2)
{
 char** VAR_3;
 if ((VAR_0 == ((void*)0)) || (VAR_0->String == ((void*)0)) || (VAR_1 == ((void*)0)))
  return -1;
 if (VAR_0->Index == VAR_0->Max) {
  VAR_0->Max *= 2;
  VAR_3 = VAR_0->String;
  VAR_0->String = (char**)FUNC_1(VAR_0->String, VAR_0->Max*sizeof(char*));
  if (VAR_0->String == ((void*)0)) {
   FUNC_0(VAR_3);
   FUNC_3("Could not reallocate string array\n");
   return -1;
  }
 }
 VAR_0->String[VAR_0->Index] = (VAR_2)?FUNC_2(VAR_1):(char*)VAR_1;
 if (VAR_0->String[VAR_0->Index] == ((void*)0)) {
  FUNC_3("Could not store string in array\n");
  return -1;
 }
 return VAR_0->Index++;
}
