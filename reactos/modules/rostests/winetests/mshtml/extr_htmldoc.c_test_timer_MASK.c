
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(DWORD VAR_8)
{
    BOOL *VAR_9 = &VAR_5;
    MSG VAR_10;

    if(VAR_8 & VAR_1) {
        FUNC_3(VAR_4);
        FUNC_3(VAR_3);
        VAR_9 = &VAR_6;
    }
    if(VAR_8 & VAR_0)
        FUNC_3(VAR_2);

    while(!*VAR_9 && FUNC_2(&VAR_10, VAR_7, 0, 0)) {
        FUNC_4(&VAR_10);
        FUNC_1(&VAR_10);
    }

    if(VAR_8 & VAR_1) {
        FUNC_0(VAR_4);
        FUNC_0(VAR_3);
    }
    if(VAR_8 & VAR_0)
        FUNC_0(VAR_2);
}
