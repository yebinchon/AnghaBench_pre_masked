
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdb; } ;
typedef int Sdb ;
typedef TYPE_1__ RBinFile ;


 int * FUNC_0 () ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *,char*,char*,int ) ;

__attribute__((used)) static Sdb *FUNC_4(RBinFile *VAR_0) {
 Sdb *VAR_1 = FUNC_0 ();
 FUNC_2 (VAR_1, "nso_start.offset", 0, 0);
 FUNC_2 (VAR_1, "nso_start.size", 16, 0);
 FUNC_3 (VAR_1, "nso_start.format", "xxq unused mod_memoffset padding", 0);
 FUNC_2 (VAR_1, "nso_header.offset", 0, 0);
 FUNC_2 (VAR_1, "nso_header.size", 0x40, 0);
 FUNC_3 (VAR_1, "nso_header.format", "xxxxxxxxxxxx magic unk size unk2 text_offset text_size ro_offset ro_size data_offset data_size bss_size unk3", 0);
 FUNC_1 (VAR_0->sdb, "info", VAR_1);
 return VAR_1;
}
