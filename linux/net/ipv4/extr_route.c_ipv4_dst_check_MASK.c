
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtable {int dummy; } ;
struct dst_entry {scalar_t__ obsolete; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rtable*) ;

__attribute__((used)) static struct dst_entry *FUNC_1(struct dst_entry *VAR_1, u32 VAR_2)
{
 struct rtable *VAR_3 = (struct rtable *) VAR_1;
 if (VAR_1->obsolete != VAR_0 || FUNC_0(VAR_3))
  return ((void*)0);
 return VAR_1;
}
