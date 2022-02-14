
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct report {TYPE_4__* session; } ;
struct map {TYPE_1__* dso; } ;
struct kmap {TYPE_2__* ref_reloc_sym; } ;
struct TYPE_7__ {int host; } ;
struct TYPE_8__ {int evlist; TYPE_3__ machines; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct TYPE_5__ {scalar_t__ hit; } ;


 struct map* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct map*) ;
 struct kmap* FUNC_2 (struct map*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void FUNC_5(const struct report *VAR_0)
{
 struct map *VAR_1 = FUNC_0(&VAR_0->session->machines.host);
 struct kmap *VAR_2 = VAR_1 ? FUNC_2(VAR_1) : ((void*)0);

 if (FUNC_3(VAR_0->session->evlist))
  return;

 if (VAR_1 == ((void*)0) ||
     (VAR_1->dso->hit &&
      (VAR_2->ref_reloc_sym == ((void*)0) ||
       VAR_2->ref_reloc_sym->addr == 0))) {
  const char *VAR_3 =
      "As no suitable kallsyms nor vmlinux was found, kernel samples\n"
      "can't be resolved.";

  if (VAR_1 && FUNC_1(VAR_1)) {
   VAR_3 = "If some relocation was applied (e.g. "
          "kexec) symbols may be misresolved.";
  }

  FUNC_4(
"Kernel address maps (/proc/{kallsyms,modules}) were restricted.\n\n"
"Check /proc/sys/kernel/kptr_restrict before running 'perf record'.\n\n%s\n\n"
"Samples in kernel modules can't be resolved as well.\n\n",
  VAR_3);
 }
}
