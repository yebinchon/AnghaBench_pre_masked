
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nested_table {int table; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (union nested_table*) ;
 union nested_table* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(union nested_table *VAR_1, unsigned int VAR_2)
{
 const unsigned int VAR_3 = VAR_0 - FUNC_0(sizeof(void *));
 const unsigned int VAR_4 = 1 << VAR_3;
 unsigned int VAR_5;

 VAR_1 = FUNC_2(VAR_1->table);
 if (!VAR_1)
  return;

 if (VAR_2 > VAR_4) {
  VAR_2 >>= VAR_3;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   FUNC_3(VAR_1 + VAR_5, VAR_2);
 }

 FUNC_1(VAR_1);
}
