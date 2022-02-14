
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct serializer {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct serializer*,char const*,scalar_t__) ;
 int FUNC_2 (struct serializer*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct serializer *VAR_0, const char *VAR_1)
{
 uint32_t VAR_2 = (uint32_t)(VAR_1 ? FUNC_0(VAR_1) : 0);

 if (!FUNC_2(VAR_0, VAR_2))
  return 0;
 if (VAR_2 && !FUNC_1(VAR_0, VAR_1, VAR_2))
  return 0;
 return 1;
}
