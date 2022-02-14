
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int const*,int,char*,int,int *,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;

__attribute__((used)) static char *FUNC_3(const wchar_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 char *VAR_4 = ((void*)0);

 VAR_3 = (size_t)FUNC_0(VAR_0, 0, VAR_1, (int)VAR_2, ((void*)0),
            0, ((void*)0), 0);
 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_3 + 1);
  VAR_3 = (size_t)FUNC_0(VAR_0, 0, VAR_1,
             (int)VAR_2, VAR_4,
             (int)VAR_3 + 1, ((void*)0),
             0);

  if (!VAR_3) {
   FUNC_1(VAR_4);
   VAR_4 = ((void*)0);
  }
 }

 return VAR_4;
}
