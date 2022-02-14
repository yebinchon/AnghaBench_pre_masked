
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct dst_entry {TYPE_1__* ops; scalar_t__ obsolete; } ;
struct TYPE_2__ {int * (* check ) (struct dst_entry*,int ) ;} ;


 int FUNC_0 (struct dst_entry*) ;
 struct dst_entry* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int * FUNC_3 (struct dst_entry*,int ) ;

struct dst_entry *FUNC_4(struct sock *VAR_0, u32 VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2 && VAR_2->obsolete && VAR_2->ops->check(VAR_2, VAR_1) == ((void*)0)) {
  FUNC_2(VAR_0);
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
