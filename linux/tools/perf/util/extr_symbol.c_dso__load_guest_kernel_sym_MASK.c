
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map {TYPE_1__* groups; } ;
struct machine {char* root_dir; int mmap_name; } ;
struct dso {int binary_type; } ;
struct TYPE_4__ {char* default_guest_kallsyms; int * default_guest_vmlinux_name; } ;
struct TYPE_3__ {struct machine* machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dso*) ;
 int FUNC_1 (struct dso*,char const*,struct map*) ;
 int FUNC_2 (struct dso*,struct map*,int *,int) ;
 int FUNC_3 (struct dso*,int ,int) ;
 scalar_t__ FUNC_4 (struct machine*) ;
 int FUNC_5 (struct map*) ;
 int FUNC_6 (struct map*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*,char*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_9(struct dso *VAR_3, struct map *VAR_4)
{
 int VAR_5;
 const char *VAR_6 = ((void*)0);
 struct machine *VAR_7;
 char VAR_8[VAR_1];

 if (!VAR_4->groups) {
  FUNC_7("Guest kernel map hasn't the point to groups\n");
  return -1;
 }
 VAR_7 = VAR_4->groups->machine;

 if (FUNC_4(VAR_7)) {





  if (VAR_2.default_guest_vmlinux_name != ((void*)0)) {
   VAR_5 = FUNC_2(VAR_3, VAR_4,
      VAR_2.default_guest_vmlinux_name,
      0);
   return VAR_5;
  }

  VAR_6 = VAR_2.default_guest_kallsyms;
  if (!VAR_6)
   return -1;
 } else {
  FUNC_8(VAR_8, "%s/proc/kallsyms", VAR_7->root_dir);
  VAR_6 = VAR_8;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_6, VAR_4);
 if (VAR_5 > 0)
  FUNC_7("Using %s for symbols\n", VAR_6);
 if (VAR_5 > 0 && !FUNC_0(VAR_3)) {
  VAR_3->binary_type = VAR_0;
  FUNC_3(VAR_3, VAR_7->mmap_name, 0);
  FUNC_6(VAR_4);
  FUNC_5(VAR_4);
 }

 return VAR_5;
}
