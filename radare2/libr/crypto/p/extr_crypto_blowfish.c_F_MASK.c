
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut32 ;
struct blowfish_state {int** s; } ;
typedef size_t inbuf ;



__attribute__((used)) static ut32 FUNC_0(struct blowfish_state *const VAR_0, const ut32 VAR_1) {
 ut8 VAR_2 = (VAR_1 >> 24) & 0xff;
 ut8 VAR_3 = (VAR_1 >> 16) & 0xff;
 ut8 VAR_4 = (VAR_1 >> 8) & 0xff;
 ut8 VAR_5 = (VAR_1) & 0xff;
 return ((VAR_0->s[0][VAR_2] + VAR_0->s[1][VAR_3]) ^ VAR_0->s[2][VAR_4]) + VAR_0->s[3][VAR_5];
}
