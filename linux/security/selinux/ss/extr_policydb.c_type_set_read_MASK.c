
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct type_set {int flags; int negset; int types; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void*,int) ;

__attribute__((used)) static int FUNC_3(struct type_set *VAR_1, void *VAR_2)
{
 __le32 VAR_3[1];
 int VAR_4;

 if (FUNC_0(&VAR_1->types, VAR_2))
  return -VAR_0;
 if (FUNC_0(&VAR_1->negset, VAR_2))
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3, VAR_2, sizeof(u32));
 if (VAR_4 < 0)
  return -VAR_0;
 VAR_1->flags = FUNC_1(VAR_3[0]);

 return 0;
}
