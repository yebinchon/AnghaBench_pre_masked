
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,char*,int,int *,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(LPCTSTR VAR_5, DWORD VAR_6)
{
 HANDLE VAR_7;
 char VAR_8[4096];
 DWORD VAR_9;
 int VAR_10;

 FUNC_2(VAR_5);
 VAR_7 = FUNC_1(VAR_5,
                   VAR_1 | VAR_2,
                   0,
                   ((void*)0),
                   VAR_0,
                   0,
                   0);

 if (VAR_3 == VAR_7) {
  FUNC_7(VAR_4, "CreateFile failed with code %d\n", FUNC_3());
  FUNC_6(1);
 }
 for(VAR_10 = 0; VAR_10 < sizeof(VAR_8); VAR_10++) {
  VAR_8[VAR_10] = (char) VAR_10;
 }
 if (! FUNC_5(VAR_7, VAR_8, sizeof(VAR_8), &VAR_9, ((void*)0))) {
  FUNC_7(VAR_4, "WriteFile failed with code %d\n", FUNC_3());
  FUNC_6(1);
 }
 FUNC_0(VAR_7);

 if (! FUNC_4(VAR_5, VAR_6)) {
  FUNC_7(VAR_4, "SetFileAttributes failed with code %d\n", FUNC_3());
  FUNC_6(1);
 }
}
