
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int **) ;

int FUNC_3(const char *VAR_1, const char *VAR_2)
{
 wchar_t *VAR_3 = ((void*)0);
 wchar_t *VAR_4 = ((void*)0);
 int VAR_5 = -1;

 if (!FUNC_2(VAR_1, 0, &VAR_3)) {
  return -1;
 }
 if (!FUNC_2(VAR_2, 0, &VAR_4)) {
  goto error;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_4,
      VAR_0)
         ? 0
         : -1;

error:
 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 return VAR_5;
}
