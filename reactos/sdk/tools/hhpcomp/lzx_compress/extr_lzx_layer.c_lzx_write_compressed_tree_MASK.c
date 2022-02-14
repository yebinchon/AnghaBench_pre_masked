
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_char ;
struct lzx_data {int dummy; } ;
struct huff_entry {int codelength; } ;
struct TYPE_3__ {int codelength; int code; } ;
typedef TYPE_1__ huff_entry ;
typedef int freqs ;


 int VAR_0 ;
 int FUNC_0 (int,int,int*,TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct lzx_data*,int,int) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(struct lzx_data *VAR_2,
     struct huff_entry *VAR_3, uint8_t *VAR_4,
     int VAR_5)
{
  u_char *VAR_6;
  u_char *VAR_7;
  int VAR_8[VAR_0];
  int VAR_9;
  int VAR_10;
  huff_entry VAR_11[20];
  u_char *VAR_12;
  u_char *VAR_13;
  u_char *VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17;

  VAR_12 = VAR_6 = FUNC_4(VAR_5*sizeof(char));
  VAR_14 = VAR_7 = FUNC_4(VAR_5*sizeof(char));
  FUNC_5(VAR_8, 0, sizeof(VAR_8));
  VAR_9 = 1;
  VAR_10 = VAR_3[0].codelength;
  for (VAR_16 = 1; VAR_16 <= VAR_5; VAR_16++) {
    if ((VAR_16 == VAR_5) || (VAR_3[VAR_16].codelength != VAR_10)) {
      if (VAR_10 == 0) {
 while (VAR_9 >= 20) {
   VAR_15 = VAR_9 - 20;
   if (VAR_15 > 31) VAR_15 = 31;
   *VAR_12++ = 18;
   *VAR_14++ = VAR_15;
   VAR_9 -= VAR_15 + 20;
   VAR_8[18]++;
 }
 while (VAR_9 >= 4) {
   VAR_15 = VAR_9 - 4;
   if (VAR_15 > 15) VAR_15 = 15;
   *VAR_12++ = 17;
   *VAR_14++ = VAR_15;
   VAR_9 -= VAR_15 + 4;
   VAR_8[17]++;
 }
 while (VAR_9 > 0) {
   *VAR_12 = VAR_4[VAR_16 - VAR_9];
   VAR_8[*VAR_12++]++;
   *VAR_14++ = 0;
   VAR_9--;
 }
      }
      else {
 while (VAR_9 >= 4) {
   if (VAR_9 == 4) VAR_15 = 0;
   else VAR_15 = 1;
   *VAR_12++ = 19;
   *VAR_14++ = VAR_15;
   VAR_8[19]++;


   *VAR_12 = VAR_4[VAR_16-VAR_9] - VAR_10;
   if (*VAR_12 > 16) *VAR_12 += 17;
   VAR_8[*VAR_12++]++;
   *VAR_14++ = 0;
   VAR_9 -= VAR_15+4;
 }
 while (VAR_9 > 0) {
   *VAR_12 = VAR_4[VAR_16-VAR_9] - VAR_10;
   if (*VAR_12 > 16) *VAR_12 += 17;
   *VAR_14++ = 0;
   VAR_9--;
   VAR_8[*VAR_12++]++;
 }
      }
      if (VAR_16 != VAR_5)
 VAR_10 = VAR_3[VAR_16].codelength;
      VAR_9 = 0;
    }
    VAR_9++;
  }
  VAR_13 = VAR_12;
  FUNC_0(VAR_0, 16, VAR_8, VAR_11);
  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
    FUNC_3(VAR_2, 4, VAR_11[VAR_16].codelength);
  }
  VAR_12 = VAR_6;
  VAR_14 = VAR_7;
  VAR_9 = 0;
  while (VAR_12 < VAR_13) {
    VAR_17 = *VAR_12++;
    FUNC_3(VAR_2, VAR_11[VAR_17].codelength, VAR_11[VAR_17].code);
    if (VAR_17 == 17) {
      VAR_9 += *VAR_14 + 4;
      FUNC_3(VAR_2, 4, *VAR_14);
    }
    else if (VAR_17 == 18) {
      VAR_9 += *VAR_14 + 20;
      FUNC_3(VAR_2, 5, *VAR_14);
    }
    else if (VAR_17 == 19) {
      VAR_9 += *VAR_14 + 4;
      FUNC_3(VAR_2, 1, *VAR_14);
      VAR_17 = *VAR_12++;
      FUNC_3(VAR_2, VAR_11[VAR_17].codelength, VAR_11[VAR_17].code);
      VAR_14++;
    }
    else {
      VAR_9++;
    }
    VAR_14++;
  }
  FUNC_2(VAR_6);
  FUNC_2(VAR_7);
  return 0;
}
