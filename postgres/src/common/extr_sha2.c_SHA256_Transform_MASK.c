
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef int uint32 ;
struct TYPE_3__ {int* state; scalar_t__ buffer; } ;
typedef TYPE_1__ pg_sha256_ctx ;


 int FUNC_0 (int,int,int) ;
 int* VAR_0 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(pg_sha256_ctx *VAR_1, const uint8 *VAR_2)
{
 uint32 VAR_3,
    VAR_4,
    VAR_5,
    VAR_6,
    VAR_7,
    VAR_8,
    VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;
 uint32 VAR_13,
    VAR_14,
      *VAR_15;
 int VAR_16;

 VAR_15 = (uint32 *) VAR_1->buffer;


 VAR_3 = VAR_1->state[0];
 VAR_4 = VAR_1->state[1];
 VAR_5 = VAR_1->state[2];
 VAR_6 = VAR_1->state[3];
 VAR_7 = VAR_1->state[4];
 VAR_8 = VAR_1->state[5];
 VAR_9 = VAR_1->state[6];
 VAR_10 = VAR_1->state[7];

 VAR_16 = 0;
 do
 {
  VAR_15[VAR_16] = (uint32) VAR_2[3] | ((uint32) VAR_2[2] << 8) |
   ((uint32) VAR_2[1] << 16) | ((uint32) VAR_2[0] << 24);
  VAR_2 += 4;

  VAR_13 = VAR_10 + FUNC_3(VAR_7) + FUNC_0(VAR_7, VAR_8, VAR_9) + VAR_0[VAR_16] + VAR_15[VAR_16];
  VAR_14 = FUNC_2(VAR_3) + FUNC_1(VAR_3, VAR_4, VAR_5);
  VAR_10 = VAR_9;
  VAR_9 = VAR_8;
  VAR_8 = VAR_7;
  VAR_7 = VAR_6 + VAR_13;
  VAR_6 = VAR_5;
  VAR_5 = VAR_4;
  VAR_4 = VAR_3;
  VAR_3 = VAR_13 + VAR_14;

  VAR_16++;
 } while (VAR_16 < 16);

 do
 {

  VAR_11 = VAR_15[(VAR_16 + 1) & 0x0f];
  VAR_11 = FUNC_4(VAR_11);
  VAR_12 = VAR_15[(VAR_16 + 14) & 0x0f];
  VAR_12 = FUNC_5(VAR_12);


  VAR_13 = VAR_10 + FUNC_3(VAR_7) + FUNC_0(VAR_7, VAR_8, VAR_9) + VAR_0[VAR_16] +
   (VAR_15[VAR_16 & 0x0f] += VAR_12 + VAR_15[(VAR_16 + 9) & 0x0f] + VAR_11);
  VAR_14 = FUNC_2(VAR_3) + FUNC_1(VAR_3, VAR_4, VAR_5);
  VAR_10 = VAR_9;
  VAR_9 = VAR_8;
  VAR_8 = VAR_7;
  VAR_7 = VAR_6 + VAR_13;
  VAR_6 = VAR_5;
  VAR_5 = VAR_4;
  VAR_4 = VAR_3;
  VAR_3 = VAR_13 + VAR_14;

  VAR_16++;
 } while (VAR_16 < 64);


 VAR_1->state[0] += VAR_3;
 VAR_1->state[1] += VAR_4;
 VAR_1->state[2] += VAR_5;
 VAR_1->state[3] += VAR_6;
 VAR_1->state[4] += VAR_7;
 VAR_1->state[5] += VAR_8;
 VAR_1->state[6] += VAR_9;
 VAR_1->state[7] += VAR_10;


 VAR_3 = VAR_4 = VAR_5 = VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_13 = VAR_14 = 0;
}
