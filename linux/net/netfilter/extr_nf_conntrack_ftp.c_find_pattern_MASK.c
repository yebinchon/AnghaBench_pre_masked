
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_man {int dummy; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, size_t VAR_1,
   const char *VAR_2, size_t VAR_3,
   char VAR_4, char VAR_5,
   unsigned int *VAR_6,
   unsigned int *VAR_7,
   struct nf_conntrack_man *VAR_8,
   int (*VAR_9)(const char *, size_t,
          struct nf_conntrack_man *, char,
          unsigned int *))
{
 size_t VAR_10 = VAR_3;

 FUNC_0("find_pattern `%s': dlen = %zu\n", VAR_2, VAR_1);

 if (VAR_1 <= VAR_3) {

  if (FUNC_1(VAR_0, VAR_2, VAR_1) == 0)
   return -1;
  else return 0;
 }

 if (FUNC_1(VAR_0, VAR_2, VAR_3) != 0)
  return 0;

 FUNC_0("Pattern matches!\n");


 if (VAR_4) {
  for (VAR_10 = VAR_3; VAR_0[VAR_10] != VAR_4; VAR_10++)
   if (VAR_10 == VAR_1 - 1) return -1;


  VAR_10++;
 }

 FUNC_0("Skipped up to 0x%hhx delimiter!\n", VAR_4);

 *VAR_6 = VAR_10;
 *VAR_7 = VAR_9(VAR_0 + VAR_10, VAR_1 - VAR_10, VAR_8, VAR_5, VAR_6);
 if (!*VAR_7)
  return -1;

 FUNC_0("Match succeeded!\n");
 return 1;
}
