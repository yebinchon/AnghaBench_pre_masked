
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_u_hnode {int handle_idr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int*,int,int ) ;

__attribute__((used)) static u32 FUNC_1(struct tc_u_hnode *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_2 | 0x800;
 u32 VAR_4 = VAR_2 | 0xFFF;

 if (FUNC_0(&VAR_1->handle_idr, ((void*)0), &VAR_3, VAR_4, VAR_0)) {
  VAR_3 = VAR_2 + 1;
  if (FUNC_0(&VAR_1->handle_idr, ((void*)0), &VAR_3, VAR_4,
     VAR_0))
   VAR_3 = VAR_4;
 }

 return VAR_3;
}
