
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct perf_data {char* path; } ;
typedef int oldname ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct perf_data*) ;
 int FUNC_1 (char*,char*,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*,struct stat*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct perf_data *VAR_2)
{
 struct stat VAR_3;

 if (FUNC_0(VAR_2))
  return 0;

 if (!FUNC_5(VAR_2->path, &VAR_3) && VAR_3.st_size) {
  char VAR_4[VAR_0];
  int VAR_5;

  FUNC_4(VAR_4, sizeof(VAR_4), "%s.old",
    VAR_2->path);

  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5) {
   FUNC_1("Can't remove old data: %s (%s)\n",
          VAR_5 == -2 ?
          "Unknown file found" : FUNC_6(VAR_1),
          VAR_4);
   return -1;
  }

  if (FUNC_2(VAR_2->path, VAR_4)) {
   FUNC_1("Can't move data: %s (%s to %s)\n",
          FUNC_6(VAR_1),
          VAR_2->path, VAR_4);
   return -1;
  }
 }

 return 0;
}
