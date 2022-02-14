
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 int FUNC_3 (char const*,unsigned int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 >= 0) {
  FUNC_2("memfd_create(\"%s\", %u) succeeded, but failure expected\n",
         VAR_0, VAR_1);
  FUNC_1(VAR_2);
  FUNC_0();
 }
}
