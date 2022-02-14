
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct find_s {int expected_loc; int flags; int end; int start; int needle; } ;
typedef int ft ;
struct TYPE_6__ {int cpMax; int cpMin; } ;
struct TYPE_5__ {int cpMax; int cpMin; } ;
struct TYPE_7__ {TYPE_2__ chrgText; int lpstrText; TYPE_1__ chrg; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_3__ FINDTEXTEXA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int,char*,char const*,int,int ,int ,int ,int ,int,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(HWND VAR_1, const char *VAR_2, struct find_s *VAR_3,
    int VAR_4) {
  int VAR_5;
  FINDTEXTEXA VAR_6;
  int VAR_7;

  FUNC_2(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.chrg.cpMin = VAR_3->start;
  VAR_6.chrg.cpMax = VAR_3->end;
  VAR_6.lpstrText = VAR_3->needle;
  VAR_6.chrgText.cpMax = 0xdeadbeef;
  VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_3->flags, (LPARAM)&VAR_6);
  FUNC_3(VAR_5 == VAR_3->expected_loc,
      "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, start at %d\n",
      VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_5);
  FUNC_3(VAR_6.chrgText.cpMin == VAR_3->expected_loc,
      "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, start at %d, expected %d\n",
      VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_6.chrgText.cpMin, VAR_3->expected_loc);
  VAR_7 = ((VAR_3->expected_loc == -1) ? -1
        : VAR_3->expected_loc + FUNC_4(VAR_3->needle));
  FUNC_3(VAR_6.chrgText.cpMax == VAR_7 ||
      FUNC_1(VAR_6.chrgText.cpMin == -1 && VAR_6.chrgText.cpMax == 0xdeadbeef),
      "EM_FINDTEXTEX(%s,%d) '%s' in range(%d,%d), flags %08x, end at %d, expected %d\n",
      VAR_2, VAR_4, VAR_3->needle, VAR_3->start, VAR_3->end, VAR_3->flags, VAR_6.chrgText.cpMax, VAR_7);
}
