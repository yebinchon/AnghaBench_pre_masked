
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {char* p; int len; } ;
struct TYPE_3__ {char* p; int len; } ;
struct mg_dns_resource_record {unsigned char rtype; unsigned char rclass; int ttl; TYPE_2__ rdata; int kind; TYPE_1__ name; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned char *FUNC_0(
    unsigned char *VAR_2, unsigned char *VAR_3, struct mg_dns_resource_record *VAR_4,
    int VAR_5) {
  unsigned char *VAR_6 = VAR_2;
  int VAR_7, VAR_8;

  while (VAR_2 < VAR_3 && (VAR_7 = *VAR_2)) {
    if (((unsigned char *) VAR_2)[0] & 0xc0) {
      VAR_2 += 1;
      break;
    }
    VAR_2 += VAR_7 + 1;
  }

  if (VAR_2 > VAR_3 - 5) {
    return ((void*)0);
  }

  VAR_4->name.p = (char *) VAR_6;
  VAR_4->name.len = VAR_2 - VAR_6 + 1;
  VAR_2++;

  VAR_4->rtype = VAR_2[0] << 8 | VAR_2[1];
  VAR_2 += 2;

  VAR_4->rclass = VAR_2[0] << 8 | VAR_2[1];
  VAR_2 += 2;

  VAR_4->kind = VAR_5 ? VAR_0 : VAR_1;
  if (VAR_5) {
    if (VAR_2 >= VAR_3 - 6) {
      return ((void*)0);
    }

    VAR_4->ttl = (uint32_t) VAR_2[0] << 24 | (uint32_t) VAR_2[1] << 16 |
              VAR_2[2] << 8 | VAR_2[3];
    VAR_2 += 4;

    VAR_8 = *VAR_2 << 8 | *(VAR_2 + 1);
    VAR_2 += 2;

    VAR_4->rdata.p = (char *) VAR_2;
    VAR_4->rdata.len = VAR_8;
    VAR_2 += VAR_8;
  }
  return VAR_2;
}
