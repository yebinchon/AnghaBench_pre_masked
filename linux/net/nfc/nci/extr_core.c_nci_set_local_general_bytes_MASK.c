
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dummy; } ;
struct nci_set_config_param {scalar_t__ len; int id; int * val; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nci_dev*,int ,unsigned long,int ) ;
 int VAR_5 ;
 struct nci_dev* FUNC_2 (struct nfc_dev*) ;
 int * FUNC_3 (struct nfc_dev*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct nfc_dev *VAR_6)
{
 struct nci_dev *VAR_7 = FUNC_2(VAR_6);
 struct nci_set_config_param VAR_8;
 int VAR_9;

 VAR_8.val = FUNC_3(VAR_6, &VAR_8.len);
 if ((VAR_8.val == ((void*)0)) || (VAR_8.len == 0))
  return 0;

 if (VAR_8.len > VAR_4)
  return -VAR_0;

 VAR_8.id = VAR_2;

 VAR_9 = FUNC_1(VAR_7, VAR_5, (unsigned long)&VAR_8,
    FUNC_0(VAR_3));
 if (VAR_9)
  return VAR_9;

 VAR_8.id = VAR_1;

 return FUNC_1(VAR_7, VAR_5, (unsigned long)&VAR_8,
      FUNC_0(VAR_3));
}
