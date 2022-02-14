
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ ULONG ;
typedef int PINFCACHE ;
typedef int INFSTATUS ;
typedef scalar_t__ HINF ;
typedef int FILE ;
typedef char CHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int **,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (int *,size_t,size_t,int *) ;

int
FUNC_8(HINF VAR_1,
                 const CHAR *VAR_2,
                 const CHAR *VAR_3)
{
  WCHAR *VAR_4;
  ULONG VAR_5;
  INFSTATUS VAR_6;
  FILE *VAR_7;

  VAR_6 = FUNC_4((PINFCACHE) VAR_1, &VAR_4, &VAR_5);
  if (! FUNC_3(VAR_6))
    {
      VAR_0 = VAR_6;
      return -1;
    }

  VAR_7 = FUNC_6(VAR_2, "wb");
  if (((void*)0) == VAR_7)
    {
      FUNC_2(VAR_4);
      FUNC_1("fopen() failed (errno %d)\n", VAR_0);
      return -1;
    }

  FUNC_0("fopen() successful\n");

  if (((void*)0) != VAR_3 && '\0' != *VAR_3)
    {

    }

  if (VAR_5 != FUNC_7(VAR_4, (size_t)1, (size_t)VAR_5, VAR_7))
    {
      FUNC_1("fwrite() failed (errno %d)\n", VAR_0);
      FUNC_5(VAR_7);
      FUNC_2(VAR_4);
      return -1;
    }

  FUNC_5(VAR_7);

  FUNC_2(VAR_4);

  return 0;
}
