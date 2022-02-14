
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
typedef int json_writer_t ;
typedef char __u8 ;
typedef char __u64 ;
typedef int __u32 ;
typedef char __u16 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;


 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

 int VAR_0 ;
 int FUNC_4 (int,char,void const*,int *,int) ;
 int FUNC_5 (int *,void const*,int) ;
 int FUNC_6 (char) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,char) ;

__attribute__((used)) static int FUNC_9(const struct btf_type *VAR_1, __u8 VAR_2,
     const void *VAR_3, json_writer_t *VAR_4,
     bool VAR_5)
{
 __u32 *VAR_6;
 __u32 VAR_7;

 VAR_6 = (__u32 *)(VAR_1 + 1);
 VAR_7 = FUNC_1(*VAR_6);

 if (VAR_2 || FUNC_3(*VAR_6) ||
     FUNC_0(VAR_7)) {
  FUNC_4(*VAR_6, VAR_2, VAR_3, VAR_4,
        VAR_5);
  return 0;
 }

 if (VAR_7 == 128) {
  FUNC_5(VAR_4, VAR_3, VAR_5);
  return 0;
 }

 switch (FUNC_2(*VAR_6)) {
 case 0:
  if (FUNC_1(*VAR_6) == 64)
   FUNC_8(VAR_4, "%llu", *(__u64 *)VAR_3);
  else if (FUNC_1(*VAR_6) == 32)
   FUNC_8(VAR_4, "%u", *(__u32 *)VAR_3);
  else if (FUNC_1(*VAR_6) == 16)
   FUNC_8(VAR_4, "%hu", *(__u16 *)VAR_3);
  else if (FUNC_1(*VAR_6) == 8)
   FUNC_8(VAR_4, "%hhu", *(__u8 *)VAR_3);
  else
   FUNC_4(*VAR_6, VAR_2, VAR_3, VAR_4,
         VAR_5);
  break;
 case 128:
  if (FUNC_1(*VAR_6) == 64)
   FUNC_8(VAR_4, "%lld", *(long long *)VAR_3);
  else if (FUNC_1(*VAR_6) == 32)
   FUNC_8(VAR_4, "%d", *(int *)VAR_3);
  else if (FUNC_1(*VAR_6) == 16)
   FUNC_8(VAR_4, "%hd", *(short *)VAR_3);
  else if (FUNC_1(*VAR_6) == 8)
   FUNC_8(VAR_4, "%hhd", *(char *)VAR_3);
  else
   FUNC_4(*VAR_6, VAR_2, VAR_3, VAR_4,
         VAR_5);
  break;
 case 129:
  if (FUNC_6(*(char *)VAR_3))
   FUNC_8(VAR_4, "\"%c\"", *(char *)VAR_3);
  else
   if (VAR_5)
    FUNC_8(VAR_4, "0x%hhx", *(char *)VAR_3);
   else
    FUNC_8(VAR_4, "\"\\u00%02hhx\"",
          *(char *)VAR_3);
  break;
 case 130:
  FUNC_7(VAR_4, *(int *)VAR_3);
  break;
 default:

  return -VAR_0;
 }

 return 0;
}
