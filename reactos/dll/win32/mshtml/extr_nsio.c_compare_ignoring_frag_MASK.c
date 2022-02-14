
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUri ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static BOOL FUNC_3(IUri *VAR_1, IUri *VAR_2)
{
    IUri *VAR_3, *VAR_4;
    BOOL VAR_5 = VAR_0;

    VAR_3 = FUNC_2(VAR_1);
    if(!VAR_3)
        return VAR_0;

    VAR_4 = FUNC_2(VAR_2);
    if(VAR_4) {
        FUNC_0(VAR_3, VAR_4, &VAR_5);
        FUNC_1(VAR_4);
    }

    FUNC_1(VAR_3);
    return VAR_5;
}
