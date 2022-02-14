
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_principal {unsigned int n_name_parts; scalar_t__* realm; scalar_t__** name_parts; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 scalar_t__** FUNC_3 (unsigned int,int,int ) ;
 void* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (scalar_t__*,int const*,unsigned int) ;
 unsigned int FUNC_6 (int const) ;

__attribute__((used)) static int FUNC_7(struct krb5_principal *VAR_6,
           const __be32 **VAR_7,
           unsigned int *VAR_8)
{
 const __be32 *VAR_9 = *VAR_7;
 unsigned int VAR_10 = *VAR_8, VAR_11, VAR_12, VAR_13, VAR_14;



 if (VAR_10 <= 12)
  return -VAR_3;

 FUNC_1(",{%x,%x,%x},%u",
        FUNC_6(VAR_9[0]), FUNC_6(VAR_9[1]), FUNC_6(VAR_9[2]), VAR_10);

 VAR_11 = FUNC_6(*VAR_9++);
 VAR_10 -= 4;
 if (VAR_11 <= 0 || VAR_11 > VAR_0)
  return -VAR_3;
 VAR_6->n_name_parts = VAR_11;

 if (VAR_10 <= (VAR_11 + 1) * 4)
  return -VAR_3;

 VAR_6->name_parts = FUNC_3(VAR_11, sizeof(char *), VAR_5);
 if (!VAR_6->name_parts)
  return -VAR_4;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (VAR_10 < 4)
   return -VAR_3;
  VAR_13 = FUNC_6(*VAR_9++);
  VAR_10 -= 4;
  if (VAR_13 <= 0 || VAR_13 > VAR_2)
   return -VAR_3;
  VAR_14 = (VAR_13 + 3) & ~3;
  if (VAR_14 > VAR_10)
   return -VAR_3;
  VAR_6->name_parts[VAR_12] = FUNC_4(VAR_13 + 1, VAR_5);
  if (!VAR_6->name_parts[VAR_12])
   return -VAR_4;
  FUNC_5(VAR_6->name_parts[VAR_12], VAR_9, VAR_13);
  VAR_6->name_parts[VAR_12][VAR_13] = 0;
  VAR_10 -= VAR_14;
  VAR_9 += VAR_14 >> 2;
 }

 if (VAR_10 < 4)
  return -VAR_3;
 VAR_13 = FUNC_6(*VAR_9++);
 VAR_10 -= 4;
 if (VAR_13 <= 0 || VAR_13 > VAR_1)
  return -VAR_3;
 VAR_14 = (VAR_13 + 3) & ~3;
 if (VAR_14 > VAR_10)
  return -VAR_3;
 VAR_6->realm = FUNC_4(VAR_13 + 1, VAR_5);
 if (!VAR_6->realm)
  return -VAR_4;
 FUNC_5(VAR_6->realm, VAR_9, VAR_13);
 VAR_6->realm[VAR_13] = 0;
 VAR_10 -= VAR_14;
 VAR_9 += VAR_14 >> 2;

 FUNC_0("%s/...@%s", VAR_6->name_parts[0], VAR_6->realm);

 *VAR_7 = VAR_9;
 *VAR_8 = VAR_10;
 FUNC_2(" = 0 [toklen=%u]", VAR_10);
 return 0;
}
