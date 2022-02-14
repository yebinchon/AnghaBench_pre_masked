
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ref_reloc_sym {int addr; int * name; } ;
struct map {int dummy; } ;
struct kmap {struct ref_reloc_sym* ref_reloc_sym; } ;


 int VAR_0 ;
 int FUNC_0 (struct ref_reloc_sym*) ;
 struct kmap* FUNC_1 (struct map*) ;
 char* FUNC_2 (int *,char) ;
 int * FUNC_3 (char const*) ;
 struct ref_reloc_sym* FUNC_4 (int) ;

int FUNC_5(struct map *VAR_1, const char *VAR_2, u64 VAR_3)
{
 char *VAR_4;
 struct ref_reloc_sym *VAR_5;
 struct kmap *VAR_6;

 VAR_5 = FUNC_4(sizeof(struct ref_reloc_sym));
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->name = FUNC_3(VAR_2);
 if (VAR_5->name == ((void*)0)) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_5->name, ']');
 if (VAR_4)
  *VAR_4 = '\0';

 VAR_5->addr = VAR_3;

 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6)
  VAR_6->ref_reloc_sym = VAR_5;

 return 0;
}
