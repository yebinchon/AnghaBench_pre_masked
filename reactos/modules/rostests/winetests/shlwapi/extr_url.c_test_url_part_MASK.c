
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef char const CHAR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (char const*,char const*,int*,int,int) ;
 scalar_t__ FUNC_5 (int ,int *,int*,int,int) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(const char* VAR_3, DWORD VAR_4, DWORD VAR_5, const char* VAR_6)
{
  CHAR VAR_7[VAR_1];
  WCHAR VAR_8[VAR_1];
  LPWSTR VAR_9 = FUNC_1(VAR_3);
  LPWSTR VAR_10;
  HRESULT VAR_11;
  DWORD VAR_12;

  VAR_12 = 1;
  VAR_11 = FUNC_4(VAR_3, VAR_7, &VAR_12, VAR_4, VAR_5);
  FUNC_3(VAR_11 == VAR_0, "UrlGetPart for \"%s\" gave: 0x%08x\n", VAR_3, VAR_11);
  FUNC_3(VAR_12 == FUNC_7(VAR_6)+1 ||
          (*VAR_6 == '?' && VAR_12 == FUNC_7(VAR_6)),
          "UrlGetPart for \"%s\" gave size: %u\n", VAR_3, VAR_12);

  VAR_12 = VAR_1;
  VAR_11 = FUNC_4(VAR_3, VAR_7, &VAR_12, VAR_4, VAR_5);
  FUNC_3(VAR_11 == VAR_2,
    "UrlGetPartA for \"%s\" part 0x%08x returned 0x%x and \"%s\"\n",
    VAR_3, VAR_4, VAR_11, VAR_7);
  if (&FUNC_5) {
    VAR_12 = VAR_1;
    VAR_11 = FUNC_5(VAR_9, VAR_8, &VAR_12, VAR_4, VAR_5);
    FUNC_3(VAR_11 == VAR_2,
      "UrlGetPartW for \"%s\" part 0x%08x returned 0x%x\n",
      VAR_3, VAR_4, VAR_11);

    VAR_10 = FUNC_1(VAR_7);

    FUNC_3(FUNC_2(VAR_8,VAR_10)==0,
        "Strings didn't match between ascii and unicode UrlGetPart!\n");

    FUNC_0(VAR_10);
  }
  FUNC_0(VAR_9);


  FUNC_3(FUNC_6(VAR_7,VAR_6)==0 ||
     (*VAR_6=='?' && !FUNC_6(VAR_7,VAR_6+1)),
  "Expected %s, but got %s\n", VAR_6, VAR_7);
}
