
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_6(vbdisp_t *VAR_2, VARIANT *VAR_3, unsigned VAR_4, VARIANT *VAR_5)
{
    FUNC_1("(%s)\n", FUNC_4(VAR_3));

    FUNC_3(VAR_4 == 1);

    if(FUNC_2(VAR_3) & ~VAR_1) {
        FUNC_0("not supported %s\n", FUNC_4(VAR_3));
        return VAR_0;
    }

    return FUNC_5(VAR_5, FUNC_2(VAR_3));
}
