
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int id; } ;
struct TYPE_15__ {scalar_t__ cp; unsigned short* ctable; TYPE_1__ lc; } ;
typedef TYPE_2__ wchar_t ;
typedef int ver_info ;
typedef int _Locale_lcid_t ;
typedef TYPE_2__ _Locale_ctype_t ;
typedef scalar_t__ UINT ;
struct TYPE_17__ {int MaxCharSize; scalar_t__ LeadByte; } ;
struct TYPE_16__ {int dwOSVersionInfoSize; scalar_t__ dwPlatformId; } ;
typedef TYPE_4__ OSVERSIONINFO ;
typedef TYPE_5__ CPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_5__*) ;
 int FUNC_1 (int,int ,char const*,int,unsigned short*) ;
 int FUNC_2 (int ,TYPE_2__*,int,unsigned short*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short FUNC_4 (unsigned short) ;
 int FUNC_5 (unsigned short*,unsigned short*) ;
 int FUNC_6 (int,int ,char const*,int,TYPE_2__*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int,int,TYPE_2__*,int,char*,int,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*,int*,char*,int *) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__*,int ,int) ;

_Locale_ctype_t* FUNC_14(const char * VAR_10, _Locale_lcid_t* VAR_11, int *VAR_12) {
  char VAR_13[VAR_3 + 1];
  int VAR_14;
  unsigned char VAR_15[256];
  unsigned char *VAR_16;
  CPINFO VAR_17;
  int VAR_18;
  wchar_t *VAR_19;
  int VAR_20;

  _Locale_ctype_t *VAR_21 = (_Locale_ctype_t*)FUNC_12(sizeof(_Locale_ctype_t));

  if (!VAR_21) { *VAR_12 = VAR_8; return VAR_21; }
  FUNC_13(VAR_21, 0, sizeof(_Locale_ctype_t));

  if (FUNC_9(VAR_10, &VAR_21->lc.id, VAR_13, VAR_11) == -1)
  { FUNC_11(VAR_21); *VAR_12 = VAR_9; return ((void*)0); }






  VAR_21->cp = FUNC_10(VAR_13);

  VAR_14 = FUNC_8(VAR_21->lc.id);


  for (VAR_18 = 0; VAR_18 < 256; ++VAR_18) VAR_15[VAR_18] = (unsigned char)VAR_18;

  if (!FUNC_0(VAR_14, &VAR_17)) { FUNC_11(VAR_21); return ((void*)0); }

  if (VAR_17.MaxCharSize > 1) {
    for (VAR_16 = (unsigned char*)VAR_17.LeadByte; *VAR_16 && *(VAR_16 + 1); VAR_16+=2)
      for (VAR_18 = *VAR_16; VAR_18 <= *(VAR_16 + 1); ++VAR_18) VAR_15[VAR_18] = 0;
  }

  if ((UINT)VAR_14 != VAR_21->cp) {
    OSVERSIONINFO VAR_22;
    VAR_22.dwOSVersionInfoSize = sizeof(VAR_22);
    FUNC_3(&VAR_22);
    if (VAR_22.dwPlatformId == VAR_5) {

      VAR_20 = FUNC_6(VAR_21->cp, VAR_4, (const char*)VAR_15, 256, ((void*)0), 0);
      if (!VAR_20) { FUNC_11(VAR_21); *VAR_12 = VAR_9; return ((void*)0); }
      VAR_19 = (wchar_t*)FUNC_12(VAR_20 * sizeof(wchar_t));
      if (!VAR_19) { FUNC_11(VAR_21); *VAR_12 = VAR_8; return ((void*)0); }
      FUNC_6(VAR_21->cp, VAR_4, (const char*)VAR_15, 256, VAR_19, VAR_20);

      FUNC_2(VAR_0, VAR_19, 256, VAR_21->ctable);
      FUNC_5(VAR_21->ctable, VAR_21->ctable + 256);
      FUNC_11(VAR_19);
    }
    else {
      unsigned short VAR_23[256];
      unsigned char VAR_24[256];
      FUNC_1(VAR_21->lc.id, VAR_0, (const char*)VAR_15, 256, VAR_23);


      VAR_20 = FUNC_6(VAR_14, VAR_4, (const char*)VAR_15, 256, ((void*)0), 0);
      if (!VAR_20) { FUNC_11(VAR_21); *VAR_12 = VAR_9; return ((void*)0); }
      VAR_19 = (wchar_t*)FUNC_12(VAR_20 * sizeof(wchar_t));
      if (!VAR_19) { FUNC_11(VAR_21); *VAR_12 = VAR_8; return ((void*)0); }
      FUNC_6(VAR_14, VAR_4, (const char*)VAR_15, 256, VAR_19, VAR_20);
      if (!FUNC_7(VAR_21->cp, VAR_6 | VAR_7, VAR_19, VAR_20, (char*)VAR_24, 256, ((void*)0), VAR_1))
      { FUNC_11(VAR_19); FUNC_11(VAR_21); *VAR_12 = VAR_9; return ((void*)0); }

      FUNC_11(VAR_19);


      for (VAR_18 = 0; VAR_18 < 256; ++VAR_18) {
        if (!VAR_24[VAR_18]) continue;
        VAR_21->ctable[VAR_24[VAR_18]] = FUNC_4(VAR_23[VAR_18]);
      }
    }
  }
  else {
    FUNC_1(VAR_21->lc.id, VAR_0, (const char*)VAR_15, 256, VAR_21->ctable);
    FUNC_5(VAR_21->ctable, VAR_21->ctable + 256);
  }
  return VAR_21;
}
