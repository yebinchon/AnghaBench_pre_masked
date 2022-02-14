
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_userpolicy_type {int type; } ;
struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct xfrm_userpolicy_type* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_2, struct nlattr **VAR_3)
{
 struct nlattr *VAR_4 = VAR_3[VAR_0];
 struct xfrm_userpolicy_type *VAR_5;
 u8 VAR_6 = VAR_1;
 int VAR_7;

 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_4);
  VAR_6 = VAR_5->type;
 }

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_2 = VAR_6;
 return 0;
}
