
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int dummy; } ;
struct bucket_table {int future_tbl; } ;


 struct bucket_table* FUNC_0 (int ,struct rhashtable*) ;

__attribute__((used)) static struct bucket_table *FUNC_1(struct rhashtable *VAR_0,
        struct bucket_table *VAR_1)
{
 struct bucket_table *VAR_2;

 do {
  VAR_2 = VAR_1;
  VAR_1 = FUNC_0(VAR_1->future_tbl, VAR_0);
 } while (VAR_1);

 return VAR_2;
}
