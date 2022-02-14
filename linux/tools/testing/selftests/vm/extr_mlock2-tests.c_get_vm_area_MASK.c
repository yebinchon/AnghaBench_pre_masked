
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_boundaries {unsigned long start; unsigned long end; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (struct vm_boundaries*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,unsigned long*) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int FUNC_8(unsigned long VAR_0, struct vm_boundaries *VAR_1)
{
 FILE *VAR_2;
 int VAR_3 = 1;
 char VAR_4[1024] = {0};
 char *VAR_5;
 char *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 if (!VAR_1)
  return VAR_3;

 VAR_2 = FUNC_2("/proc/self/maps", "r");
 if (!VAR_2) {
  FUNC_4("fopen");
  return VAR_3;
 }

 FUNC_3(VAR_1, 0, sizeof(struct vm_boundaries));

 while(FUNC_1(VAR_4, 1024, VAR_2)) {
  VAR_5 = FUNC_7(VAR_4, '-');
  if (!VAR_5) {
   FUNC_5("cannot parse /proc/self/maps\n");
   goto out;
  }
  *VAR_5 = '\0';
  VAR_5++;
  VAR_6 = FUNC_7(VAR_5, ' ');
  if (!VAR_6) {
   FUNC_5("cannot parse /proc/self/maps\n");
   goto out;
  }
  VAR_6 = '\0';

  FUNC_6(VAR_4, "%lx", &VAR_7);
  FUNC_6(VAR_5, "%lx", &VAR_8);

  if (VAR_7 <= VAR_0 && VAR_8 > VAR_0) {
   VAR_1->start = VAR_7;
   VAR_1->end = VAR_8;
   VAR_3 = 0;
   goto out;
  }
 }
out:
 FUNC_0(VAR_2);
 return VAR_3;
}
