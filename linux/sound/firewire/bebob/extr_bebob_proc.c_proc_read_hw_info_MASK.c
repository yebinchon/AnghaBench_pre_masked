
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_bebob* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_bebob {int unit; } ;
struct hw_info {char* protocol_ver; char* bld_ver; char* model_id; char* model_rev; char* fw_id; char* fw_ver; char* base_addr; char* max_size; int bld_time; int bld_date; int fw_time; int fw_date; int * guid; int manufacturer; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw_info*) ;
 struct hw_info* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,struct hw_info*,int) ;
 int FUNC_3 (struct snd_info_buffer*,char*,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct snd_info_entry *VAR_1,
    struct snd_info_buffer *VAR_2)
{
 struct snd_bebob *VAR_3 = VAR_1->private_data;
 struct hw_info *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct hw_info), VAR_0);
 if (VAR_4 == ((void*)0))
  return;

 if (FUNC_2(VAR_3->unit, 0,
       VAR_4, sizeof(struct hw_info)) < 0)
  goto end;

 FUNC_3(VAR_2, "Manufacturer:\t%.8s\n",
      (char *)&VAR_4->manufacturer);
 FUNC_3(VAR_2, "Protocol Ver:\t%d\n", VAR_4->protocol_ver);
 FUNC_3(VAR_2, "Build Ver:\t%d\n", VAR_4->bld_ver);
 FUNC_3(VAR_2, "GUID:\t\t0x%.8X%.8X\n",
      VAR_4->guid[0], VAR_4->guid[1]);
 FUNC_3(VAR_2, "Model ID:\t0x%02X\n", VAR_4->model_id);
 FUNC_3(VAR_2, "Model Rev:\t%d\n", VAR_4->model_rev);
 FUNC_3(VAR_2, "Firmware Date:\t%.8s\n", (char *)&VAR_4->fw_date);
 FUNC_3(VAR_2, "Firmware Time:\t%.8s\n", (char *)&VAR_4->fw_time);
 FUNC_3(VAR_2, "Firmware ID:\t0x%X\n", VAR_4->fw_id);
 FUNC_3(VAR_2, "Firmware Ver:\t%d\n", VAR_4->fw_ver);
 FUNC_3(VAR_2, "Base Addr:\t0x%X\n", VAR_4->base_addr);
 FUNC_3(VAR_2, "Max Size:\t%d\n", VAR_4->max_size);
 FUNC_3(VAR_2, "Loader Date:\t%.8s\n", (char *)&VAR_4->bld_date);
 FUNC_3(VAR_2, "Loader Time:\t%.8s\n", (char *)&VAR_4->bld_time);

end:
 FUNC_0(VAR_4);
}
