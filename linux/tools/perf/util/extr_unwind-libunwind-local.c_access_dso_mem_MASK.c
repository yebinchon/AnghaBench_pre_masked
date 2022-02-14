
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ unw_word_t ;
typedef int u8 ;
struct unwind_info {int machine; } ;
struct map {int dso; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,struct map*,int ,scalar_t__,int *,int) ;
 struct map* FUNC_1 (scalar_t__,struct unwind_info*) ;
 int FUNC_2 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct unwind_info *VAR_0, unw_word_t VAR_1,
     unw_word_t *VAR_2)
{
 struct map *VAR_3;
 ssize_t VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3) {
  FUNC_2("unwind: no map for %lx\n", (unsigned long)VAR_1);
  return -1;
 }

 if (!VAR_3->dso)
  return -1;

 VAR_4 = FUNC_0(VAR_3->dso, VAR_3, VAR_0->machine,
       VAR_1, (u8 *) VAR_2, sizeof(*VAR_2));

 return !(VAR_4 == sizeof(*VAR_2));
}
