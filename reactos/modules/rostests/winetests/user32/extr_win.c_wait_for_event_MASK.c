
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int *,int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_4(HANDLE VAR_5, int VAR_6)
{
    DWORD VAR_7 = FUNC_1() + VAR_6;
    MSG VAR_8;

    do {
        if(FUNC_2(1, &VAR_5, VAR_0, VAR_6, VAR_2) == VAR_4)
            return VAR_3;
        while(FUNC_3(&VAR_8, 0, 0, 0, VAR_1))
            FUNC_0(&VAR_8);
        VAR_6 = VAR_7 - FUNC_1();
    }while(VAR_6 > 0);

    return VAR_0;
}
