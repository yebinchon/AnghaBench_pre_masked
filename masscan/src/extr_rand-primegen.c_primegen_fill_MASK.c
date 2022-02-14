
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int pos; int** buf; scalar_t__ num; void** p; void* base; int L; } ;
typedef TYPE_1__ primegen ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(primegen *VAR_2)
{
  int VAR_3;
  uint32_t VAR_4;
  uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  uint32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  uint64_t VAR_21;

  VAR_3 = VAR_2->pos;
  if (VAR_3 == VAR_1) {
    FUNC_0(VAR_2);
    VAR_2->L += VAR_0;
    VAR_3 = 0;
  }
  VAR_2->pos = VAR_3 + 1;

  VAR_5 = ~VAR_2->buf[0][VAR_3];
  VAR_6 = ~VAR_2->buf[1][VAR_3];
  VAR_7 = ~VAR_2->buf[2][VAR_3];
  VAR_8 = ~VAR_2->buf[3][VAR_3];
  VAR_9 = ~VAR_2->buf[4][VAR_3];
  VAR_10 = ~VAR_2->buf[5][VAR_3];
  VAR_11 = ~VAR_2->buf[6][VAR_3];
  VAR_12 = ~VAR_2->buf[7][VAR_3];
  VAR_13 = ~VAR_2->buf[8][VAR_3];
  VAR_14 = ~VAR_2->buf[9][VAR_3];
  VAR_15 = ~VAR_2->buf[10][VAR_3];
  VAR_16 = ~VAR_2->buf[11][VAR_3];
  VAR_17 = ~VAR_2->buf[12][VAR_3];
  VAR_18 = ~VAR_2->buf[13][VAR_3];
  VAR_19 = ~VAR_2->buf[14][VAR_3];
  VAR_20 = ~VAR_2->buf[15][VAR_3];

  VAR_21 = VAR_2->base + 1920;
  VAR_2->base = VAR_21;

  VAR_2->num = 0;

  for (VAR_4 = 0x80000000;VAR_4;VAR_4 >>= 1) {
    VAR_21 -= 60;
    if (VAR_20 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 59;
    if (VAR_19 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 53;
    if (VAR_18 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 49;
    if (VAR_17 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 47;
    if (VAR_16 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 43;
    if (VAR_15 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 41;
    if (VAR_14 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 37;
    if (VAR_13 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 31;
    if (VAR_12 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 29;
    if (VAR_11 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 23;
    if (VAR_10 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 19;
    if (VAR_9 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 17;
    if (VAR_8 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 13;
    if (VAR_7 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 11;
    if (VAR_6 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 7;
    if (VAR_5 & VAR_4) VAR_2->p[VAR_2->num++] = VAR_21 + 1;
  }
}
