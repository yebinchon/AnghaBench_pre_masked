
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfc_dev {int fw_download_in_progress; } ;


 int FUNC_0 (struct nfc_dev*,char const*,int ) ;

int FUNC_1(struct nfc_dev *VAR_0, const char *VAR_1,
    u32 VAR_2)
{
 VAR_0->fw_download_in_progress = 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
