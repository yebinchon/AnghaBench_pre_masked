
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reloc_crc; int data_crc; int module; int flags; int size; int offset; int padding1; int section; } ;
typedef TYPE_1__ SSymbolRange ;


 int FUNC_0 (int,int,int ,char*,int ) ;
 int FUNC_1 (int,int,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(char *VAR_3, int VAR_4, SSymbolRange *VAR_5) {
 int VAR_6 = 0;

 FUNC_0(VAR_6, VAR_4, VAR_5->section, VAR_3, VAR_0);
 FUNC_0(VAR_6, VAR_4, VAR_5->padding1, VAR_3, VAR_0);
 FUNC_1(VAR_6, VAR_4, VAR_5->offset, VAR_3, VAR_1);
 FUNC_1(VAR_6, VAR_4, VAR_5->size, VAR_3, VAR_1);
 FUNC_1(VAR_6, VAR_4, VAR_5->flags, VAR_3, VAR_2);
 FUNC_1(VAR_6, VAR_4, VAR_5->module, VAR_3, VAR_1);



 FUNC_1(VAR_6, VAR_4, VAR_5->data_crc, VAR_3, VAR_2);
 FUNC_1(VAR_6, VAR_4, VAR_5->reloc_crc, VAR_3, VAR_2);

 return VAR_6;
}
