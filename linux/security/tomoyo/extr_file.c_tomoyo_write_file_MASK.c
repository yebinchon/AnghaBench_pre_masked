
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct tomoyo_acl_param {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 size_t* VAR_8 ;
 size_t* VAR_9 ;
 size_t* VAR_10 ;
 char* FUNC_1 (struct tomoyo_acl_param*) ;
 int FUNC_2 (int,struct tomoyo_acl_param*) ;
 int FUNC_3 (struct tomoyo_acl_param*) ;
 int FUNC_4 (int,struct tomoyo_acl_param*) ;
 int FUNC_5 (int,struct tomoyo_acl_param*) ;
 int FUNC_6 (int,struct tomoyo_acl_param*) ;

int FUNC_7(struct tomoyo_acl_param *VAR_11)
{
 u16 VAR_12 = 0;
 u8 VAR_13;
 const char *VAR_14 = FUNC_1(VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
  if (FUNC_0(VAR_14, VAR_7[VAR_13]))
   VAR_12 |= 1 << VAR_13;
 if (VAR_12)
  return FUNC_5(VAR_12, VAR_11);
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  if (FUNC_0(VAR_14,
       VAR_6[VAR_10[VAR_13]]))
   VAR_12 |= 1 << VAR_13;
 if (VAR_12)
  return FUNC_4(VAR_12, VAR_11);
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
  if (FUNC_0(VAR_14,
       VAR_6[VAR_8[VAR_13]]))
   VAR_12 |= 1 << VAR_13;
 if (VAR_12)
  return FUNC_6(VAR_12, VAR_11);
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
  if (FUNC_0(VAR_14,
       VAR_6[VAR_9[VAR_13]]))
   VAR_12 |= 1 << VAR_13;
 if (VAR_12)
  return FUNC_2(VAR_12, VAR_11);
 if (FUNC_0(VAR_14,
      VAR_6[VAR_1]))
  return FUNC_3(VAR_11);
 return -VAR_0;
}
