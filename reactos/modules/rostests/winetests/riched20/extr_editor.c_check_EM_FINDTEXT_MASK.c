
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct find_s {int expected_loc; int flags; int end; int start; scalar_t__ needle; } ;
typedef int ftw ;
typedef int fta ;
struct TYPE_5__ {int cpMax; int cpMin; } ;
struct TYPE_6__ {scalar_t__ lpstrText; TYPE_1__ chrg; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_2__ FINDTEXTW ;
typedef TYPE_2__ FINDTEXTA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int,char*,char const*,int,int ,scalar_t__,int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_6(HWND VAR_2, const char *VAR_3, struct find_s *VAR_4, int VAR_5, BOOL VAR_6)
{
  int VAR_7;

  if(VAR_6){
      FINDTEXTW VAR_8;
      FUNC_4(&VAR_8, 0, sizeof(VAR_8));
      VAR_8.chrg.cpMin = VAR_4->start;
      VAR_8.chrg.cpMax = VAR_4->end;
      VAR_8.lpstrText = FUNC_3(VAR_4->needle);

      VAR_7 = FUNC_2(VAR_2, VAR_0, VAR_4->flags, (LPARAM)&VAR_8);
      FUNC_5(VAR_7 == VAR_4->expected_loc,
         "EM_FINDTEXT(%s,%d,%u) '%s' in range(%d,%d), flags %08x, got start at %d, expected %d\n",
         VAR_3, VAR_5, VAR_6, VAR_4->needle, VAR_4->start, VAR_4->end, VAR_4->flags, VAR_7, VAR_4->expected_loc);

      VAR_7 = FUNC_2(VAR_2, VAR_1, VAR_4->flags, (LPARAM)&VAR_8);
      FUNC_5(VAR_7 == VAR_4->expected_loc,
         "EM_FINDTEXTW(%s,%d,%u) '%s' in range(%d,%d), flags %08x, got start at %d, expected %d\n",
         VAR_3, VAR_5, VAR_6, VAR_4->needle, VAR_4->start, VAR_4->end, VAR_4->flags, VAR_7, VAR_4->expected_loc);

      FUNC_1(FUNC_0(), 0, (void*)VAR_8.lpstrText);
  }else{
      FINDTEXTA VAR_9;
      FUNC_4(&VAR_9, 0, sizeof(VAR_9));
      VAR_9.chrg.cpMin = VAR_4->start;
      VAR_9.chrg.cpMax = VAR_4->end;
      VAR_9.lpstrText = VAR_4->needle;

      VAR_7 = FUNC_2(VAR_2, VAR_0, VAR_4->flags, (LPARAM)&VAR_9);
      FUNC_5(VAR_7 == VAR_4->expected_loc,
         "EM_FINDTEXT(%s,%d,%u) '%s' in range(%d,%d), flags %08x, got start at %d, expected %d\n",
         VAR_3, VAR_5, VAR_6, VAR_4->needle, VAR_4->start, VAR_4->end, VAR_4->flags, VAR_7, VAR_4->expected_loc);
  }
}
