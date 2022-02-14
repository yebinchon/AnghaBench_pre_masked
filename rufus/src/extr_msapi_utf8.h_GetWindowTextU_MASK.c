
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static __inline int FUNC_6(HWND VAR_2, char* VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 DWORD VAR_6 = VAR_0;

 if ((VAR_3 != ((void*)0)) && (VAR_4 > 0))
  VAR_3[0] = 0;

 FUNC_3(VAR_3, VAR_4);
 VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_4);
 VAR_6 = FUNC_0();

 if ( (VAR_5 != 0) && ((VAR_5 = FUNC_4(VAR_1, VAR_3, VAR_4)) == 0) ) {
  VAR_6 = FUNC_0();
 }
 FUNC_5(VAR_3);
 FUNC_2(VAR_6);
 return VAR_5;
}
