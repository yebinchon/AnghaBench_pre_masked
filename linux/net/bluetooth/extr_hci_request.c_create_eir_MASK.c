
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {scalar_t__ inq_tx_power; scalar_t__ devid_source; scalar_t__ devid_vendor; scalar_t__ devid_product; scalar_t__ devid_version; int dev_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int* FUNC_0 (struct hci_dev*,int*,scalar_t__) ;
 int* FUNC_1 (struct hci_dev*,int*,scalar_t__) ;
 int* FUNC_2 (struct hci_dev*,int*,scalar_t__) ;
 int FUNC_3 (int*,int ,size_t) ;
 int FUNC_4 (scalar_t__,int*) ;
 size_t FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_6, u8 *VAR_7)
{
 u8 *VAR_8 = VAR_7;
 size_t VAR_9;

 VAR_9 = FUNC_5(VAR_6->dev_name);

 if (VAR_9 > 0) {

  if (VAR_9 > 48) {
   VAR_9 = 48;
   VAR_8[1] = VAR_2;
  } else
   VAR_8[1] = VAR_1;


  VAR_8[0] = VAR_9 + 1;

  FUNC_3(VAR_8 + 2, VAR_6->dev_name, VAR_9);

  VAR_8 += (VAR_9 + 2);
 }

 if (VAR_6->inq_tx_power != VAR_5) {
  VAR_8[0] = 2;
  VAR_8[1] = VAR_3;
  VAR_8[2] = (u8) VAR_6->inq_tx_power;

  VAR_8 += 3;
 }

 if (VAR_6->devid_source > 0) {
  VAR_8[0] = 9;
  VAR_8[1] = VAR_0;

  FUNC_4(VAR_6->devid_source, VAR_8 + 2);
  FUNC_4(VAR_6->devid_vendor, VAR_8 + 4);
  FUNC_4(VAR_6->devid_product, VAR_8 + 6);
  FUNC_4(VAR_6->devid_version, VAR_8 + 8);

  VAR_8 += 10;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_8, VAR_4 - (VAR_8 - VAR_7));
 VAR_8 = FUNC_2(VAR_6, VAR_8, VAR_4 - (VAR_8 - VAR_7));
 VAR_8 = FUNC_0(VAR_6, VAR_8, VAR_4 - (VAR_8 - VAR_7));
}
