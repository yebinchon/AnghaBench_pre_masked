
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_instance {int n_buckets; } ;


 struct table_instance* FUNC_0 (struct table_instance*,int,int) ;

__attribute__((used)) static struct table_instance *FUNC_1(struct table_instance *VAR_0,
          bool VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->n_buckets * 2, VAR_1);
}
