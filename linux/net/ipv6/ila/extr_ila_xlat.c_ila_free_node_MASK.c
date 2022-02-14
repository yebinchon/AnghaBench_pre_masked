
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ila_map {int next; } ;


 int FUNC_0 (struct ila_map*) ;
 struct ila_map* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ila_map *VAR_0)
{
 struct ila_map *VAR_1;


 while (VAR_0) {
  VAR_1 = FUNC_1(VAR_0->next);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
