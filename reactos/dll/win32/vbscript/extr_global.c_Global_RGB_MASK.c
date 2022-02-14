
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int*) ;

__attribute__((used)) static HRESULT FUNC_8(vbdisp_t *VAR_1, VARIANT *VAR_2, unsigned VAR_3, VARIANT *VAR_4)
{
    HRESULT VAR_5;
    int VAR_6, VAR_7[3];

    FUNC_3("%s %s %s\n", FUNC_5(VAR_2), FUNC_5(VAR_2 + 1), FUNC_5(VAR_2 + 2));

    FUNC_4(VAR_3 == 3);

    for(VAR_6 = 0; VAR_6 < 3; VAR_6++) {
        VAR_5 = FUNC_7(VAR_2 + VAR_6, VAR_7 + VAR_6);
        if(FUNC_0(VAR_5))
            return VAR_5;
        if(VAR_7[VAR_6] > 255)
            VAR_7[VAR_6] = 255;
        if(VAR_7[VAR_6] < 0)
            return FUNC_1(VAR_0);
    }

    return FUNC_6(VAR_4, FUNC_2(VAR_7[0], VAR_7[1], VAR_7[2]));
}
