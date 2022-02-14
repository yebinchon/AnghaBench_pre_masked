
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int DOWNGRADE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int,int *) ;

__attribute__((used)) static void FUNC_2(SSL *VAR_5, int VAR_6, DOWNGRADE *VAR_7)
{
    if (VAR_6 == VAR_3
            && FUNC_1(VAR_5, VAR_4, ((void*)0))) {
        *VAR_7 = VAR_2;
    } else if (!FUNC_0(VAR_5)
            && VAR_6 < VAR_3







            && FUNC_1(VAR_5, VAR_3, ((void*)0))) {
        *VAR_7 = VAR_1;
    } else {
        *VAR_7 = VAR_0;
    }
}
