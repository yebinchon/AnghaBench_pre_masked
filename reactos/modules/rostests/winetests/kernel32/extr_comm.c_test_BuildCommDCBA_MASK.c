
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST ;
typedef int DCB ;
typedef int BOOL ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int const*,int,int *,int const*) ;
 int FUNC_3 (char*,int const*,int,int ) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const TEST *VAR_1, int VAR_2, const DCB *VAR_3)
{
 BOOL VAR_4;
 DCB VAR_5;


 FUNC_4(&VAR_5, VAR_2, sizeof(DCB));
 FUNC_1(0xdeadbeef);

 VAR_4 = FUNC_0(VAR_0, &VAR_5);


 FUNC_3("BuildCommDCBA", VAR_1, VAR_2, VAR_4);
 FUNC_2("BuildCommDCBA", VAR_1, VAR_2, &VAR_5, VAR_3);
}
