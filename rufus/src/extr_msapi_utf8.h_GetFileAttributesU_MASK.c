
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char const*) ;
 int* VAR_1 ;

__attribute__((used)) static __inline DWORD FUNC_6(const char* VAR_2)
{
 DWORD VAR_3 = 0xFFFFFFFF, VAR_4 = VAR_0;
 FUNC_3(VAR_2);

 if ((VAR_1[0] == L'"') && (VAR_1[FUNC_4(VAR_1) - 1] == L'"')) {
  VAR_1[FUNC_4(VAR_1) - 1] = 0;
  VAR_3 = FUNC_0(&VAR_1[1]);
 } else {
  VAR_3 = FUNC_0(VAR_1);
 }
 VAR_4 = FUNC_1();
 FUNC_5(VAR_2);
 FUNC_2(VAR_4);
 return VAR_3;
}
