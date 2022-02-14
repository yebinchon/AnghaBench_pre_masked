
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int _Locale_lcid_t ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {scalar_t__ cp; int wctomb_flags; int max_char_size; int* cleads; int mbtowc_flags; TYPE_1__ lc; } ;
typedef TYPE_2__ _Locale_codecvt_t ;
struct TYPE_10__ {int MaxCharSize; scalar_t__ LeadByte; } ;
typedef TYPE_3__ CPINFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char const*,int *,char*,int *) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

_Locale_codecvt_t* FUNC_6(const char * VAR_9, _Locale_lcid_t* VAR_10, int *VAR_11) {
  char VAR_12[VAR_3 + 1];
  unsigned char *VAR_13;
  CPINFO VAR_14;
  int VAR_15;

  _Locale_codecvt_t *VAR_16 = (_Locale_codecvt_t*)FUNC_4(sizeof(_Locale_codecvt_t));

  if (!VAR_16) { *VAR_11 = VAR_7; return VAR_16; }
  FUNC_5(VAR_16, 0, sizeof(_Locale_codecvt_t));

  if (FUNC_1(VAR_9, &VAR_16->lc.id, VAR_12, VAR_10) == -1)
  { FUNC_3(VAR_16); *VAR_11 = VAR_8; return ((void*)0); }

  VAR_16->cp = FUNC_2(VAR_12);
  if (!FUNC_0(VAR_16->cp, &VAR_14)) { FUNC_3(VAR_16); return ((void*)0); }

  if (VAR_16->cp != VAR_1 && VAR_16->cp != VAR_2) {
    VAR_16->mbtowc_flags = VAR_4;
    VAR_16->wctomb_flags = VAR_5 | VAR_6;
  }
  VAR_16->max_char_size = VAR_14.MaxCharSize;

  if (VAR_14.MaxCharSize > 1) {
    for (VAR_13 = (unsigned char*)VAR_14.LeadByte; *VAR_13 && *(VAR_13 + 1); VAR_13 += 2)
      for (VAR_15 = *VAR_13; VAR_15 <= *(VAR_13 + 1); ++VAR_15) VAR_16->cleads[VAR_15 / VAR_0] |= (0x01 << VAR_15 % VAR_0);
  }

  return VAR_16;
}
