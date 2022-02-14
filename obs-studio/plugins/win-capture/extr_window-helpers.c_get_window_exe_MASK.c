
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct dstr {int array; int member_0; } ;
typedef int HWND ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct dstr*,char*) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,int *) ;
 int * FUNC_7 (int ,int,scalar_t__) ;
 char* FUNC_8 (int ,char) ;

bool FUNC_9(struct dstr *VAR_2, HWND VAR_3)
{
 wchar_t VAR_4[VAR_0];
 struct dstr VAR_5 = {0};
 bool VAR_6 = 0;
 HANDLE VAR_7 = ((void*)0);
 char *VAR_8;
 DWORD VAR_9;

 FUNC_3(VAR_3, &VAR_9);
 if (VAR_9 == FUNC_1())
  return 0;

 VAR_7 = FUNC_7(VAR_1, 0, VAR_9);
 if (!VAR_7)
  goto fail;

 if (!FUNC_2(VAR_7, VAR_4, VAR_0))
  goto fail;

 FUNC_6(&VAR_5, VAR_4);
 VAR_8 = FUNC_8(VAR_5.array, '\\');
 if (!VAR_8)
  goto fail;

 FUNC_4(VAR_2, VAR_8 + 1);
 VAR_6 = 1;

fail:
 if (!VAR_6)
  FUNC_4(VAR_2, "unknown");

 FUNC_5(&VAR_5);
 FUNC_0(VAR_7);
 return 1;
}
