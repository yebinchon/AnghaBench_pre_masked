
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map {int dummy; } ;
struct dso {int dummy; } ;
struct TYPE_2__ {int ignore_vmlinux_buildid; } ;


 char* FUNC_0 (struct dso*,int *,int ,int) ;
 int FUNC_1 (struct dso*,struct map*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 TYPE_1__ VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct dso *VAR_3, struct map *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 char *VAR_7 = ((void*)0);

 FUNC_3("Looking at the vmlinux_path (%d entries long)\n",
   VAR_2 + 1);

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1[VAR_5], 0);
  if (VAR_6 > 0)
   goto out;
 }

 if (!VAR_0.ignore_vmlinux_buildid)
  VAR_7 = FUNC_0(VAR_3, ((void*)0), 0, 0);
 if (VAR_7 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_7, 1);
  if (VAR_6 > 0)
   goto out;
  FUNC_2(VAR_7);
 }
out:
 return VAR_6;
}
