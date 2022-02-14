
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,char*,unsigned long*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static bool FUNC_9(unsigned long VAR_3)
{
 bool VAR_4 = 0;
 bool VAR_5;
 FILE *VAR_6 = ((void*)0);
 unsigned long VAR_7, VAR_8;
 char *VAR_9 = ((void*)0);
 char *VAR_10;
 size_t VAR_11 = 0;

 VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_5(VAR_3);
 if (!VAR_6) {
  FUNC_4("Unable to parse /proc/self/smaps\n");
  goto out;
 }

 while (FUNC_2(&VAR_9, &VAR_11, VAR_6) > 0) {
  if (!FUNC_8(VAR_9, VAR_2)) {
   FUNC_1(VAR_9);
   VAR_9 = ((void*)0);
   VAR_11 = 0;
   continue;
  }

  VAR_10 = VAR_9 + FUNC_7(VAR_2);
  if (FUNC_6(VAR_10, "%lu kB", &VAR_7) < 1) {
   FUNC_4("Unable to parse smaps entry for Size\n");
   goto out;
  }
  break;
 }

 while (FUNC_2(&VAR_9, &VAR_11, VAR_6) > 0) {
  if (!FUNC_8(VAR_9, VAR_1)) {
   FUNC_1(VAR_9);
   VAR_9 = ((void*)0);
   VAR_11 = 0;
   continue;
  }

  VAR_10 = VAR_9 + FUNC_7(VAR_1);
  if (FUNC_6(VAR_10, "%lu kB", &VAR_8) < 1) {
   FUNC_4("Unable to parse smaps entry for Rss\n");
   goto out;
  }
  break;
 }

 VAR_4 = VAR_5 && (VAR_8 < VAR_7);
out:
 FUNC_1(VAR_9);
 if (VAR_6)
  FUNC_0(VAR_6);
 return VAR_4;
}
