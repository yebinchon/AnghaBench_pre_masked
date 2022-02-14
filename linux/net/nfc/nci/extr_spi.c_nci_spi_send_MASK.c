
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {unsigned int len; int data; } ;
struct nci_spi {unsigned char acknowledge_mode; scalar_t__ req_result; int req_completion; } ;
struct completion {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nci_spi*,struct sk_buff*,int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 unsigned char* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 long FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (struct completion*,int ) ;

int FUNC_9(struct nci_spi *VAR_9,
   struct completion *VAR_10,
   struct sk_buff *VAR_11)
{
 unsigned int VAR_12 = VAR_11->len;
 unsigned char *VAR_13;
 int VAR_14;
 long VAR_15;


 VAR_13 = FUNC_5(VAR_11, VAR_7);
 VAR_13[0] = VAR_6;
 VAR_13[1] = VAR_9->acknowledge_mode;
 VAR_13[2] = VAR_12 >> 8;
 VAR_13[3] = VAR_12 & 0xFF;

 if (VAR_9->acknowledge_mode == VAR_5) {
  u16 VAR_16;

  VAR_16 = FUNC_1(VAR_1, VAR_11->data, VAR_11->len);
  FUNC_6(VAR_11, VAR_16 >> 8);
  FUNC_6(VAR_11, VAR_16 & 0xFF);
 }

 if (VAR_10) {

  VAR_14 = FUNC_0(VAR_9, ((void*)0), 1);
  if (VAR_14)
   goto done;


  if (FUNC_8(VAR_10,
      FUNC_3(1000)) == 0) {
   VAR_14 = -VAR_3;
   goto done;
  }
 }

 VAR_14 = FUNC_0(VAR_9, VAR_11, 0);
 if (VAR_14 != 0 || VAR_9->acknowledge_mode == VAR_4)
  goto done;

 FUNC_4(&VAR_9->req_completion);
 VAR_15 = FUNC_7(
       &VAR_9->req_completion,
       VAR_8);

 if (VAR_15 <= 0 || VAR_9->req_result == VAR_0)
  VAR_14 = -VAR_2;

done:
 FUNC_2(VAR_11);

 return VAR_14;
}
