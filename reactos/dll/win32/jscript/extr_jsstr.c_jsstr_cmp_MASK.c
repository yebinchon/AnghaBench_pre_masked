
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsstr_t ;
typedef int WCHAR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int ) ;
 unsigned int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(jsstr_t *VAR_0, jsstr_t *VAR_1)
{
    unsigned VAR_2 = FUNC_2(VAR_0);
    unsigned VAR_3 = FUNC_2(VAR_1);
    const WCHAR *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_3(VAR_1);
    if(VAR_4) {
        VAR_5 = FUNC_1(VAR_0, VAR_4, FUNC_4(VAR_2, VAR_3));
        return VAR_5 || VAR_2 == VAR_3 ? VAR_5 : -1;
    }

    VAR_4 = FUNC_3(VAR_0);
    if(VAR_4) {
        VAR_5 = FUNC_1(VAR_1, VAR_4, FUNC_4(VAR_2, VAR_3));
        return VAR_5 || VAR_2 == VAR_3 ? -VAR_5 : 1;
    }

    return FUNC_5(FUNC_0(VAR_0), FUNC_0(VAR_1));
}
