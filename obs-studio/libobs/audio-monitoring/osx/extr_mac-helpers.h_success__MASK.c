
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OSStatus ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(OSStatus VAR_2, const char *VAR_3, const char *VAR_4)
{
 if (VAR_2 != VAR_1) {
  FUNC_0(VAR_0, "%s: %s failed: %d", VAR_3, VAR_4, (int)VAR_2);
  return 0;
 }

 return 1;
}
