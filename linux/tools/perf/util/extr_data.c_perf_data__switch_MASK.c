
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct perf_data {TYPE_1__ file; int path; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char**,char*,int ,char const*) ;
 scalar_t__ FUNC_1 (struct perf_data*) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,size_t,int ) ;
 scalar_t__ FUNC_4 (struct perf_data*) ;
 int FUNC_5 (struct perf_data*) ;
 int FUNC_6 (char*,size_t,int ) ;
 int FUNC_7 (char*,int ,char*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (int) ;

int FUNC_10(struct perf_data *VAR_4,
      const char *VAR_5,
      size_t VAR_6, bool VAR_7,
      char **VAR_8)
{
 int VAR_9;

 if (FUNC_1(VAR_4))
  return -VAR_0;
 if (FUNC_4(VAR_4))
  return -VAR_0;

 if (FUNC_0(VAR_8, "%d.%s", VAR_4->path, VAR_5) < 0)
  return -VAR_1;





 if (FUNC_8(VAR_4->path, *VAR_8))
  FUNC_7("Failed to rename %s to %s\n", VAR_4->path, *VAR_8);

 if (!VAR_7) {
  FUNC_2(VAR_4->file.fd);
  VAR_9 = FUNC_5(VAR_4);
  if (VAR_9 < 0)
   goto out;

  if (FUNC_3(VAR_4->file.fd, VAR_6, VAR_2) == (off_t)-1) {
   VAR_9 = -VAR_3;
   FUNC_6("Failed to lseek to %zu: %s",
     VAR_6, FUNC_9(VAR_3));
   goto out;
  }
 }
 VAR_9 = VAR_4->file.fd;
out:
 return VAR_9;
}
