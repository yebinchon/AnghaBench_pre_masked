
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct dstr {int array; } ;
typedef int LPSTR ;
typedef void* HMODULE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,scalar_t__,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int ,char*,char const*,char*,scalar_t__) ;
 int FUNC_8 (struct dstr*,char*) ;
 int FUNC_9 (struct dstr*,char*) ;
 int FUNC_10 (struct dstr*) ;
 int FUNC_11 (struct dstr*,char const*) ;
 int FUNC_12 (struct dstr*,char*,char*) ;
 int FUNC_13 (int ,int ,int**) ;
 int* FUNC_14 (int*,int) ;

void *FUNC_15(const char *VAR_7)
{
 struct dstr VAR_8;
 wchar_t *VAR_9;
 wchar_t *VAR_10;
 HMODULE VAR_11 = ((void*)0);

 if (!VAR_7)
  return ((void*)0);

 FUNC_11(&VAR_8, VAR_7);
 FUNC_12(&VAR_8, "\\", "/");
 if (!FUNC_9(&VAR_8, ".dll"))
  FUNC_8(&VAR_8, ".dll");

 FUNC_13(VAR_8.array, 0, &VAR_9);




 VAR_10 = FUNC_14(VAR_9, L'/');
 if (VAR_10) {
  *VAR_10 = 0;
  FUNC_5(VAR_9);
  *VAR_10 = L'/';
 }

 VAR_11 = FUNC_2(VAR_9);
 FUNC_6(VAR_9);
 FUNC_10(&VAR_8);

 if (VAR_10)
  FUNC_5(((void*)0));

 if (!VAR_11) {
  DWORD VAR_12 = FUNC_1();



  if (VAR_12 == VAR_0)
   return ((void*)0);

  char *VAR_13 = ((void*)0);

  FUNC_0(VAR_2 |
           VAR_3 |
           VAR_1,
          ((void*)0), VAR_12,
          FUNC_4(VAR_4, VAR_6),
          (LPSTR)&VAR_13, 0, ((void*)0));

  FUNC_7(VAR_5, "LoadLibrary failed for '%s': %s (%lu)", VAR_7,
       VAR_13, VAR_12);

  if (VAR_13)
   FUNC_3(VAR_13);
 }

 return VAR_11;
}
