
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int pfn ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int,int,int *) ;
 scalar_t__ FUNC_4 (int *,unsigned long,int ) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (char*) ;

__attribute__((used)) static uint64_t FUNC_7(unsigned long VAR_1)
{
 FILE *VAR_2;
 uint64_t VAR_3;
 unsigned long VAR_4;

 VAR_2 = FUNC_2("/proc/self/pagemap", "r");
 if (!VAR_2) {
  FUNC_6("fopen pagemap");
  FUNC_0(1);
 }

 VAR_4 = VAR_1 / FUNC_5() * sizeof(VAR_3);

 if (FUNC_4(VAR_2, VAR_4, VAR_0)) {
  FUNC_6("fseek pagemap");
  FUNC_0(1);
 }

 if (FUNC_3(&VAR_3, sizeof(VAR_3), 1, VAR_2) != 1) {
  FUNC_6("fread pagemap");
  FUNC_0(1);
 }

 FUNC_1(VAR_2);
 return VAR_3;
}
