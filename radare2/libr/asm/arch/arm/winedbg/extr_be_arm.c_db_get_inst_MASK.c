
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;



__attribute__((used)) static ut32 FUNC_0(const ut8* VAR_0, int VAR_1) {
  ut32 VAR_2 = 0;

 switch (VAR_1) {
 case 4:
  VAR_2 = *(ut32*)VAR_0;
  break;
 case 2:
  VAR_2 = *(ut16*)VAR_0;
  break;
 }
 return VAR_2;
}
