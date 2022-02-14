
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct TYPE_2__ {size_t* gate2pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct nci_dev*,size_t,int ,size_t const*,size_t) ;

int FUNC_2(struct nci_dev *VAR_3, u8 VAR_4, u8 VAR_5,
         const u8 *VAR_6, size_t VAR_7)
{
 u8 VAR_8 = VAR_3->hci_dev->gate2pipe[VAR_4];

 if (VAR_8 == VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_8,
   FUNC_0(VAR_1, VAR_5),
   VAR_6, VAR_7);
}
