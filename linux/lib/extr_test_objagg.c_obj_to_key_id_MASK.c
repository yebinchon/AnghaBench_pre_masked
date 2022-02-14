
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tokey {unsigned int id; } ;
struct objagg_obj {int dummy; } ;
struct delta {scalar_t__ key_id_diff; } ;


 struct delta* FUNC_0 (struct objagg_obj*) ;
 struct tokey* FUNC_1 (struct objagg_obj*) ;

__attribute__((used)) static unsigned int FUNC_2(struct objagg_obj *VAR_0)
{
 const struct tokey *VAR_1;
 const struct delta *VAR_2;
 unsigned int VAR_3;

 VAR_1 = FUNC_1(VAR_0);
 VAR_3 = VAR_1->id;
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  VAR_3 += VAR_2->key_id_diff;
 return VAR_3;
}
