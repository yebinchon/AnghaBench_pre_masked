
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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static matrix_row_t FUNC_5(uint8_t VAR_8)
{
    if (VAR_8 < 6) {
        if (VAR_7) {
            return 0;
        } else {
            uint8_t VAR_9 = 0;
            VAR_7 = FUNC_1(VAR_3, VAR_0); if (VAR_7) goto out;
            VAR_7 = FUNC_3(VAR_1, VAR_0); if (VAR_7) goto out;
            VAR_7 = FUNC_1(VAR_2, VAR_0); if (VAR_7) goto out;
            VAR_7 = FUNC_0(VAR_0); if (VAR_7 < 0) goto out;
            VAR_9 = (~((uint8_t)VAR_7) >> 2) & 0x01 ;
            VAR_7 = VAR_4;
        out:
            FUNC_2();




            return VAR_9;
        }
    } else {

        return ~((((VAR_5 & VAR_6) >> 5)) & 0x1);
    }
}
