
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct neighbour {TYPE_1__* dev; } ;
struct dst_entry {int dummy; } ;
struct dn_route {struct neighbour* n; } ;
struct dn_dev {scalar_t__ use_long; } ;
struct TYPE_2__ {int dn_ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dst_entry*,int ) ;
 int FUNC_1 (struct dst_entry*,int ) ;
 scalar_t__ FUNC_2 (struct dst_entry*,int ) ;
 int FUNC_3 (struct dst_entry*,int ,scalar_t__) ;
 int FUNC_4 (struct dst_entry*,int ) ;
 struct dn_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dst_entry *VAR_4, struct sock *VAR_5,
          struct sk_buff *VAR_6, u32 VAR_7)
{
 struct dn_route *VAR_8 = (struct dn_route *) VAR_4;
 struct neighbour *VAR_9 = VAR_8->n;
 u32 VAR_10 = 230;
 struct dn_dev *VAR_11;

 VAR_11 = VAR_9 ? FUNC_5(VAR_9->dev->dn_ptr) : ((void*)0);

 if (VAR_11 && VAR_11->use_long == 0)
  VAR_10 -= 6;
 else
  VAR_10 -= 21;

 if (FUNC_0(VAR_4, VAR_2) > VAR_7 && VAR_7 >= VAR_10) {
  if (!(FUNC_1(VAR_4, VAR_2))) {
   FUNC_3(VAR_4, VAR_2, VAR_7);
   FUNC_4(VAR_4, VAR_3);
  }
  if (!(FUNC_1(VAR_4, VAR_1))) {
   u32 VAR_12 = VAR_7 - VAR_0;
   u32 VAR_13 = FUNC_2(VAR_4, VAR_1);
   if (!VAR_13 || VAR_13 > VAR_12)
    FUNC_3(VAR_4, VAR_1, VAR_12);
  }
 }
}
