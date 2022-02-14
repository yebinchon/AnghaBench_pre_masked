
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static void FUNC_5(const char* VAR_1)
{
 int VAR_2;
 wchar_t* VAR_3 = ((void*)0);

 if (VAR_1 == ((void*)0))
  goto out;
 VAR_2 = (int)FUNC_3(VAR_1);
 while ((VAR_2 > 0) && ((VAR_1[VAR_2-1] == 0x0A) || (VAR_1[VAR_2-1] == 0x0D) || (VAR_1[VAR_2-1] == ' ')))
  VAR_2--;
 if (VAR_2 == 0)
  goto out;

 VAR_2 = FUNC_0(VAR_0, 0, VAR_1, VAR_2, ((void*)0), 0);
 if (VAR_2 == 0)
  goto out;
 VAR_3 = (wchar_t*)FUNC_1(VAR_2+1, sizeof(wchar_t));
 if ((VAR_3 == ((void*)0)) || (FUNC_0(VAR_0, 0, VAR_1, VAR_2, VAR_3, VAR_2+1) == 0))
  goto out;
 FUNC_4("%S", VAR_3);

out:
 FUNC_2(VAR_3);
}
