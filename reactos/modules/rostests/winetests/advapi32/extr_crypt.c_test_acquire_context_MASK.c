
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HCRYPTPROV ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *,char*,int,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int * VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;

__attribute__((used)) static void FUNC_5(void)
{
 BOOL VAR_14;
 HCRYPTPROV VAR_15;
 DWORD VAR_16;





 VAR_14 = FUNC_3(&VAR_15, ((void*)0), ((void*)0), 0, 0);
 FUNC_2(!VAR_14 && FUNC_0()==VAR_5, "%d\n", FUNC_0());

 VAR_14 = FUNC_3(&VAR_15, ((void*)0), ((void*)0), 1000, 0);
 FUNC_2(!VAR_14 && FUNC_0()==VAR_5, "%d\n", FUNC_0());

 VAR_14 = FUNC_3(&VAR_15, ((void*)0), ((void*)0), VAR_4, 0);
 FUNC_2(!VAR_14 && FUNC_0()==VAR_8, "%d\n", FUNC_0());

 VAR_14 = FUNC_3(&VAR_15, VAR_11, VAR_12, VAR_10, 0);
 FUNC_2(!VAR_14 && FUNC_0()==VAR_7, "%d\n", FUNC_0());

 VAR_14 = FUNC_3(&VAR_15, VAR_11, VAR_13, VAR_4, 0);
 FUNC_2(!VAR_14 && FUNC_0()==VAR_9, "%d\n", FUNC_0());
 VAR_15 = 0;
 FUNC_1(0xdeadbeef);
 VAR_14 = FUNC_3(&VAR_15, VAR_11, VAR_13, VAR_10, 0);
 VAR_16 = FUNC_0();
 FUNC_2(VAR_14 && (VAR_16 == VAR_0 ||
        VAR_16 == VAR_3 ||
        VAR_16 == VAR_2 ||
        VAR_16 == VAR_6 ||
        VAR_16 == VAR_1), "%d/%d\n", VAR_14, VAR_16);

 if (VAR_15)
  FUNC_4(VAR_15, 0);


 VAR_15 = 0;
 FUNC_1(0xdeadbeef);
 VAR_14 = FUNC_3(&VAR_15, VAR_11, "", VAR_10, 0);
 VAR_16 = FUNC_0();
 FUNC_2(VAR_14 && (VAR_16 == VAR_0 ||
        VAR_16 == VAR_3 ||
        VAR_16 == VAR_2 ||
        VAR_16 == VAR_6 ||
        VAR_16 == VAR_1), "%d/%d\n", VAR_14, FUNC_0());

 if (VAR_15)
  FUNC_4(VAR_15, 0);
}
