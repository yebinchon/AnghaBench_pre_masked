
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct addr_location {struct symbol* sym; int addr; int map; } ;


 struct symbol* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct thread*,int ,int ,struct addr_location*) ;

struct symbol *FUNC_2(struct thread *VAR_0, u8 VAR_1,
       u64 VAR_2, struct addr_location *VAR_3)
{
 VAR_3->sym = ((void*)0);
 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3))
  VAR_3->sym = FUNC_0(VAR_3->map, VAR_3->addr);
 return VAR_3->sym;
}
