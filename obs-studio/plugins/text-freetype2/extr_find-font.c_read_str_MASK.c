
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct serializer {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (struct serializer*,char*,int) ;
 int FUNC_3 (struct serializer*,int) ;

__attribute__((used)) static bool FUNC_4(struct serializer *VAR_0, char **VAR_1)
{
 uint32_t VAR_2;
 char *VAR_3;

 if (!FUNC_3(VAR_0, VAR_2))
  return 0;

 VAR_3 = FUNC_1(VAR_2 + 1);
 if (VAR_2 && !FUNC_2(VAR_0, VAR_3, VAR_2)) {
  FUNC_0(VAR_3);
  return 0;
 }

 VAR_3[VAR_2] = 0;
 *VAR_1 = VAR_3;
 return 1;
}
