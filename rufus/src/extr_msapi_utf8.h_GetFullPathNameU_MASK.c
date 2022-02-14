
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int **) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline DWORD FUNC_7(const char* VAR_3, DWORD VAR_4, char* VAR_5, char** VAR_6)
{
 DWORD VAR_7 = 0, VAR_8 = VAR_0;
 wchar_t* VAR_9;
 FUNC_5(VAR_3);

 FUNC_3(VAR_5, VAR_4);


 if (VAR_6 != ((void*)0)) goto out;

 VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_1, &VAR_9);
 VAR_8 = FUNC_1();
 if ((VAR_7 != 0) && ((VAR_7 = FUNC_4(VAR_1, VAR_5, VAR_4)) == 0)) {
  VAR_8 = FUNC_1();
 }

out:
 FUNC_6(VAR_5);
 FUNC_6(VAR_3);
 FUNC_2(VAR_8);
 return VAR_7;
}
