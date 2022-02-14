
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLenum ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char const*,char const*,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2(const char *VAR_0, const char *VAR_1)
{
 GLenum VAR_2 = FUNC_0();
 if (VAR_2 != 0) {
  FUNC_1("%s: %s: %lu", VAR_0, VAR_1, VAR_2);
  return 1;
 }

 return 0;
}
