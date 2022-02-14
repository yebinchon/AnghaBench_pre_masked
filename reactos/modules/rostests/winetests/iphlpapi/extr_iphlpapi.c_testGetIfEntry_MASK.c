
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int row ;
struct TYPE_4__ {int dwIndex; } ;
typedef TYPE_1__ MIB_IFROW ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(DWORD VAR_5)
{
  if (&FUNC_2) {
    DWORD VAR_6;
    MIB_IFROW VAR_7;

    FUNC_0(&VAR_7, 0, sizeof(VAR_7));
    VAR_6 = FUNC_2(((void*)0));
    if (VAR_6 == VAR_3) {
      FUNC_3("GetIfEntry is not supported\n");
      return;
    }
    FUNC_1(VAR_6 == VAR_2,
     "GetIfEntry(NULL) returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_6);
    VAR_7.dwIndex = -1;
    VAR_6 = FUNC_2(&VAR_7);
    FUNC_1(VAR_6 == VAR_1 ||
     VAR_6 == VAR_0 ,
     "GetIfEntry(bogus row) returned %d, expected ERROR_INVALID_DATA or ERROR_FILE_NOT_FOUND\n",
     VAR_6);
    VAR_7.dwIndex = VAR_5;
    VAR_6 = FUNC_2(&VAR_7);
    FUNC_1(VAR_6 == VAR_4,
     "GetIfEntry returned %d, expected NO_ERROR\n", VAR_6);
  }
}
