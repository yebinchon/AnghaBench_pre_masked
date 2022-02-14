
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static matrix_row_t FUNC_5(uint8_t VAR_11)
{
    if (VAR_11 < 7) {
        if (VAR_10) {
            return 0;
        } else {
            uint8_t VAR_12 = 0;
            VAR_10 = FUNC_1(VAR_3, VAR_0); if (VAR_10) goto out;
            VAR_10 = FUNC_3(VAR_1, VAR_0); if (VAR_10) goto out;
            VAR_10 = FUNC_1(VAR_2, VAR_0); if (VAR_10) goto out;
            VAR_10 = FUNC_0(VAR_0); if (VAR_10 < 0) goto out;
            VAR_12 = ~((uint8_t)VAR_10);
            VAR_10 = VAR_4;
        out:
            FUNC_2();




            return VAR_12;
        }
    } else {







        return ~(
           (((VAR_5 & VAR_9) >> 1)
          | ((VAR_5 & (VAR_6 | VAR_7 | VAR_8)) >> 3))
        & 0xF);
    }
}
