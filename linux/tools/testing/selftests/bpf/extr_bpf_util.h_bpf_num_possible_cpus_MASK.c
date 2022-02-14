
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static inline unsigned int FUNC_4(void)
{
 int VAR_0 = FUNC_1();

 if (VAR_0 < 0) {
  FUNC_2("Failed to get # of possible cpus: '%s'!\n",
         FUNC_3(-VAR_0));
  FUNC_0(1);
 }
 return VAR_0;
}
