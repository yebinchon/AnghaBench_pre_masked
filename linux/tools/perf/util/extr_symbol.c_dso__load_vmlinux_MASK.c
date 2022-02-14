
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symfs_vmlinux ;
struct symsrc {int dummy; } ;
struct map {int dummy; } ;
struct dso {scalar_t__ kernel; void* binary_type; } ;
typedef enum dso_binary_type { ____Placeholder_dso_binary_type } dso_binary_type ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dso*,struct map*,struct symsrc*,struct symsrc*,int ) ;
 int FUNC_1 (struct dso*) ;
 int FUNC_2 (struct dso*,char const*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (struct symsrc*) ;
 scalar_t__ FUNC_7 (struct symsrc*,struct dso*,char*,int) ;

int FUNC_8(struct dso *VAR_4, struct map *VAR_5,
        const char *VAR_6, bool VAR_7)
{
 int VAR_8 = -1;
 struct symsrc VAR_9;
 char VAR_10[VAR_3];
 enum dso_binary_type VAR_11;

 if (VAR_6[0] == '/')
  FUNC_4(VAR_10, sizeof(VAR_10), "%s", VAR_6);
 else
  FUNC_5(VAR_10, VAR_6);

 if (VAR_4->kernel == VAR_2)
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_1;

 if (FUNC_7(&VAR_9, VAR_4, VAR_10, VAR_11))
  return -1;

 VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_9, &VAR_9, 0);
 FUNC_6(&VAR_9);

 if (VAR_8 > 0) {
  if (VAR_4->kernel == VAR_2)
   VAR_4->binary_type = VAR_0;
  else
   VAR_4->binary_type = VAR_1;
  FUNC_2(VAR_4, VAR_6, VAR_7);
  FUNC_1(VAR_4);
  FUNC_3("Using %s for symbols\n", VAR_10);
 }

 return VAR_8;
}
