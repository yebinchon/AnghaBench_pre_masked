
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bstr ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,unsigned char) ;

__attribute__((used)) static int FUNC_3(bstr VAR_0, unsigned char VAR_1, int VAR_2, bstr *VAR_3)
{
    if (VAR_2 < 1)
        return 0;

    int VAR_4 = 0;
    while (1) {
        int VAR_5 = FUNC_2(VAR_0, VAR_1);
        if (VAR_5 >= 0 && VAR_2 - VAR_4 > 1) {
            VAR_3[VAR_4++] = FUNC_1(VAR_0, 0, VAR_5);
            VAR_0 = FUNC_0(VAR_0, VAR_5 + 1);
        } else {
            VAR_3[VAR_4++] = VAR_0;
            break;
        }
    }
    return VAR_4;
}
