
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sidtab {int * rcache; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct sidtab *VAR_0, u32 VAR_1, u32 VAR_2)
{
 while (VAR_2 > 0) {
  FUNC_1(VAR_0->rcache[VAR_2], FUNC_0(VAR_0->rcache[VAR_2 - 1]));
  --VAR_2;
 }
 FUNC_1(VAR_0->rcache[0], VAR_1);
}
