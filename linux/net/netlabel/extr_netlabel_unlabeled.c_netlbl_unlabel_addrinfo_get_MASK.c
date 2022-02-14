
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct genl_info *VAR_5,
           void **VAR_6,
           void **VAR_7,
           u32 *VAR_8)
{
 u32 VAR_9;

 if (VAR_5->attrs[VAR_1] &&
     VAR_5->attrs[VAR_2]) {
  VAR_9 = FUNC_1(VAR_5->attrs[VAR_1]);
  if (VAR_9 != sizeof(struct in_addr) &&
      VAR_9 != FUNC_1(VAR_5->attrs[VAR_2]))
   return -VAR_0;
  *VAR_8 = VAR_9;
  *VAR_6 = FUNC_0(VAR_5->attrs[VAR_1]);
  *VAR_7 = FUNC_0(VAR_5->attrs[VAR_2]);
  return 0;
 } else if (VAR_5->attrs[VAR_3]) {
  VAR_9 = FUNC_1(VAR_5->attrs[VAR_3]);
  if (VAR_9 != sizeof(struct in6_addr) &&
      VAR_9 != FUNC_1(VAR_5->attrs[VAR_4]))
   return -VAR_0;
  *VAR_8 = VAR_9;
  *VAR_6 = FUNC_0(VAR_5->attrs[VAR_3]);
  *VAR_7 = FUNC_0(VAR_5->attrs[VAR_4]);
  return 0;
 }

 return -VAR_0;
}
