
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut32 ;
struct aes_state {int rounds; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t* VAR_6 ;
 int FUNC_0 (struct aes_state*,int***) ;

void FUNC_1 (struct aes_state *VAR_7, ut8 *VAR_8, ut8 *VAR_9) {



 ut32 VAR_10[2][VAR_7->rounds + 1][VAR_4];

 FUNC_0(VAR_7, VAR_10);

 ut32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 ut32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_11 = *VAR_8++ << 24;
 VAR_11 |= *VAR_8++ << 16;
 VAR_11 |= *VAR_8++ << 8;
 VAR_11 |= *VAR_8++;
 VAR_11 ^= VAR_10[0][0][0];

 VAR_12 = *VAR_8++ << 24;
 VAR_12 |= *VAR_8++ << 16;
 VAR_12 |= *VAR_8++ << 8;
 VAR_12 |= *VAR_8++;
 VAR_12 ^= VAR_10[0][0][1];

 VAR_13 = *VAR_8++ << 24;
 VAR_13 |= *VAR_8++ << 16;
 VAR_13 |= *VAR_8++ << 8;
 VAR_13 |= *VAR_8++;
 VAR_13 ^= VAR_10[0][0][2];

 VAR_14 = *VAR_8++ << 24;
 VAR_14 |= *VAR_8++ << 16;
 VAR_14 |= *VAR_8++ << 8;
 VAR_14 |= *VAR_8++;
 VAR_14 ^= VAR_10[0][0][3];


 for (VAR_20 = 1; VAR_20 < VAR_7->rounds; VAR_20++) {
  VAR_16 = (VAR_0[(ut8)(VAR_11 >> 24)] ^ VAR_1[(ut8)(VAR_12 >> 16)] ^ VAR_2[(ut8)(VAR_13 >> 8)] ^
    VAR_3[(ut8)VAR_14]);
  VAR_17 = (VAR_0[(ut8)(VAR_12 >> 24)] ^ VAR_1[(ut8)(VAR_13 >> 16)] ^ VAR_2[(ut8)(VAR_14 >> 8)] ^
    VAR_3[(ut8)VAR_11]);
  VAR_18 = (VAR_0[(ut8)(VAR_13 >> 24)] ^ VAR_1[(ut8)(VAR_14 >> 16)] ^ VAR_2[(ut8)(VAR_11 >> 8)] ^
    VAR_3[(ut8)VAR_12]);
  VAR_19 = (VAR_0[(ut8)(VAR_14 >> 24)] ^ VAR_1[(ut8)(VAR_11 >> 16)] ^ VAR_2[(ut8)(VAR_12 >> 8)] ^
    VAR_3[(ut8)VAR_13]);
  VAR_11 = VAR_16 ^ VAR_10[0][VAR_20][0];
  VAR_12 = VAR_17 ^ VAR_10[0][VAR_20][1];
  VAR_13 = VAR_18 ^ VAR_10[0][VAR_20][2];
  VAR_14 = VAR_19 ^ VAR_10[0][VAR_20][3];
 }



 VAR_15 = VAR_10[0][VAR_7->rounds][0];
 VAR_9[0] = VAR_6[(ut8)(VAR_11 >> 24)] ^ (ut8)(VAR_15 >> 24);
 VAR_9[1] = VAR_6[(ut8)(VAR_12 >> 16)] ^ (ut8)(VAR_15 >> 16);
 VAR_9[2] = VAR_6[(ut8)(VAR_13 >> 8)] ^ (ut8)(VAR_15 >> 8);
 VAR_9[3] = VAR_6[(ut8)VAR_14] ^ (ut8)VAR_15;

 VAR_15 = VAR_10[0][VAR_7->rounds][1];
 VAR_9[4] = VAR_6[(ut8)(VAR_12 >> 24)] ^ (ut8)(VAR_15 >> 24);
 VAR_9[5] = VAR_6[(ut8)(VAR_13 >> 16)] ^ (ut8)(VAR_15 >> 16);
 VAR_9[6] = VAR_6[(ut8)(VAR_14 >> 8)] ^ (ut8)(VAR_15 >> 8);
 VAR_9[7] = VAR_6[(ut8)VAR_11] ^ (ut8)VAR_15;

 VAR_15 = VAR_10[0][VAR_7->rounds][2];
 VAR_9[8] = VAR_6[(ut8)(VAR_13 >> 24)] ^ (ut8)(VAR_15 >> 24);
 VAR_9[9] = VAR_6[(ut8)(VAR_14 >> 16)] ^ (ut8)(VAR_15 >> 16);
 VAR_9[10] = VAR_6[(ut8)(VAR_11 >> 8)] ^ (ut8)(VAR_15 >> 8);
 VAR_9[11] = VAR_6[(ut8)VAR_12] ^ (ut8)VAR_15;

 VAR_15 = VAR_10[0][VAR_7->rounds][3];
 VAR_9[12] = VAR_6[(ut8)(VAR_14 >> 24)] ^ (ut8)(VAR_15 >> 24);
 VAR_9[13] = VAR_6[(ut8)(VAR_11 >> 16)] ^ (ut8)(VAR_15 >> 16);
 VAR_9[14] = VAR_6[(ut8)(VAR_12 >> 8)] ^ (ut8)(VAR_15 >> 8);
 VAR_9[15] = VAR_6[(ut8)VAR_13] ^ (ut8)VAR_15;
}
