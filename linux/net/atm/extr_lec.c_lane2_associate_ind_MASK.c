
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct lec_priv {TYPE_1__* lane2_ops; } ;
struct lec_arp_table {int sizeoftlvs; int * tlvs; } ;
struct TYPE_2__ {int (* associate_indicator ) (struct net_device*,int const*,int const*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int,int ) ;
 struct lec_arp_table* FUNC_2 (struct lec_priv*,int const*) ;
 struct lec_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct net_device*,int const*,int const*,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1, const u8 *VAR_2,
    const u8 *VAR_3, u32 VAR_4)
{



 struct lec_priv *VAR_5 = FUNC_3(VAR_1);
 if (VAR_5->lane2_ops && VAR_5->lane2_ops->associate_indicator) {
  VAR_5->lane2_ops->associate_indicator(VAR_1, VAR_2,
           VAR_3, VAR_4);
 }
}
