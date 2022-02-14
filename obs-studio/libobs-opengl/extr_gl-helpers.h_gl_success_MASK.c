
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLenum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_3(const char *VAR_2)
{
 GLenum VAR_3 = FUNC_1();
 if (VAR_3 != VAR_0) {
  int VAR_4 = 8;
  do {
   FUNC_0(VAR_1,
        "%s failed, glGetError returned %s(0x%X)",
        VAR_2, FUNC_2(VAR_3), VAR_3);
   VAR_3 = FUNC_1();

   --VAR_4;
   if (VAR_4 == 0) {
    FUNC_0(VAR_1,
         "Too many GL errors, moving on");
    break;
   }
  } while (VAR_3 != VAR_0);
  return 0;
 }

 return 1;
}
