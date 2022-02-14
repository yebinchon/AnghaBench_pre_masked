
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(const char* VAR_2)
{
    int VAR_3 = FUNC_0(VAR_2);
    int VAR_4;

    VAR_4 = FUNC_3(VAR_3, "Success", 8);
    FUNC_1( VAR_4 == -1 && VAR_1 == VAR_0,
       "Wrong write result in child process on %d (%s)\n", VAR_3, FUNC_2(VAR_1));
}
