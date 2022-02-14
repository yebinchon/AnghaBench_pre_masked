
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char const*) ;
 int* VAR_2 ;

__attribute__((used)) static __inline BOOL FUNC_6(const char* VAR_3, DWORD VAR_4)
{
 BOOL VAR_5 = VAR_1, VAR_6 = VAR_0;
 FUNC_3(VAR_3);

 if ((VAR_2[0] == L'"') && (VAR_2[FUNC_4(VAR_2) - 1] == L'"')) {
  VAR_2[FUNC_4(VAR_2) - 1] = 0;
  VAR_5 = FUNC_1(&VAR_2[1], VAR_4);
 } else {
  VAR_5 = FUNC_1(VAR_2, VAR_4);
 }
 VAR_6 = FUNC_0();
 FUNC_5(VAR_3);
 FUNC_2(VAR_6);
 return VAR_5;
}
