
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int const*,int,char*,int,int *,int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static __inline char* FUNC_3(const wchar_t* VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 char* VAR_4 = ((void*)0);


 VAR_3 = FUNC_0(VAR_0, 0, VAR_1, VAR_2, ((void*)0), 0, ((void*)0), ((void*)0));
 if (VAR_3 <= 1)
  return ((void*)0);

 if ((VAR_4 = (char*)FUNC_1(VAR_3, 1)) == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_0, 0, VAR_1, VAR_2, VAR_4, VAR_3, ((void*)0), ((void*)0)) != VAR_3) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
