
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long long*,unsigned long long*) ;
 int FUNC_2 (int,unsigned long long,unsigned long long*) ;
 int FUNC_3 (int,unsigned long long*,unsigned long long*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(unsigned long long VAR_4, int VAR_5)
{
 unsigned long long VAR_6, VAR_7[VAR_3];


 FUNC_0(!FUNC_2(VAR_5, VAR_4, VAR_7));
 VAR_7[0] = 1234;

 VAR_6 = VAR_4 + 1;
 FUNC_0(!FUNC_3(VAR_5, &VAR_6, VAR_7, VAR_0));
 FUNC_0(!FUNC_2(VAR_5, VAR_6, VAR_7));


 FUNC_0(FUNC_1(VAR_5, &VAR_4, VAR_7) == -1 &&
        VAR_2 == VAR_1);
}
