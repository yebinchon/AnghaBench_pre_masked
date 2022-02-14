
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dummy; } ;
struct nci_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nci_dev*,int ,int,int*) ;
 struct nci_dev* FUNC_1 (struct nfc_dev*) ;

__attribute__((used)) static int FUNC_2(struct nfc_dev *VAR_7)
{
 struct nci_dev *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;
 __u8 VAR_10;

 VAR_10 = VAR_1;

 VAR_9 = FUNC_0(VAR_8, VAR_0, 1, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_10 = VAR_6;

 VAR_9 = FUNC_0(VAR_8, VAR_5, 1, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_10 = VAR_3 | VAR_4;

 return FUNC_0(VAR_8, VAR_2, 1, &VAR_10);
}
