
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint16_t ;
struct sk_buff {int len; } ;
struct sadb_msg {int dummy; } ;
struct sadb_ext {int sadb_ext_len; size_t sadb_ext_type; } ;


 int VAR_0 ;





 size_t VAR_1 ;
 size_t VAR_2 ;


 scalar_t__* VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4, const struct sadb_msg *VAR_5, void **VAR_6)
{
 const char *VAR_7 = (char *) VAR_5;
 int VAR_8 = VAR_4->len;

 VAR_8 -= sizeof(*VAR_5);
 VAR_7 += sizeof(*VAR_5);
 while (VAR_8 > 0) {
  const struct sadb_ext *VAR_9 = (const struct sadb_ext *) VAR_7;
  uint16_t VAR_10;
  int VAR_11;

  if (VAR_8 < sizeof(*VAR_9))
   return -VAR_0;

  VAR_11 = VAR_9->sadb_ext_len;
  VAR_11 *= sizeof(uint64_t);
  VAR_10 = VAR_9->sadb_ext_type;
  if (VAR_11 < sizeof(uint64_t) ||
      VAR_11 > VAR_8 ||
      VAR_10 == VAR_2)
   return -VAR_0;

  if (VAR_10 <= VAR_1) {
   int VAR_12 = (int) VAR_3[VAR_10];
   if (VAR_11 < VAR_12)
    return -VAR_0;
   if (VAR_6[VAR_10-1] != ((void*)0))
    return -VAR_0;
   switch (VAR_10) {
   case 132:
   case 134:
   case 133:
   case 129:
    if (FUNC_0(VAR_7))
     return -VAR_0;
    break;
   case 128:
    if (FUNC_2(VAR_7))
     return -VAR_0;
    break;
   case 131:
   case 130:
    if (FUNC_1(VAR_7))
     return -VAR_0;
    break;
   default:
    break;
   }
   VAR_6[VAR_10-1] = (void *) VAR_7;
  }
  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;
 }

 return 0;
}
