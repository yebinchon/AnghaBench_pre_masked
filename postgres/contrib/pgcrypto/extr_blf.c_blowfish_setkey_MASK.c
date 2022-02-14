
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef int uint32 ;
struct TYPE_4__ {int* S0; int* S1; int* S2; int* S3; int* P; } ;
typedef TYPE_1__ BlowfishContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int*,TYPE_1__*) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

void
FUNC_2(BlowfishContext *VAR_5,
    const uint8 *VAR_6, short VAR_7)
{
 uint32 *VAR_8 = VAR_5->S0;
 uint32 *VAR_9 = VAR_5->S1;
 uint32 *VAR_10 = VAR_5->S2;
 uint32 *VAR_11 = VAR_5->S3;
 uint32 *VAR_12 = VAR_5->P;
 uint32 VAR_13[2];
 int VAR_14;

 FUNC_0(VAR_7 > 0 && VAR_7 <= (448 / 8));

 for (VAR_14 = 0; VAR_14 < 18; VAR_14++)
 {
  VAR_12[VAR_14] = VAR_0[VAR_14];
  VAR_12[VAR_14] ^= ((uint32) VAR_6[(VAR_14 * 4 + 0) % VAR_7]) << 24;
  VAR_12[VAR_14] ^= ((uint32) VAR_6[(VAR_14 * 4 + 1) % VAR_7]) << 16;
  VAR_12[VAR_14] ^= ((uint32) VAR_6[(VAR_14 * 4 + 2) % VAR_7]) << 8;
  VAR_12[VAR_14] ^= ((uint32) VAR_6[(VAR_14 * 4 + 3) % VAR_7]);
 }

 for (VAR_14 = 0; VAR_14 < 256; VAR_14++)
 {
  VAR_8[VAR_14] = VAR_1[VAR_14];
  VAR_9[VAR_14] = VAR_2[VAR_14];
  VAR_10[VAR_14] = VAR_3[VAR_14];
  VAR_11[VAR_14] = VAR_4[VAR_14];
 }

 VAR_13[0] = VAR_13[1] = 0;

 for (VAR_14 = 0; VAR_14 < 18; VAR_14 += 2)
 {
  FUNC_1(VAR_13[0], VAR_13[1], VAR_13, VAR_5);
  VAR_12[VAR_14] = VAR_13[0];
  VAR_12[VAR_14 + 1] = VAR_13[1];
 }

 for (VAR_14 = 0; VAR_14 < 256; VAR_14 += 2)
 {
  FUNC_1(VAR_13[0], VAR_13[1], VAR_13, VAR_5);
  VAR_8[VAR_14] = VAR_13[0];
  VAR_8[VAR_14 + 1] = VAR_13[1];
 }
 for (VAR_14 = 0; VAR_14 < 256; VAR_14 += 2)
 {
  FUNC_1(VAR_13[0], VAR_13[1], VAR_13, VAR_5);
  VAR_9[VAR_14] = VAR_13[0];
  VAR_9[VAR_14 + 1] = VAR_13[1];
 }
 for (VAR_14 = 0; VAR_14 < 256; VAR_14 += 2)
 {
  FUNC_1(VAR_13[0], VAR_13[1], VAR_13, VAR_5);
  VAR_10[VAR_14] = VAR_13[0];
  VAR_10[VAR_14 + 1] = VAR_13[1];
 }
 for (VAR_14 = 0; VAR_14 < 256; VAR_14 += 2)
 {
  FUNC_1(VAR_13[0], VAR_13[1], VAR_13, VAR_5);
  VAR_11[VAR_14] = VAR_13[0];
  VAR_11[VAR_14 + 1] = VAR_13[1];
 }
}
