
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nci_spi {scalar_t__ acknowledge_mode; int req_completion; int req_result; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (struct nci_spi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct nci_spi*,int ) ;

struct sk_buff *FUNC_6(struct nci_spi *VAR_3)
{
 struct sk_buff *VAR_4;


 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  goto done;

 if (VAR_3->acknowledge_mode == VAR_2) {
  if (!FUNC_3(VAR_4)) {
   FUNC_5(VAR_3, VAR_1);
   goto done;
  }




  VAR_3->req_result = FUNC_4(VAR_4);
  if (VAR_3->req_result)
   FUNC_1(&VAR_3->req_completion);
 }




 if (!VAR_4->len) {
  FUNC_2(VAR_4);
  VAR_4 = ((void*)0);
  goto done;
 }

 if (VAR_3->acknowledge_mode == VAR_2)
  FUNC_5(VAR_3, VAR_0);

done:

 return VAR_4;
}
