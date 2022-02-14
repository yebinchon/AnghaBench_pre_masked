
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* end; char const* begin; } ;
typedef TYPE_1__ Subject ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(char *VAR_0, const char *VAR_1, Subject *VAR_2, const char **VAR_3, int VAR_4)
{
 const char *VAR_5;
 int VAR_6;

 FUNC_4();

 for(;;) {
  if(FUNC_2(*VAR_0)) {

   if(VAR_1 >= VAR_2->end)
    return 0;
  }
  switch(*VAR_0++) {
  case 137:
   if(*VAR_1 != *VAR_0++)
    return 0;
  case 139:
   VAR_1++;
   continue;
  case 136:
  case 135:
   if (!FUNC_0(VAR_0, VAR_1))
    return 0;
   VAR_0 += *(unsigned char*)VAR_0 * 2 + 1;
   VAR_1++;
   continue;
                case 131:
   if (!FUNC_1(VAR_0, VAR_1))
    return 0;
   VAR_0++;
   VAR_1++;
   continue;
  case 132:
   return 1;
  case 133:
   VAR_6 = (signed char)*VAR_0++;
   VAR_0 = VAR_0 + VAR_6;
   continue;
  case 128:
   VAR_6 = (signed char)*VAR_0++;
   if(FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4))
    return 1;
   VAR_0 = VAR_0 + VAR_6;
   continue;
  case 130:
   VAR_6 = (signed char)*VAR_0++;
   if(FUNC_5(VAR_0 + VAR_6, VAR_1, VAR_2, VAR_3, VAR_4))
    return 1;
   continue;
  case 129:
   VAR_6 = (unsigned char)*VAR_0++;
   if(VAR_6 >= VAR_4) {
    continue;
   }
   VAR_5 = VAR_3[VAR_6];
   VAR_3[VAR_6] = VAR_1;
   if(FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4))
    return 1;
   VAR_3[VAR_6] = VAR_5;
   return 0;
  case 138:
   if(VAR_1 != VAR_2->begin)
    return 0;
   continue;
  case 134:
   if(VAR_1 != VAR_2->end)
    return 0;
   continue;
  }
  FUNC_3("recursiveloop");
 }
}
