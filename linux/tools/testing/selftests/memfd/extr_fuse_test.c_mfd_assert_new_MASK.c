
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ loff_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, loff_t VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_2);
 if (VAR_4 < 0) {
  FUNC_2("memfd_create(\"%s\", %u) failed: %m\n",
         VAR_0, VAR_2);
  FUNC_0();
 }

 VAR_3 = FUNC_1(VAR_4, VAR_1);
 if (VAR_3 < 0) {
  FUNC_2("ftruncate(%llu) failed: %m\n", (unsigned long long)VAR_1);
  FUNC_0();
 }

 return VAR_4;
}
