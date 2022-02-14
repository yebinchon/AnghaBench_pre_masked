
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct map {int dummy; } ;
struct kmap {int kmaps; } ;
struct dso {scalar_t__ kernel; int symtab_type; int symbols; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct dso*,char const*) ;
 int FUNC_1 (struct dso*,struct map*,char const*) ;
 scalar_t__ FUNC_2 (struct kmap*,char const*,int *) ;
 struct kmap* FUNC_3 (struct map*) ;
 int FUNC_4 (int ,struct dso*,int ,struct map*) ;
 int FUNC_5 (int ,struct dso*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct dso *VAR_3, const char *VAR_4,
    struct map *VAR_5, bool VAR_6)
{
 struct kmap *VAR_7 = FUNC_3(VAR_5);
 u64 VAR_8 = 0;

 if (FUNC_6(VAR_4, "/proc/kallsyms"))
  return -1;

 if (!VAR_7 || !VAR_7->kmaps)
  return -1;

 if (FUNC_0(VAR_3, VAR_4) < 0)
  return -1;

 if (FUNC_2(VAR_7, VAR_4, &VAR_8))
  return -1;

 FUNC_8(&VAR_3->symbols);
 FUNC_7(&VAR_3->symbols);

 if (VAR_3->kernel == VAR_2)
  VAR_3->symtab_type = VAR_0;
 else
  VAR_3->symtab_type = VAR_1;

 if (!VAR_6 && !FUNC_1(VAR_3, VAR_5, VAR_4))
  return FUNC_5(VAR_7->kmaps, VAR_3);
 else
  return FUNC_4(VAR_7->kmaps, VAR_3, VAR_8, VAR_5);
}
