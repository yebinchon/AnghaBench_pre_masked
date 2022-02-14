
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strarray {char** entries; char* prefix; int nr_entries; } ;


 size_t FUNC_0 (char*,size_t,char*,...) ;

size_t FUNC_1(struct strarray *VAR_0, char *VAR_1, size_t VAR_2, bool VAR_3, unsigned long VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if (VAR_4 == 0) {
  const char *VAR_7 = VAR_0->entries[0];
  if (VAR_7)
   return FUNC_0(VAR_1, VAR_2, "%s%s", VAR_3 ? VAR_0->prefix : "", VAR_7);
  return FUNC_0(VAR_1, VAR_2, "%d", 0);
 }

 for (VAR_5 = 1; VAR_5 < VAR_0->nr_entries; ++VAR_5) {
  unsigned long VAR_8 = 1UL << (VAR_5 - 1);

  if (!(VAR_4 & VAR_8))
   continue;

  if (VAR_6 != 0)
   VAR_6 += FUNC_0(VAR_1 + VAR_6, VAR_2 - VAR_6, "|");

  if (VAR_0->entries[VAR_5] != ((void*)0))
   VAR_6 += FUNC_0(VAR_1 + VAR_6, VAR_2 - VAR_6, "%s%s", VAR_3 ? VAR_0->prefix : "", VAR_0->entries[VAR_5]);
  else
   VAR_6 += FUNC_0(VAR_1 + VAR_6, VAR_2 - VAR_6, "0x%#", VAR_8);
 }

 return VAR_6;
}
