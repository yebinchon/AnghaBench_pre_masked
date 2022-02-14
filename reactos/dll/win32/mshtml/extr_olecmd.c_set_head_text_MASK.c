
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIPrintSettings ;
typedef int LPCWSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static nsresult FUNC_6(nsIPrintSettings *VAR_1, LPCWSTR VAR_2, BOOL VAR_3, int VAR_4)
{
    if(VAR_3) {
        switch(VAR_4) {
        case 0:
            return FUNC_4(VAR_1, VAR_2);
        case 1:
            return FUNC_5(VAR_1, VAR_2);
        case 2:
            return FUNC_3(VAR_1, VAR_2);
        }
    }else {
        switch(VAR_4) {
        case 0:
            return FUNC_1(VAR_1, VAR_2);
        case 1:
            return FUNC_2(VAR_1, VAR_2);
        case 2:
            return FUNC_0(VAR_1, VAR_2);
        }
    }

    return VAR_0;
}
