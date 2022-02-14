
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__ const*,int,int *,int ,int *,int *) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__ const*,char*,int) ;

__attribute__((used)) static __inline char* FUNC_4(const wchar_t* VAR_1)
{
 int VAR_2 = 0;
 char* VAR_3 = ((void*)0);


 if (VAR_1[0] == 0)
  return FUNC_1(1, 1);


 VAR_2 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0, ((void*)0), ((void*)0));
 if (VAR_2 <= 1)
  return ((void*)0);

 if ((VAR_3 = (char*)FUNC_1(VAR_2, 1)) == ((void*)0))
  return ((void*)0);

 if (FUNC_3(VAR_1, VAR_3, VAR_2) != VAR_2) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
