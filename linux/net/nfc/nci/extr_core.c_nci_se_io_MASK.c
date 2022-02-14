
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nfc_dev {int dummy; } ;
struct nci_dev {TYPE_1__* ops; } ;
typedef int se_io_cb_t ;
struct TYPE_2__ {int (* se_io ) (struct nci_dev*,int ,int *,size_t,int ,void*) ;} ;


 struct nci_dev* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nci_dev*,int ,int *,size_t,int ,void*) ;

__attribute__((used)) static int FUNC_2(struct nfc_dev *VAR_0, u32 VAR_1,
       u8 *VAR_2, size_t VAR_3,
       se_io_cb_t VAR_4, void *VAR_5)
{
 struct nci_dev *VAR_6 = FUNC_0(VAR_0);

 if (VAR_6->ops->se_io)
  return VAR_6->ops->se_io(VAR_6, VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5);

 return 0;
}
