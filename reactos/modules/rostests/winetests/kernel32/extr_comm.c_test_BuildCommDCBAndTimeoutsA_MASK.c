
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST ;
typedef int DCB ;
typedef int COMMTIMEOUTS ;
typedef int BOOL ;


 int FUNC_0 (char const*,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int const*,int,int *,int const*) ;
 int FUNC_3 (char*,int const*,int,int ) ;
 int FUNC_4 (char*,int const*,int,int *,int const*) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0, const TEST *VAR_1, int VAR_2, const DCB *VAR_3, const COMMTIMEOUTS *VAR_4)
{
 BOOL VAR_5;
 DCB VAR_6;
 COMMTIMEOUTS VAR_7;


 FUNC_5(&VAR_6, VAR_2, sizeof(DCB));
 FUNC_5(&VAR_7, VAR_2, sizeof(COMMTIMEOUTS));
 FUNC_1(0xdeadbeef);

 VAR_5 = FUNC_0(VAR_0, &VAR_6, &VAR_7);


 FUNC_3("BuildCommDCBAndTimeoutsA", VAR_1, VAR_2, VAR_5);
 FUNC_2("BuildCommDCBAndTimeoutsA", VAR_1, VAR_2, &VAR_6, VAR_3);
 FUNC_4("BuildCommDCBAndTimeoutsA", VAR_1, VAR_2, &VAR_7, VAR_4);
}
