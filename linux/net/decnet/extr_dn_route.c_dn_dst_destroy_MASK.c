
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {int dummy; } ;
struct dn_route {scalar_t__ n; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dst_entry *VAR_0)
{
 struct dn_route *VAR_1 = (struct dn_route *) VAR_0;

 if (VAR_1->n)
  FUNC_1(VAR_1->n);
 FUNC_0(VAR_0);
}
