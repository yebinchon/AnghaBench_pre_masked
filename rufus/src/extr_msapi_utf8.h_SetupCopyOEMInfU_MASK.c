
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PTSTR ;
typedef int PDWORD ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static __inline BOOL FUNC_7(const char* VAR_5, const char* VAR_6, DWORD VAR_7,
           DWORD VAR_8, char* VAR_9, DWORD VAR_10,
           PDWORD VAR_11, PTSTR VAR_12)
{
 BOOL VAR_13 = VAR_1;
 DWORD VAR_14 = VAR_0;
 FUNC_5(VAR_5);
 FUNC_5(VAR_6);

 FUNC_3(VAR_9, VAR_10);


 if (VAR_12 != ((void*)0)) goto out;

 VAR_13 = FUNC_2(VAR_4, VAR_3, VAR_7, VAR_8,
  VAR_2, VAR_10, VAR_11, ((void*)0));
 VAR_14 = FUNC_0();
 if ((VAR_13 != VAR_1) && ((VAR_13 = FUNC_4(VAR_2, VAR_9, VAR_10)) == 0)) {
  VAR_14 = FUNC_0();
 }
out:
 FUNC_6(VAR_5);
 FUNC_6(VAR_6);
 FUNC_6(VAR_9);
 FUNC_1(VAR_14);
 return VAR_13;
}
