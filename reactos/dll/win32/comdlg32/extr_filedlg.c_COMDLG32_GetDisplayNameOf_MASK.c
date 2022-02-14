
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STRRET ;
typedef int LPWSTR ;
typedef int LPSHELLFOLDER ;
typedef int LPCITEMIDLIST ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_6(LPCITEMIDLIST VAR_3, LPWSTR VAR_4) {
    LPSHELLFOLDER VAR_5;
    STRRET VAR_6;

    if (FUNC_0(FUNC_3(&VAR_5)))
        return VAR_0;

    if (FUNC_0(FUNC_1(VAR_5, VAR_3, VAR_2, &VAR_6))) {
        FUNC_2(VAR_5);
        return VAR_0;
    }

    FUNC_2(VAR_5);
    return FUNC_4(FUNC_5(&VAR_6, VAR_3, VAR_4, VAR_1));
}
