
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;



__attribute__((used)) static ut64 FUNC_0 (ut64 VAR_0, ut32 VAR_1) {


  ut64 VAR_2 = VAR_1;

 if ((VAR_2 & 0x80) == 0x80)
 {
  VAR_2 |= ~0xFF;
 }
 return (VAR_2 << 1) + VAR_0 + 4;
}
