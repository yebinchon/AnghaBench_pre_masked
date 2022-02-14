
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map {int dummy; } ;
struct dso {int binary_type; } ;
struct TYPE_2__ {char* kallsyms_name; scalar_t__* symfs; int ignore_vmlinux; int * vmlinux_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct dso*,struct map*) ;
 int FUNC_1 (struct dso*) ;
 int FUNC_2 (struct dso*,char const*,struct map*) ;
 int FUNC_3 (struct dso*,struct map*,int *,int) ;
 int FUNC_4 (struct dso*,struct map*) ;
 int FUNC_5 (struct dso*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct map*) ;
 int FUNC_8 (struct map*) ;
 int FUNC_9 (char*,char const*) ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_10(struct dso *VAR_4, struct map *VAR_5)
{
 int VAR_6;
 const char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 if (VAR_2.kallsyms_name != ((void*)0)) {
  VAR_7 = VAR_2.kallsyms_name;
  goto do_kallsyms;
 }

 if (!VAR_2.ignore_vmlinux && VAR_2.vmlinux_name != ((void*)0)) {
  return FUNC_3(VAR_4, VAR_5, VAR_2.vmlinux_name, 0);
 }

 if (!VAR_2.ignore_vmlinux && VAR_3 != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  if (VAR_6 > 0)
   return VAR_6;
 }


 if (VAR_2.symfs[0] != 0)
  return -1;

 VAR_8 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_8)
  return -1;

 VAR_7 = VAR_8;

do_kallsyms:
 VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_5);
 if (VAR_6 > 0)
  FUNC_9("Using %s for symbols\n", VAR_7);
 FUNC_6(VAR_8);

 if (VAR_6 > 0 && !FUNC_1(VAR_4)) {
  VAR_4->binary_type = VAR_0;
  FUNC_5(VAR_4, VAR_1, 0);
  FUNC_8(VAR_5);
  FUNC_7(VAR_5);
 }

 return VAR_6;
}
