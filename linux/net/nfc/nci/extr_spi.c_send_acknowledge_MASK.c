
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct nci_spi {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nci_spi*,struct sk_buff*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ,int ) ;
 unsigned char* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct nci_spi *VAR_6, u8 VAR_7)
{
 struct sk_buff *VAR_8;
 unsigned char *VAR_9;
 u16 VAR_10;
 int VAR_11;

 VAR_8 = FUNC_3(VAR_6->ndev, 0, VAR_1);


 VAR_9 = FUNC_4(VAR_8, VAR_5);
 VAR_9[0] = VAR_4;
 VAR_9[1] = VAR_3;
 VAR_9[2] = VAR_7 << VAR_2;
 VAR_9[3] = 0;

 VAR_10 = FUNC_1(VAR_0, VAR_8->data, VAR_8->len);
 FUNC_5(VAR_8, VAR_10 >> 8);
 FUNC_5(VAR_8, VAR_10 & 0xFF);

 VAR_11 = FUNC_0(VAR_6, VAR_8, 0);

 FUNC_2(VAR_8);

 return VAR_11;
}
