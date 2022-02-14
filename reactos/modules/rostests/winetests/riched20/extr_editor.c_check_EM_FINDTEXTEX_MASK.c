
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct find_s {int expected_loc; int flags; int end; int start; scalar_t__ needle; } ;
typedef int ftw ;
typedef int fta ;
struct TYPE_7__ {int cpMin; int cpMax; } ;
struct TYPE_6__ {int cpMax; int cpMin; } ;
struct TYPE_8__ {TYPE_2__ chrgText; scalar_t__ lpstrText; TYPE_1__ chrg; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_3__ FINDTEXTEXW ;
typedef TYPE_3__ FINDTEXTEXA ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (int,char*,char const*,int,scalar_t__,int ,int ,int ,int,...) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(HWND VAR_1, const char *VAR_2, struct find_s *VAR_3,
    int VAR_4, BOOL VAR_5)
{
  int VAR_6;
  int VAR_7;

  if(VAR_5){
      FINDTEXTEXW VAR_8;
      FUNC_4(&VAR_8, 0, sizeof(VAR_8));
      VAR_8.chrg.cpMin = VAR_3->start;
      VAR_8.chrg.cpMax = VAR_3->end;
      VAR_8.lpstrText = FUNC_3(VAR_3->needle);
      VAR_6 = FUNC_2(VAR_1, VAR_0, VAR_3->flags, (LPARAM)&VAR_8);
      FUNC_5(VAR_6 == VAR_3->expected_loc,
          "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, start at %d\n",
          VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_6);
      FUNC_5(VAR_8.chrgText.cpMin == VAR_3->expected_loc,
          "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, start at %d\n",
          VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_8.chrgText.cpMin);
      VAR_7 = ((VAR_3->expected_loc == -1) ? -1
            : VAR_3->expected_loc + FUNC_6(VAR_3->needle));
      FUNC_5(VAR_8.chrgText.cpMax == VAR_7,
          "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, end at %d, expected %d\n",
          VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_8.chrgText.cpMax, VAR_7);
      FUNC_1(FUNC_0(), 0, (void*)VAR_8.lpstrText);
  }else{
      FINDTEXTEXA VAR_9;
      FUNC_4(&VAR_9, 0, sizeof(VAR_9));
      VAR_9.chrg.cpMin = VAR_3->start;
      VAR_9.chrg.cpMax = VAR_3->end;
      VAR_9.lpstrText = VAR_3->needle;
      VAR_6 = FUNC_2(VAR_1, VAR_0, VAR_3->flags, (LPARAM)&VAR_9);
      FUNC_5(VAR_6 == VAR_3->expected_loc,
          "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, start at %d\n",
          VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_6);
      FUNC_5(VAR_9.chrgText.cpMin == VAR_3->expected_loc,
          "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, start at %d\n",
          VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_9.chrgText.cpMin);
      VAR_7 = ((VAR_3->expected_loc == -1) ? -1
            : VAR_3->expected_loc + FUNC_6(VAR_3->needle));
      FUNC_5(VAR_9.chrgText.cpMax == VAR_7,
          "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, end at %d, expected %d\n",
          VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_9.chrgText.cpMax, VAR_7);
  }
}
