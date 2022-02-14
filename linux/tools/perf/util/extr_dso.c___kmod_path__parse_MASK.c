
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_path {int kmod; int name; int comp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct kmod_path*,int,int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (int ,char,char) ;

int FUNC_7(struct kmod_path *VAR_2, const char *VAR_3,
         bool VAR_4)
{
 const char *VAR_5 = FUNC_5(VAR_3, '/');
 const char *VAR_6 = FUNC_5(VAR_3, '.');
 bool VAR_7 = 0;

 FUNC_2(VAR_2, 0x0, sizeof(*VAR_2));
 VAR_5 = VAR_5 ? VAR_5 + 1 : VAR_3;
 if (VAR_5[0] == '[') {
  VAR_7 = 1;
  if ((FUNC_4(VAR_5, "[kernel.kallsyms]", 17) == 0) ||
      (FUNC_4(VAR_5, "[guest.kernel.kallsyms", 22) == 0) ||
      (FUNC_4(VAR_5, "[vdso]", 6) == 0) ||
      (FUNC_4(VAR_5, "[vdso32]", 8) == 0) ||
      (FUNC_4(VAR_5, "[vdsox32]", 9) == 0) ||
      (FUNC_4(VAR_5, "[vsyscall]", 10) == 0)) {
   VAR_2->kmod = 0;

  } else
   VAR_2->kmod = 1;
 }


 if ((VAR_6 == ((void*)0)) || VAR_7) {
  if (VAR_4) {
   VAR_2->name = FUNC_3(VAR_5);
   return VAR_2->name ? 0 : -VAR_1;
  }
  return 0;
 }

 VAR_2->comp = FUNC_1(VAR_6 + 1);
 if (VAR_2->comp > VAR_0)
  VAR_6 -= 3;


 if (VAR_6 > VAR_5)
  VAR_2->kmod = !FUNC_4(VAR_6, ".ko", 3);

 if (VAR_4) {
  if (VAR_2->kmod) {
   if (FUNC_0(&VAR_2->name, "[%.*s]", (int) (VAR_6 - VAR_5), VAR_5) == -1)
    return -VAR_1;
  } else {
   if (FUNC_0(&VAR_2->name, "%s", VAR_5) == -1)
    return -VAR_1;
  }

  FUNC_6(VAR_2->name, '-', '_');
 }

 return 0;
}
