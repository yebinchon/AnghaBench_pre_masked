
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uchar ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static uchar FUNC_2(uchar *VAR_4, uchar VAR_5) {
    if (VAR_5 > 0) {





        {
            uchar VAR_6 = VAR_5, *VAR_7 = VAR_3;
            if (VAR_2 & VAR_0) {
                do {
                    uchar VAR_8 = FUNC_0(VAR_7);
                    *VAR_4++ = VAR_8;
                    VAR_7++;
                } while (--VAR_6);
            } else {
                do {
                    *VAR_4++ = *VAR_7++;
                } while (--VAR_6);
            }
            VAR_3 = VAR_7;
        }
    }
    return VAR_5;
}
