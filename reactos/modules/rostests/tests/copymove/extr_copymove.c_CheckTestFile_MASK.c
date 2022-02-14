
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,char*,int,int*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(LPCTSTR VAR_5, DWORD VAR_6)
{
 HANDLE VAR_7;
 char VAR_8[4096];
 DWORD VAR_9;
 int VAR_10;
 DWORD VAR_11;

 VAR_7 = FUNC_1(VAR_5,
                   VAR_0,
                   0,
                   ((void*)0),
                   VAR_3,
                   0,
                   0);

 if (VAR_2 == VAR_7) {
  FUNC_6(VAR_4, "CreateFile failed with code %d\n", FUNC_3());
  FUNC_5(1);
 }

 if (! FUNC_4(VAR_7, VAR_8, sizeof(VAR_8), &VAR_9, ((void*)0))) {
  FUNC_6(VAR_4, "ReadFile failed with code %d\n", FUNC_3());
  FUNC_5(1);
 }
 if (VAR_9 != sizeof(VAR_8)) {
  FUNC_6(VAR_4, "Trying to read %u bytes but got %d bytes\n", sizeof(VAR_8), VAR_9);
  FUNC_5(1);
 }
 for(VAR_10 = 0; VAR_10 < sizeof(VAR_8); VAR_10++) {
  if (VAR_8[VAR_10] != (char) VAR_10) {
   FUNC_6(VAR_4, "File contents changed at position %u\n", VAR_10);
   FUNC_5(1);
  }
 }

 FUNC_0(VAR_7);

 VAR_11 = FUNC_2(VAR_5);
 if (VAR_1 == VAR_11) {
  FUNC_6(VAR_4, "GetFileAttributes failed with code %d\n", FUNC_3());
  FUNC_5(1);
 }
 if (VAR_11 != VAR_6) {
  FUNC_6(VAR_4, "Attribute mismatch, expected 0x%08x found 0x%08x\n", VAR_6, VAR_11);
  FUNC_5(1);
 }
}
