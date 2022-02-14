
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowidn {int daddr; } ;
struct dn_fib_table {int (* lookup ) (struct dn_fib_table*,struct flowidn*,struct dn_fib_res*) ;} ;
struct dn_fib_res {unsigned int type; int * r; } ;
typedef int __le16 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct dn_fib_table* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dn_fib_res*) ;
 int FUNC_2 (struct dn_fib_table*,struct flowidn*,struct dn_fib_res*) ;

unsigned int FUNC_3(__le16 VAR_2)
{
 struct flowidn VAR_3 = { .daddr = VAR_2 };
 struct dn_fib_res VAR_4;
 unsigned int VAR_5 = VAR_0;
 struct dn_fib_table *VAR_6 = FUNC_0(VAR_1, 0);

 VAR_4.r = ((void*)0);

 if (VAR_6) {
  if (!VAR_6->lookup(VAR_6, &VAR_3, &VAR_4)) {
   VAR_5 = VAR_4.type;
   FUNC_1(&VAR_4);
  }
 }
 return VAR_5;
}
