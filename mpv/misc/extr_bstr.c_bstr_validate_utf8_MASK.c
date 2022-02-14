
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; scalar_t__* start; } ;


 scalar_t__ FUNC_0 (struct bstr,struct bstr*) ;
 int FUNC_1 (unsigned int) ;

int FUNC_2(struct bstr VAR_0)
{
    while (VAR_0.len) {
        if (FUNC_0(VAR_0, &VAR_0) < 0) {

            unsigned int VAR_1 = (unsigned char)VAR_0.start[0];
            int VAR_2 = FUNC_1(VAR_1);
            if (VAR_2 > 1 && VAR_0.len < 6) {

                for (int VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
                    if (VAR_3 >= VAR_0.len) {

                        return -(VAR_2 - VAR_0.len);
                    }
                    int VAR_4 = (unsigned char)VAR_0.start[VAR_3];
                    if ((VAR_4 & 0xC0) != 0x80)
                        break;
                }
            }
            return -8;
        }
    }
    return 0;
}
