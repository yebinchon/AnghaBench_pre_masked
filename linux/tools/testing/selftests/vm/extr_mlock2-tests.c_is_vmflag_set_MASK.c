
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char const* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (unsigned long) ;
 int FUNC_5 (char const*) ;
 int * FUNC_6 (char*,char const*) ;

__attribute__((used)) static bool FUNC_7(unsigned long VAR_1, const char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 char *VAR_4;
 size_t VAR_5 = 0;
 bool VAR_6 = 0;
 FILE *VAR_7;

 VAR_7 = FUNC_4(VAR_1);
 if (!VAR_7) {
  FUNC_3("Unable to parse /proc/self/smaps\n");
  goto out;
 }

 while (FUNC_2(&VAR_3, &VAR_5, VAR_7) > 0) {
  if (!FUNC_6(VAR_3, VAR_0)) {
   FUNC_1(VAR_3);
   VAR_3 = ((void*)0);
   VAR_5 = 0;
   continue;
  }

  VAR_4 = VAR_3 + FUNC_5(VAR_0);
  VAR_6 = (FUNC_6(VAR_4, VAR_2) != ((void*)0));
  goto out;
 }

out:
 FUNC_1(VAR_3);
 FUNC_0(VAR_7);
 return VAR_6;
}
