
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_digital_dev {int saved_skb; int dep_rwt; } ;
struct digital_data_exch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfc_digital_dev*,int ,int ,int ,struct digital_data_exch*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nfc_digital_dev *VAR_2,
         struct digital_data_exch *VAR_3)
{
 int VAR_4;

 if (!VAR_2->saved_skb)
  return -VAR_0;

 FUNC_2(VAR_2->saved_skb);

 VAR_4 = FUNC_0(VAR_2, VAR_2->saved_skb, VAR_2->dep_rwt,
     VAR_1, VAR_3);
 if (VAR_4)
  FUNC_1(VAR_2->saved_skb);

 return VAR_4;
}
