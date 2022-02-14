
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct nci_nfcee_mode_set_cmd {void* nfcee_mode; void* nfcee_id; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

int FUNC_2(struct nci_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct nci_nfcee_mode_set_cmd VAR_5;

 VAR_5.nfcee_id = VAR_3;
 VAR_5.nfcee_mode = VAR_4;

 return FUNC_0(VAR_2, VAR_1,
        (unsigned long)&VAR_5,
        FUNC_1(VAR_0));
}
