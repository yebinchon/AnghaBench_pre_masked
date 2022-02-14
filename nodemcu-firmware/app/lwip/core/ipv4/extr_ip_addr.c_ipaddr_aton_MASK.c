
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8_t ;
typedef unsigned long u32_t ;
typedef int ip_addr_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;

int
FUNC_7(const char *VAR_0, ip_addr_t *VAR_1)
{
  u32_t VAR_2;
  u8_t VAR_3;
  char VAR_4;
  char VAR_5;
  unsigned long VAR_6;
  int VAR_7;
  u32_t VAR_8[4];
  u32_t *VAR_9 = VAR_8;

  VAR_4 = *VAR_0;
  for (;;) {





    if (!FUNC_3(VAR_4))
      return (0);
    VAR_2 = 0;
    VAR_3 = 10;
    if (VAR_4 == '0') {
      VAR_4 = *++VAR_0;
      if (VAR_4 == 'x' || VAR_4 == 'X') {
        VAR_3 = 16;
        VAR_4 = *++VAR_0;
      } else
        VAR_3 = 8;
    }

    VAR_6 =(unsigned long)0xffffffff / (unsigned long)VAR_3;
    VAR_7 =(unsigned long)0xffffffff % (unsigned long)VAR_3;

    for (;;) {
      if (FUNC_3(VAR_4)) {
     VAR_5 = (int)(VAR_4 - '0');

     if (VAR_2 > VAR_6 || (VAR_2 == VAR_6 && VAR_5 > VAR_7))
      return (0);

        VAR_2 = (VAR_2 * VAR_3) + (int)(VAR_4 - '0');
        VAR_4 = *++VAR_0;
      } else if (VAR_3 == 16 && FUNC_6(VAR_4)) {
     VAR_5 = (int)(VAR_4 + 10 - (FUNC_4(VAR_4) ? 'a' : 'A'));

     if (VAR_2 > VAR_6 || (VAR_2 == VAR_6 && VAR_5 > VAR_7))
      return (0);

     VAR_2 = (VAR_2 << 4) | (int)(VAR_4 + 10 - (FUNC_4(VAR_4) ? 'a' : 'A'));
        VAR_4 = *++VAR_0;
      } else
        break;
    }
    if (VAR_4 == '.') {






      if (VAR_9 >= VAR_8 + 3) {
        return (0);
      }
      *VAR_9++ = VAR_2;
      VAR_4 = *++VAR_0;
    } else
      break;
  }



  if (VAR_4 != '\0' && !FUNC_5(VAR_4)) {
    return (0);
  }




  switch (VAR_9 - VAR_8 + 1) {

  case 0:
    return (0);

  case 1:
    break;

  case 2:
    if ((VAR_2 > 0xffffffUL) || (VAR_8[0] > 0xff)) {
      return (0);
    }
    VAR_2 |= VAR_8[0] << 24;
    break;

  case 3:
    if ((VAR_2 > 0xffff) || (VAR_8[0] > 0xff) || (VAR_8[1] > 0xff)) {
      return (0);
    }
    VAR_2 |= (VAR_8[0] << 24) | (VAR_8[1] << 16);
    break;

  case 4:
    if ((VAR_2 > 0xff) || (VAR_8[0] > 0xff) || (VAR_8[1] > 0xff) || (VAR_8[2] > 0xff)) {
      return (0);
    }
    VAR_2 |= (VAR_8[0] << 24) | (VAR_8[1] << 16) | (VAR_8[2] << 8);
    break;
  default:
    FUNC_0("unhandled", 0);
    break;
  }
  if (VAR_1) {
    FUNC_2(VAR_1, FUNC_1(VAR_2));
  }
  return (1);
}
