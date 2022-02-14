
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCITEMIDLIST ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;

__attribute__((used)) static __inline BOOL FUNC_6(LPCITEMIDLIST VAR_4, char* VAR_5)
{
 BOOL VAR_6 = VAR_1;
 DWORD VAR_7 = VAR_0;

 FUNC_3(VAR_5, VAR_2);
 VAR_6 = FUNC_1(VAR_4, VAR_3);
 VAR_7 = FUNC_0();
 if ((VAR_6) && (FUNC_4(VAR_3, VAR_5, VAR_2) == 0)) {
  VAR_7 = FUNC_0();
  VAR_6 = VAR_1;
 }
 FUNC_5(VAR_5);
 FUNC_2(VAR_7);
 return VAR_6;
}
