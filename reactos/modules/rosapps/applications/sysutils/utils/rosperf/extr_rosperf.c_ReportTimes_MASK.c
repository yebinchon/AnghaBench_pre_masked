
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 double FUNC_0 (double) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_2(DWORD VAR_0, int VAR_1, LPCWSTR VAR_2, BOOL VAR_3)
{
  double VAR_4, VAR_5;

  if (0 != VAR_0)
    {
      VAR_4 = (double) VAR_0 / (double) VAR_1;
      VAR_5 = (double) VAR_1 * 1000.0 / (double) VAR_0;



      VAR_5 = FUNC_0(VAR_5);

      FUNC_1(L"%7d %s @ %8.4f msec (%8.1f/sec): %s\n",
              VAR_1, VAR_3 ? L"trep" : L"reps", VAR_4, VAR_5, VAR_2);
    }
  else
    {
      FUNC_1(L"%6d %sreps @ 0.0 msec (unmeasurably fast): %s\n",
              VAR_1, VAR_3 ? L"t" : L"", VAR_2);
    }

}
