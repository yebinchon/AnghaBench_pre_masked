
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int b ;
struct TYPE_3__ {int magic; int valid; int size; void* slotsize; void* unk1; void* unk0; int * uuid; void* version; int member_0; } ;
typedef TYPE_1__ SymbolsHeader ;
typedef int RBuffer ;


 int FUNC_0 (int *,int ,int *,int) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static SymbolsHeader FUNC_3(RBuffer *VAR_0) {
 ut8 VAR_1[64];
 SymbolsHeader VAR_2 = { 0 };
 (void)FUNC_0 (VAR_0, 0, VAR_1, sizeof (VAR_1));
 VAR_2.magic = FUNC_2 (VAR_1);
 VAR_2.version = FUNC_2 (VAR_1 + 4);
 VAR_2.valid = VAR_2.magic == 0xff01ff02;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_2.uuid[VAR_3] = VAR_1[24 + VAR_3];
 }
 VAR_2.unk0 = FUNC_1 (VAR_1 + 0x28);
 VAR_2.unk1 = FUNC_1 (VAR_1 + 0x2c);
 VAR_2.slotsize = FUNC_1 (VAR_1 + 0x2e);
 VAR_2.size = 0x40;
 return VAR_2;
}
