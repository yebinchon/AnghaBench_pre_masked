
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPSTR ;
typedef int LPDWORD ;
typedef int * LPCSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __inline BOOL FUNC_7(LPCSTR VAR_5, LPSTR VAR_6,
 DWORD VAR_7, LPDWORD VAR_8, LPDWORD VAR_9,
 LPDWORD VAR_10, LPSTR VAR_11, DWORD VAR_12)
{
 BOOL VAR_13 = VAR_1;
 DWORD VAR_14 = VAR_0;
 FUNC_5(VAR_5);

 FUNC_3(VAR_6, VAR_7);

 FUNC_3(VAR_11, VAR_12);

 VAR_13 = FUNC_1(VAR_3, VAR_4, VAR_7,
  VAR_8, VAR_9, VAR_10,
  VAR_2, VAR_12);
 VAR_14 = FUNC_0();
 if (VAR_13) {
  if ( ((VAR_6 != ((void*)0)) && (FUNC_4(VAR_4,
   VAR_6, VAR_7) == 0))
    || ((VAR_11 != ((void*)0)) && (FUNC_4(VAR_2,
   VAR_11, VAR_12) == 0)) ) {
   VAR_14 = FUNC_0();
   VAR_13 = VAR_1;
  }
 }
 FUNC_6(VAR_6);
 FUNC_6(VAR_11);
 FUNC_6(VAR_5);
 FUNC_2(VAR_14);
 return VAR_13;
}
