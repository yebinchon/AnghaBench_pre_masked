
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_groups {int addr_space; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct map_groups *VAR_3)
{
 VAR_3->addr_space = FUNC_1(&VAR_2, 0);
 if (!VAR_3->addr_space) {
  FUNC_0("unwind: Can't create unwind address space.\n");
  return -VAR_0;
 }

 FUNC_2(VAR_3->addr_space, VAR_1);
 return 0;
}
