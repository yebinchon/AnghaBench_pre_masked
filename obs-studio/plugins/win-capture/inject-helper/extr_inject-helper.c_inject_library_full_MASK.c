
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int const*) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;

__attribute__((used)) static inline int FUNC_3(DWORD VAR_2, const wchar_t *VAR_3)
{
 HANDLE VAR_4 = FUNC_2(VAR_1, 0, VAR_2);
 int VAR_5;

 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  FUNC_0(VAR_4);
 } else {
  VAR_5 = VAR_0;
 }

 return VAR_5;
}
