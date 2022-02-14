
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmfw_v3_id_hdr {int vendor_id; int ver; int id; } ;
struct wm_adsp {int fw_id_version; void* fw_vendor_id; void* fw_id; } ;


 int FUNC_0 (struct wm_adsp*,char*,void*,void*,int,int,int,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wm_adsp *VAR_0,
        struct wmfw_v3_id_hdr *VAR_1, int VAR_2)
{
 VAR_0->fw_id = FUNC_1(VAR_1->id);
 VAR_0->fw_id_version = FUNC_1(VAR_1->ver);
 VAR_0->fw_vendor_id = FUNC_1(VAR_1->vendor_id);

 FUNC_0(VAR_0, "Firmware: %x vendor: 0x%x v%d.%d.%d, %d algorithms\n",
    VAR_0->fw_id, VAR_0->fw_vendor_id,
    (VAR_0->fw_id_version & 0xff0000) >> 16,
    (VAR_0->fw_id_version & 0xff00) >> 8, VAR_0->fw_id_version & 0xff,
    VAR_2);
}
