
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int compile_pic; int image_roots; int patch_delta; int oat_data_end; int oat_data_begin; int oat_file_end; int oat_file_begin; int * version; int checksum; int image_size; int image_base; } ;
struct TYPE_4__ {int buf; TYPE_2__ art; } ;
typedef int Sdb ;
typedef TYPE_1__ ArtObj ;
typedef TYPE_2__ ARTHeader ;


 int FUNC_0 (int ,int ,int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int *,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(ArtObj *VAR_0, Sdb *VAR_1) {

 if (FUNC_1 (VAR_0->buf) < sizeof (ARTHeader)) {
  return 0;
 }
 ARTHeader *VAR_2 = &VAR_0->art;
 (void) FUNC_0 (VAR_0->buf, 0, (ut8 *) VAR_2, "IIiiiiiiiiiiii", 1);
 FUNC_3 (VAR_1, "img.base", FUNC_2 ("0x%x", VAR_2->image_base), 0);
 FUNC_3 (VAR_1, "img.size", FUNC_2 ("0x%x", VAR_2->image_size), 0);
 FUNC_3 (VAR_1, "art.checksum", FUNC_2 ("0x%x", VAR_2->checksum), 0);
 FUNC_3 (VAR_1, "art.version", FUNC_2 ("%c%c%c",
   VAR_2->version[0], VAR_2->version[1], VAR_2->version[2]), 0);
 FUNC_3 (VAR_1, "oat.begin", FUNC_2 ("0x%x", VAR_2->oat_file_begin), 0);
 FUNC_3 (VAR_1, "oat.end", FUNC_2 ("0x%x", VAR_2->oat_file_end), 0);
 FUNC_3 (VAR_1, "oat_data.begin", FUNC_2 ("0x%x", VAR_2->oat_data_begin), 0);
 FUNC_3 (VAR_1, "oat_data.end", FUNC_2 ("0x%x", VAR_2->oat_data_end), 0);
 FUNC_3 (VAR_1, "patch_delta", FUNC_2 ("0x%x", VAR_2->patch_delta), 0);
 FUNC_3 (VAR_1, "image_roots", FUNC_2 ("0x%x", VAR_2->image_roots), 0);
 FUNC_3 (VAR_1, "compile_pic", FUNC_2 ("0x%x", VAR_2->compile_pic), 0);
 return 1;
}
