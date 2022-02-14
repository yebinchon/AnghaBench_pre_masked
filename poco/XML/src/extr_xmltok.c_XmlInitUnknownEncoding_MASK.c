
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int utf16Convert; int utf8Convert; } ;
struct TYPE_6__ {unsigned char* type; TYPE_2__ enc; void* isInvalid4; void* isInvalid3; void* isInvalid2; void* isNmstrt4; void* isNmstrt3; void* isNmstrt2; void* isName4; void* isName3; void* isName2; } ;
struct unknown_encoding {int* utf16; int** utf8; TYPE_1__ normal; scalar_t__ convert; void* userData; } ;
struct normal_encoding {int dummy; } ;
struct TYPE_8__ {unsigned char* type; } ;
typedef TYPE_2__ ENCODING ;
typedef scalar_t__ CONVERTER ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_3 (void*,TYPE_3__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

ENCODING *
FUNC_4(void *VAR_14, int *VAR_15, CONVERTER VAR_16,
                       void *VAR_17) {
  int VAR_18;
  struct unknown_encoding *VAR_19 = (struct unknown_encoding *)VAR_14;
  FUNC_3(VAR_14, &VAR_6, sizeof(struct normal_encoding));
  for (VAR_18 = 0; VAR_18 < 128; VAR_18++)
    if (VAR_6.type[VAR_18] != VAR_5
        && VAR_6.type[VAR_18] != VAR_4 && VAR_15[VAR_18] != VAR_18)
      return 0;
  for (VAR_18 = 0; VAR_18 < 256; VAR_18++) {
    int VAR_20 = VAR_15[VAR_18];
    if (VAR_20 == -1) {
      VAR_19->normal.type[VAR_18] = VAR_1;

      VAR_19->utf16[VAR_18] = 0xFFFF;
      VAR_19->utf8[VAR_18][0] = 1;
      VAR_19->utf8[VAR_18][1] = 0;
    } else if (VAR_20 < 0) {
      if (VAR_20 < -4)
        return 0;

      if (! VAR_16)
        return 0;
      VAR_19->normal.type[VAR_18] = (unsigned char)(VAR_0 - (VAR_20 + 2));
      VAR_19->utf8[VAR_18][0] = 0;
      VAR_19->utf16[VAR_18] = 0;
    } else if (VAR_20 < 0x80) {
      if (VAR_6.type[VAR_20] != VAR_5
          && VAR_6.type[VAR_20] != VAR_4 && VAR_20 != VAR_18)
        return 0;
      VAR_19->normal.type[VAR_18] = VAR_6.type[VAR_20];
      VAR_19->utf8[VAR_18][0] = 1;
      VAR_19->utf8[VAR_18][1] = (char)VAR_20;
      VAR_19->utf16[VAR_18] = (unsigned short)(VAR_20 == 0 ? 0xFFFF : VAR_20);
    } else if (FUNC_2(VAR_20) < 0) {
      VAR_19->normal.type[VAR_18] = VAR_4;

      VAR_19->utf16[VAR_18] = 0xFFFF;
      VAR_19->utf8[VAR_18][0] = 1;
      VAR_19->utf8[VAR_18][1] = 0;
    } else {
      if (VAR_20 > 0xFFFF)
        return 0;
      if (FUNC_0(VAR_8, VAR_20 >> 8, VAR_20 & 0xff))
        VAR_19->normal.type[VAR_18] = VAR_3;
      else if (FUNC_0(VAR_7, VAR_20 >> 8, VAR_20 & 0xff))
        VAR_19->normal.type[VAR_18] = VAR_2;
      else
        VAR_19->normal.type[VAR_18] = VAR_5;
      VAR_19->utf8[VAR_18][0] = (char)FUNC_1(VAR_20, VAR_19->utf8[VAR_18] + 1);
      VAR_19->utf16[VAR_18] = (unsigned short)VAR_20;
    }
  }
  VAR_19->userData = VAR_17;
  VAR_19->convert = VAR_16;
  if (VAR_16) {
    VAR_19->normal.isName2 = VAR_10;
    VAR_19->normal.isName3 = VAR_10;
    VAR_19->normal.isName4 = VAR_10;
    VAR_19->normal.isNmstrt2 = VAR_11;
    VAR_19->normal.isNmstrt3 = VAR_11;
    VAR_19->normal.isNmstrt4 = VAR_11;
    VAR_19->normal.isInvalid2 = VAR_9;
    VAR_19->normal.isInvalid3 = VAR_9;
    VAR_19->normal.isInvalid4 = VAR_9;
  }
  VAR_19->normal.enc.utf8Convert = VAR_13;
  VAR_19->normal.enc.utf16Convert = VAR_12;
  return &(VAR_19->normal.enc);
}
