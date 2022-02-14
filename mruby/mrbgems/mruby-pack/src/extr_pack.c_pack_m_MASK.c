
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 void** VAR_0 ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3, mrb_int VAR_4, long VAR_5, unsigned int VAR_6)
{
  mrb_int VAR_7;
  unsigned long VAR_8;
  mrb_int VAR_9, VAR_10;
  char *VAR_11, *VAR_12, *VAR_13;

  VAR_11 = FUNC_1(VAR_2);
  VAR_10 = FUNC_0(VAR_2);

  if (VAR_10 == 0)
    return 0;

  if (VAR_5 != 0 && VAR_5 < 3) {
    VAR_5 = 45;
  } else if (VAR_5 >= 3) {
    VAR_5 -= VAR_5 % 3;
  }

  VAR_7 = (VAR_10+2) / 3 * 4;
  if (VAR_5 > 0) {
    VAR_7 += (VAR_10 / VAR_5) + ((VAR_10 % VAR_5) == 0 ? 0 : 1);
  }
  VAR_3 = FUNC_2(VAR_1, VAR_3, VAR_4 + VAR_7);
  VAR_12 = FUNC_1(VAR_3) + VAR_4;

  VAR_13 = VAR_12;
  for (VAR_9 = 3; VAR_10 >= 3; VAR_10 -= 3, VAR_9 += 3) {
    VAR_8 = (unsigned char)*VAR_11++ << 16;
    VAR_8 += (unsigned char)*VAR_11++ << 8;
    VAR_8 += (unsigned char)*VAR_11++;

    *VAR_12++ = VAR_0[(VAR_8 >> 18) & 0x3f];
    *VAR_12++ = VAR_0[(VAR_8 >> 12) & 0x3f];
    *VAR_12++ = VAR_0[(VAR_8 >> 6) & 0x3f];
    *VAR_12++ = VAR_0[ VAR_8 & 0x3f];

    if (VAR_9 == VAR_5) {
      *VAR_12++ = '\n';
      VAR_9 = 0;
    }
  }
  if (VAR_10 == 1) {
    VAR_8 = (unsigned char)*VAR_11++ << 16;
    *VAR_12++ = VAR_0[(VAR_8 >> 18) & 0x3f];
    *VAR_12++ = VAR_0[(VAR_8 >> 12) & 0x3f];
    *VAR_12++ = '=';
    *VAR_12++ = '=';
    VAR_9 += 3;
  } else if (VAR_10 == 2) {
    VAR_8 = (unsigned char)*VAR_11++ << 16;
    VAR_8 += (unsigned char)*VAR_11++ << 8;
    *VAR_12++ = VAR_0[(VAR_8 >> 18) & 0x3f];
    *VAR_12++ = VAR_0[(VAR_8 >> 12) & 0x3f];
    *VAR_12++ = VAR_0[(VAR_8 >> 6) & 0x3f];
    *VAR_12++ = '=';
    VAR_9 += 3;
  }
  if (VAR_9 > 0 && VAR_5 > 0) {
    *VAR_12++ = '\n';
  }

  return (int)(VAR_12 - VAR_13);
}
