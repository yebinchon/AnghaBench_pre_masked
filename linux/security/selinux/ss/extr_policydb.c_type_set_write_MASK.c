
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct type_set {int flags; int negset; int types; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int,int,void*) ;

__attribute__((used)) static int FUNC_3(struct type_set *VAR_1, void *VAR_2)
{
 int VAR_3;
 __le32 VAR_4[1];

 if (FUNC_1(&VAR_1->types, VAR_2))
  return -VAR_0;
 if (FUNC_1(&VAR_1->negset, VAR_2))
  return -VAR_0;

 VAR_4[0] = FUNC_0(VAR_1->flags);
 VAR_3 = FUNC_2(VAR_4, sizeof(u32), 1, VAR_2);
 if (VAR_3)
  return -VAR_0;

 return 0;
}
