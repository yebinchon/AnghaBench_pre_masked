
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nested_table {int dummy; } nested_table ;
struct bucket_table {unsigned int size; unsigned int nest; int * buckets; } ;


 int FUNC_0 (union nested_table*) ;
 int FUNC_1 (union nested_table*,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct bucket_table *VAR_0)
{
 unsigned int VAR_1 = VAR_0->size >> VAR_0->nest;
 unsigned int VAR_2 = 1 << VAR_0->nest;
 union nested_table *VAR_3;
 unsigned int VAR_4;

 VAR_3 = (union nested_table *)FUNC_2(VAR_0->buckets[0]);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_1(VAR_3 + VAR_4, VAR_1);

 FUNC_0(VAR_3);
}
