
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int flags ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int,int,int *) ;
 scalar_t__ FUNC_4 (int *,unsigned long,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static uint64_t FUNC_6(unsigned long VAR_1)
{
 uint64_t VAR_2;
 FILE *VAR_3;

 VAR_3 = FUNC_2("/proc/kpageflags", "r");
 if (!VAR_3) {
  FUNC_5("fopen kpageflags");
  FUNC_0(1);
 }

 if (FUNC_4(VAR_3, VAR_1 * sizeof(VAR_2), VAR_0)) {
  FUNC_5("fseek kpageflags");
  FUNC_0(1);
 }

 if (FUNC_3(&VAR_2, sizeof(VAR_2), 1, VAR_3) != 1) {
  FUNC_5("fread kpageflags");
  FUNC_0(1);
 }

 FUNC_1(VAR_3);
 return VAR_2;
}
