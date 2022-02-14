
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dirent {char* d_name; scalar_t__ d_type; } ;
typedef int path ;
typedef int options ;
typedef int abs_path ;
typedef int FILE ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char**,int) ;
 char* FUNC_6 (char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char**,int ,int) ;
 int * FUNC_9 (char*) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (int,char**) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char**) ;

__attribute__((used)) static int FUNC_16(void)
{
 char *VAR_4, *VAR_5[32], *VAR_6[32], *VAR_7;
 DIR *VAR_8;
 int VAR_9 = 0, VAR_10 = -1, VAR_11 = -1;
 struct dirent *VAR_12;

 VAR_4 = FUNC_6("PWD");
 if (!VAR_4)
  return VAR_11;

 VAR_8 = FUNC_9(VAR_4);
 if (!VAR_8)
  return VAR_11;

 FUNC_8(VAR_5, 0, sizeof(VAR_5));
 FUNC_8(VAR_6, 0, sizeof(VAR_6));

 while ((VAR_12 = FUNC_10(VAR_8))) {
  char VAR_13[VAR_1];
  u64 VAR_14;
  char *VAR_15 = VAR_12->d_name;
  FILE *VAR_16;

  if (!(VAR_12->d_type == VAR_0))
   continue;

  FUNC_11(VAR_13, sizeof(VAR_13), "%s/%s", VAR_4, VAR_15);

  VAR_16 = FUNC_2(VAR_13, "r");
  if (!VAR_16)
   continue;

  if (FUNC_3(&VAR_14, 1, 8, VAR_16) < 8)
   goto close_file_and_continue;

  if (FUNC_7(VAR_14)) {
   VAR_5[VAR_9] = FUNC_12(VAR_15);
   if (!VAR_5[VAR_9])
    goto close_file_and_continue;

   VAR_6[VAR_9] = FUNC_12(VAR_13);
   if (!VAR_6[VAR_9]) {
    FUNC_15(&VAR_5[VAR_9]);
    FUNC_14("Can't search all data files due to memory shortage.\n");
    FUNC_1(VAR_16);
    break;
   }

   VAR_9++;
  }

close_file_and_continue:
  FUNC_1(VAR_16);
  if (VAR_9 >= 32) {
   FUNC_14("Too many perf data files in PWD!\n"
        "Only the first 32 files will be listed.\n");
   break;
  }
 }
 FUNC_0(VAR_8);

 if (VAR_9) {
  VAR_10 = FUNC_13(VAR_9, VAR_5);
  if (VAR_10 < VAR_9 && VAR_10 >= 0) {
   VAR_7 = FUNC_12(VAR_6[VAR_10]);
   if (VAR_7) {
    if (VAR_3)
     FUNC_4((void *)VAR_2);
    VAR_2 = VAR_7;
    VAR_3 = 1;
    VAR_11 = 0;
   } else
    FUNC_14("Data switch failed due to memory shortage!\n");
  }
 }

 FUNC_5(VAR_5, VAR_9);
 FUNC_5(VAR_6, VAR_9);
 return VAR_11;
}
