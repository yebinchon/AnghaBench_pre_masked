
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dir ;
typedef int WPARAM ;
typedef char WCHAR ;
struct TYPE_7__ {int Flags; char* lpstrInitialDir; char* lpstrCustomFilter; int nFilterIndex; char* lpstrFile; scalar_t__ lpstrFilter; int lpstrTitle; } ;
struct TYPE_6__ {int lParam; scalar_t__ hook; TYPE_2__* ofnW; int hwnd; } ;
typedef TYPE_1__* PFD31_DATA ;
typedef char* LPWSTR ;
typedef TYPE_2__* LPOPENFILENAMEW ;
typedef scalar_t__ LPARAM ;
typedef int LONG ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 char* FUNC_2 (char*,scalar_t__,int) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ,int ,int,scalar_t__) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,...) ;
 int VAR_13 ;
 int FUNC_13 (char*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (char*) ;
 int VAR_18 ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*) ;
 int VAR_19 ;
 scalar_t__ FUNC_17 (char) ;

__attribute__((used)) static LONG FUNC_18(HWND VAR_20, WPARAM VAR_21, LPARAM VAR_22)
{
  int VAR_23, VAR_24;
  WCHAR VAR_25[VAR_0];
  LPWSTR VAR_26, VAR_27;
  LPOPENFILENAMEW VAR_28;
  PFD31_DATA VAR_29 = (PFD31_DATA) VAR_22;

  if (!VAR_29) return VAR_7;
  FUNC_9(VAR_20, VAR_8, VAR_29);
  VAR_29->hwnd = VAR_20;
  VAR_28 = VAR_29->ofnW;

  FUNC_12("flags=%x initialdir=%s\n", VAR_28->Flags, FUNC_14(VAR_28->lpstrInitialDir));

  FUNC_10( VAR_20, VAR_28->lpstrTitle );

  if (VAR_28->lpstrCustomFilter)
    {
      VAR_26 = VAR_28->lpstrCustomFilter;
      VAR_24 = 0;
      FUNC_12("lpstrCustomFilter = %p\n", VAR_26);
      while(*VAR_26)
 {
   VAR_27 = VAR_26;
          VAR_23 = FUNC_7(VAR_20, VAR_16, VAR_1, 0,
                                   (LPARAM)(VAR_28->lpstrCustomFilter) + VAR_24 );
          VAR_24 += FUNC_16(VAR_26) + 1;
   VAR_26 += FUNC_16(VAR_26) + 1;
   FUNC_12("add str=%s associated to %s\n",
                FUNC_14(VAR_27), FUNC_14(VAR_26));
          FUNC_7(VAR_20, VAR_16, VAR_3, VAR_23, (LPARAM)VAR_26);
          VAR_24 += FUNC_16(VAR_26) + 1;
   VAR_26 += FUNC_16(VAR_26) + 1;
 }
    }

  if (VAR_28->lpstrFilter) {
 VAR_26 = (LPWSTR) VAR_28->lpstrFilter;
 VAR_24 = 0;
 while(*VAR_26) {
   VAR_27 = VAR_26;
   VAR_23 = FUNC_7(VAR_20, VAR_16, VAR_1, 0,
           (LPARAM)(VAR_28->lpstrFilter + VAR_24) );
   VAR_24 += FUNC_16(VAR_26) + 1;
   VAR_26 += FUNC_16(VAR_26) + 1;
   FUNC_12("add str=%s associated to %s\n",
                FUNC_14(VAR_27), FUNC_14(VAR_26));
   FUNC_7(VAR_20, VAR_16, VAR_3, VAR_23, (LPARAM)VAR_26);
   VAR_24 += FUNC_16(VAR_26) + 1;
   VAR_26 += FUNC_16(VAR_26) + 1;
 }
  }

  if (VAR_28->nFilterIndex == 0 && VAR_28->lpstrCustomFilter == ((void*)0))
   VAR_28->nFilterIndex = 1;
  FUNC_7(VAR_20, VAR_16, VAR_2, VAR_28->nFilterIndex - 1, 0);
  if (VAR_28->lpstrFile && VAR_28->lpstrFile[0])
  {
    FUNC_12( "SetText of edt1 to %s\n", FUNC_14(VAR_28->lpstrFile) );
    FUNC_8( VAR_20, VAR_18, VAR_28->lpstrFile );
  }
  else
  {
    FUNC_15(VAR_25, FUNC_2(VAR_28->lpstrCustomFilter,
      VAR_28->lpstrFilter, VAR_28->nFilterIndex - 1),VAR_0);
    FUNC_12("nFilterIndex = %d, SetText of edt1 to %s\n",
     VAR_28->nFilterIndex, FUNC_14(VAR_25));
    FUNC_8( VAR_20, VAR_18, VAR_25 );
  }

  *VAR_25 = 0;
  FUNC_0(VAR_20, VAR_25, VAR_17, 0, VAR_4 | VAR_5);





  if (VAR_28->lpstrInitialDir != ((void*)0))
    {
      int VAR_30;
      FUNC_15(VAR_25, VAR_28->lpstrInitialDir, 511);
      VAR_30 = FUNC_16(VAR_25);
      if (VAR_30 > 0 && VAR_25[VAR_30-1] != '\\' && VAR_25[VAR_30-1] != ':') {
        VAR_25[VAR_30]='\\';
        VAR_25[VAR_30+1]='\0';
      }
    }
  else
    *VAR_25 = 0;
  if (!FUNC_3(VAR_28, VAR_20, VAR_25)) {
    *VAR_25 = 0;
    if (!FUNC_3(VAR_28, VAR_20, VAR_25))
      FUNC_13("Couldn't read initial directory %s!\n", FUNC_14(VAR_25));
  }

  {
      char VAR_31[VAR_9];
      char VAR_32[4] = "a:\\";
      FUNC_4( sizeof(VAR_31), VAR_31 );
      for(VAR_23 = 0, VAR_24 = -1; VAR_23 < 26; VAR_23++)
      {
          VAR_32[0] = 'a' + VAR_23;
          if (FUNC_6(VAR_32) > VAR_6) VAR_24++;
          if (FUNC_17(VAR_32[0]) == FUNC_17(VAR_31[0])) break;
      }
  }
  FUNC_7(VAR_20, VAR_17, VAR_2, VAR_24, 0);
  if (!(VAR_28->Flags & VAR_11))
    FUNC_11(FUNC_5(VAR_20, VAR_19), VAR_12);
  if (VAR_28->Flags & VAR_10)
    FUNC_11(FUNC_5(VAR_20, VAR_15), VAR_12);
  if (VAR_29->hook)
      return FUNC_1(VAR_29, VAR_14, VAR_21, VAR_29->lParam);
  return VAR_13;
}
