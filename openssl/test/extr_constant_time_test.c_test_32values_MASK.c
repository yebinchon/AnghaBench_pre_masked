
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{
    uint32_t VAR_2 = VAR_0[VAR_1];
    size_t VAR_3;
    int VAR_4 = 1;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        uint32_t VAR_5 = VAR_0[VAR_3];

        if (!FUNC_1(VAR_2, VAR_5))
            VAR_4 = 0;
    }
    return VAR_4;
}
