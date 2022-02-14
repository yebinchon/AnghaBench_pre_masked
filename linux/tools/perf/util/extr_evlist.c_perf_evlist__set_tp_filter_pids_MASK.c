
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;
typedef int pid_t ;


 scalar_t__ FUNC_0 (char**,char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct evlist*,char*) ;

int FUNC_3(struct evlist *VAR_0, size_t VAR_1, pid_t *VAR_2)
{
 char *VAR_3;
 int VAR_4 = -1;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (VAR_5 == 0) {
   if (FUNC_0(&VAR_3, "common_pid != %s", VAR_2[VAR_5]) < 0)
    return -1;
  } else {
   char *VAR_6;

   if (FUNC_0(&VAR_6, "%s && common_pid != %d", VAR_3, VAR_2[VAR_5]) < 0)
    goto out_free;

   FUNC_1(VAR_3);
   VAR_3 = VAR_6;
  }
 }

 VAR_4 = FUNC_2(VAR_0, VAR_3);
out_free:
 FUNC_1(VAR_3);
 return VAR_4;
}
