
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int ,int **) ;

int FUNC_5(const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 wchar_t *VAR_5 = ((void*)0);
 wchar_t *VAR_6 = ((void*)0);
 wchar_t *VAR_7 = ((void*)0);
 int VAR_8 = -1;

 if (!VAR_2 || !VAR_3)
  return -1;
 if (!FUNC_4(VAR_2, 0, &VAR_5))
  return -1;
 if (!FUNC_4(VAR_3, 0, &VAR_6))
  goto fail;
 if (VAR_4 && !FUNC_4(VAR_4, 0, &VAR_7))
  goto fail;

 if (FUNC_2(VAR_5, VAR_6, VAR_7, 0, ((void*)0), ((void*)0))) {
  VAR_8 = 0;
 } else if (FUNC_0() == VAR_0) {
  VAR_8 = FUNC_1(VAR_6, VAR_5, VAR_1)
          ? 0
          : -1;
 }

fail:
 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 return VAR_8;
}
