
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_table_info {int number; } ;
struct xt_table {struct xt_table_info* private; } ;
struct xt_counters {int dummy; } ;


 int VAR_0 ;
 struct xt_counters* FUNC_0 (int ) ;
 int FUNC_1 (struct xt_table_info const*,struct xt_counters*) ;
 struct xt_counters* FUNC_2 (unsigned int) ;

__attribute__((used)) static struct xt_counters *FUNC_3(const struct xt_table *VAR_1)
{
 unsigned int VAR_2;
 struct xt_counters *VAR_3;
 const struct xt_table_info *VAR_4 = VAR_1->private;




 VAR_2 = sizeof(struct xt_counters) * VAR_4->number;
 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_1(VAR_4, VAR_3);

 return VAR_3;
}
