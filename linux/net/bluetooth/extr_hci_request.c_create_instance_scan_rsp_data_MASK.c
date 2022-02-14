
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct hci_dev {scalar_t__ appearance; } ;
struct adv_info {int flags; scalar_t__ scan_rsp_len; int scan_rsp_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct hci_dev*,size_t*,size_t) ;
 size_t FUNC_1 (struct hci_dev*,size_t*,size_t) ;
 struct adv_info* FUNC_2 (struct hci_dev*,size_t) ;
 int FUNC_3 (size_t*,int ,scalar_t__) ;

__attribute__((used)) static u8 FUNC_4(struct hci_dev *VAR_2, u8 VAR_3,
     u8 *VAR_4)
{
 struct adv_info *VAR_5;
 u32 VAR_6;
 u8 VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5)
  return 0;

 VAR_6 = VAR_5->flags;

 if ((VAR_6 & VAR_0) && VAR_2->appearance) {
  VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_7);
 }

 FUNC_3(&VAR_4[VAR_7], VAR_5->scan_rsp_data,
        VAR_5->scan_rsp_len);

 VAR_7 += VAR_5->scan_rsp_len;

 if (VAR_6 & VAR_1)
  VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_7);

 return VAR_7;
}
