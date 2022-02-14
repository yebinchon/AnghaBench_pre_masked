
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_dst_cache; } ;
struct dst_entry {TYPE_1__* dev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(struct sock *VAR_1)
{
 struct dst_entry *VAR_2;
 int VAR_3 = 0;
 FUNC_1();
 VAR_2 = FUNC_0(VAR_1->sk_dst_cache);
 if (VAR_2 && VAR_2->dev &&
     (VAR_2->dev->features & VAR_0))
  VAR_3 = 1;
 FUNC_2();
 return VAR_3;
}
