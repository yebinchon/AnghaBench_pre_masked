
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static __be16 FUNC_5(struct sk_buff *VAR_2)
{
 struct llc_snap_hdr {
  u8 dsap;
  u8 ssap;
  u8 ctrl;
  u8 oui[3];
  __be16 ethertype;
 };
 struct llc_snap_hdr *VAR_3;
 __be16 VAR_4;

 VAR_4 = *(__be16 *) VAR_2->data;
 FUNC_0(VAR_2, sizeof(__be16));

 if (FUNC_1(VAR_4))
  return VAR_4;

 if (VAR_2->len < sizeof(struct llc_snap_hdr))
  return FUNC_2(VAR_0);

 if (FUNC_4(!FUNC_3(VAR_2, sizeof(struct llc_snap_hdr))))
  return FUNC_2(0);

 VAR_3 = (struct llc_snap_hdr *) VAR_2->data;
 if (VAR_3->dsap != VAR_1 ||
     VAR_3->ssap != VAR_1 ||
     (VAR_3->oui[0] | VAR_3->oui[1] | VAR_3->oui[2]) != 0)
  return FUNC_2(VAR_0);

 FUNC_0(VAR_2, sizeof(struct llc_snap_hdr));

 if (FUNC_1(VAR_3->ethertype))
  return VAR_3->ethertype;

 return FUNC_2(VAR_0);
}
