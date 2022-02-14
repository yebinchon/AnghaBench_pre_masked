
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static matrix_row_t FUNC_4(uint8_t VAR_7)
{
    if (VAR_7 < 8) {
        if (VAR_6) {
            return 0;
        } else {
            uint8_t VAR_8 = 0;
            VAR_6 = FUNC_1(VAR_2, VAR_4); if (VAR_6) goto out;
            VAR_6 = FUNC_3(VAR_0, VAR_4); if (VAR_6) goto out;
            VAR_6 = FUNC_1(VAR_1, VAR_4); if (VAR_6) goto out;
            VAR_8 = FUNC_0(VAR_4); if (VAR_6 < 0) goto out;
            VAR_8 = ~((uint8_t)VAR_6);
            VAR_6 = VAR_3;
        out:
            FUNC_2();
            return VAR_8;
        }
    } else {

        return
            (VAR_5&(1<<0) ? 0 : (1<<0)) |
            (VAR_5&(1<<1) ? 0 : (1<<1)) |
            (VAR_5&(1<<4) ? 0 : (1<<2)) |
            (VAR_5&(1<<5) ? 0 : (1<<3)) |
            (VAR_5&(1<<6) ? 0 : (1<<4)) |
            (VAR_5&(1<<7) ? 0 : (1<<5)) ;
    }
}
