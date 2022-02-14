
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int ) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int *,int) ;

__attribute__((used)) static __inline wchar_t* FUNC_4(const char* VAR_1)
{
 int VAR_2 = 0;
 wchar_t* VAR_3 = ((void*)0);

 if (VAR_1 == ((void*)0))
  return ((void*)0);


 if (VAR_1[0] == 0)
  return FUNC_1(1, sizeof(wchar_t));


 VAR_2 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0);
 if (VAR_2 <= 1)
  return ((void*)0);

 if ((VAR_3 = (wchar_t*)FUNC_1(VAR_2, sizeof(wchar_t))) == ((void*)0))
  return ((void*)0);

 if (FUNC_3(VAR_1, VAR_3, VAR_2) != VAR_2) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
