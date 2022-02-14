
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u8 ;
struct thread {int srccode_state; } ;
struct addr_location {int addr; int map; } ;
typedef int al ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (struct addr_location*,int ,int) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (struct thread*,int ,int ,struct addr_location*) ;

__attribute__((used)) static int FUNC_4(struct thread *VAR_1, u8 VAR_2, uint64_t VAR_3)
{
 struct addr_location VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_4);
 if (!VAR_4.map)
  return 0;
 VAR_5 = FUNC_0(VAR_4.map, VAR_4.addr, VAR_0,
      &VAR_1->srccode_state);
 if (VAR_5)
  VAR_5 += FUNC_2("\n");
 return VAR_5;
}
