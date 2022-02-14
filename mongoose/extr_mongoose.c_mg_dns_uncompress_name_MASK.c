
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct mg_str {scalar_t__ p; } ;
struct TYPE_2__ {int len; scalar_t__ p; } ;
struct mg_dns_message {TYPE_1__ pkt; } ;


 int FUNC_0 (char*,unsigned char const*,int) ;

size_t FUNC_1(struct mg_dns_message *VAR_0, struct mg_str *VAR_1,
                              char *VAR_2, int VAR_3) {
  int VAR_4, VAR_5 = 0;
  char *VAR_6 = VAR_2;
  const unsigned char *VAR_7 = (unsigned char *) VAR_1->p;
  const unsigned char *VAR_8 = (unsigned char *) VAR_0->pkt.p + VAR_0->pkt.len;

  if (VAR_7 >= VAR_8) {
    return 0;
  }

  while ((VAR_4 = *VAR_7++)) {
    int VAR_9 = VAR_3 - (VAR_2 - VAR_6);
    if (VAR_7 >= VAR_8) {
      return 0;
    }

    if ((VAR_4 & 0xc0) == 0xc0) {
      uint16_t VAR_10 = (VAR_7[-1] & (~0xc0)) << 8 | VAR_7[0];
      if (VAR_10 >= VAR_0->pkt.len) {
        return 0;
      }

      if (++VAR_5 > 15) {
        return 0;
      }
      VAR_7 = (unsigned char *) VAR_0->pkt.p + VAR_10;
      continue;
    }
    if (VAR_4 > 63) {
      return 0;
    }
    if (VAR_4 > VAR_9) {
      VAR_4 = VAR_9;
    }

    if (VAR_7 + VAR_4 >= VAR_8) {
      return 0;
    }

    FUNC_0(VAR_2, VAR_7, VAR_4);
    VAR_7 += VAR_4;
    VAR_2 += VAR_4;
    VAR_9 -= VAR_4;
    if (VAR_9 == 0) {
      return VAR_2 - VAR_6;
    }
    *VAR_2++ = '.';
  }

  if (VAR_2 != VAR_6) {
    *--VAR_2 = 0;
  }
  return VAR_2 - VAR_6;
}
