
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*) ;
 int * FUNC_7 (char const*) ;
 char* FUNC_8 (int *) ;

char* FUNC_9(const char* VAR_1, const char* VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 wchar_t *VAR_5 = ((void*)0), *VAR_6= ((void*)0), *VAR_7 = ((void*)0);
 wchar_t VAR_8[1024];
 FILE* VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);

 if ((VAR_2 == ((void*)0)) || (VAR_1 == ((void*)0)))
  return ((void*)0);
 if ((VAR_2[0] == 0) || (VAR_1[0] == 0))
  return ((void*)0);

 VAR_7 = FUNC_7(VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_6(VAR_0, VAR_2);
  goto out;
 }
 VAR_5 = FUNC_7(VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_6(VAR_0, VAR_1);
  goto out;
 }
 VAR_9 = FUNC_1(VAR_7, L"r, ccs=UNICODE");
 if (VAR_9 == ((void*)0)) goto out;



 while (FUNC_3(VAR_8, FUNC_0(VAR_8), VAR_9) != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_5, VAR_8);
  if ((VAR_6 != ((void*)0)) && (++VAR_4 == VAR_3)) {
   VAR_10 = FUNC_8(VAR_6);
   break;
  }
 }

out:
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_9);
 FUNC_5(VAR_7);
 FUNC_5(VAR_5);
 return VAR_10;
}
