
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef unsigned int ut64 ;
typedef int ut16 ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ RBinFile ;


 int* FUNC_0 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(const RBinFile* VAR_0, ut16 VAR_1) {
 const ut8 *VAR_2;
 unsigned int VAR_3;
 ut64 VAR_4;
 if (!VAR_0) {
  return 0;
 }
 VAR_2 = FUNC_0 (VAR_0->buf, &VAR_4);
 if (!VAR_2) {
  return 0;
 }
 VAR_3 = (VAR_2[0x3c] | (VAR_2[0x3d]<<8));
 if (VAR_3 + 0x5E + 1 >= VAR_4 ) {
  return 0;
 }


 return ((*(ut16*)(VAR_2 + VAR_3 + 0x5E)) & VAR_1);
}
