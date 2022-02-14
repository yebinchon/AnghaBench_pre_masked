
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hci_dev {int short_name; int dev_name; int appearance; int dev_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ,size_t) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static u16 FUNC_4(struct hci_dev *VAR_6, u8 *VAR_7)
{
 u16 VAR_8 = 0;
 size_t VAR_9;

 if (FUNC_2(VAR_6, VAR_4))
  VAR_8 = FUNC_0(VAR_7, VAR_8, VAR_1,
       VAR_6->dev_class, 3);

 if (FUNC_2(VAR_6, VAR_5))
  VAR_8 = FUNC_1(VAR_7, VAR_8, VAR_0,
       VAR_6->appearance);

 VAR_9 = FUNC_3(VAR_6->dev_name);
 VAR_8 = FUNC_0(VAR_7, VAR_8, VAR_2,
      VAR_6->dev_name, VAR_9);

 VAR_9 = FUNC_3(VAR_6->short_name);
 VAR_8 = FUNC_0(VAR_7, VAR_8, VAR_3,
      VAR_6->short_name, VAR_9);

 return VAR_8;
}
