
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strarray {int offset; int nr_entries; char* prefix; int ** entries; } ;


 size_t FUNC_0 (char*,size_t,char const*,...) ;

size_t FUNC_1(struct strarray *VAR_0, char *VAR_1, size_t VAR_2, const char *VAR_3, bool VAR_4, int VAR_5)
{
 int VAR_6 = VAR_5 - VAR_0->offset;

 if (VAR_6 < 0 || VAR_6 >= VAR_0->nr_entries || VAR_0->entries[VAR_6] == ((void*)0)) {
  size_t VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
  if (VAR_4)
   VAR_7 += FUNC_0(VAR_1 + VAR_7, VAR_2 - VAR_7, " /* %s??? */", VAR_0->prefix);
  return VAR_7;
 }

 return FUNC_0(VAR_1, VAR_2, "%s%s", VAR_4 ? VAR_0->prefix : "", VAR_0->entries[VAR_6]);
}
