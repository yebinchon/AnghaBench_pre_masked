
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct MemBitReader {int at_eof; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct MemBitReader*,int) ;
 scalar_t__ FUNC_5 (struct MemBitReader*) ;

__attribute__((used)) static bool FUNC_6(struct MemBitReader *VAR_2, uint8_t VAR_3, bool VAR_4, uint32_t VAR_5, uint8_t *VAR_6, uint32_t *VAR_7)
{
    if (FUNC_4(VAR_2, 1)) {
        *VAR_6 = FUNC_2((uint8_t)FUNC_4(VAR_2, 3));
        *VAR_7 = 0;
    }
    else if (FUNC_4(VAR_2, 1)) {
        if (FUNC_4(VAR_2, 1)) {
            if (FUNC_4(VAR_2, 1))
                *VAR_6 = VAR_0;
            else
                *VAR_6 = FUNC_0((uint8_t)FUNC_4(VAR_2, 3));
            *VAR_7 = FUNC_5(VAR_2);
        }
        else {
            *VAR_6 = FUNC_3((uint8_t)FUNC_4(VAR_2, 3));
            *VAR_7 = 0;
        }
    }
    else {
        *VAR_6 = VAR_1;
        if (!VAR_4)
            *VAR_7 = FUNC_5(VAR_2);
        else
            *VAR_7 = FUNC_4(VAR_2, 8);
        if (VAR_5 != (uint32_t)-1 && FUNC_1(VAR_3)) {
            if (*VAR_7 >= 256)
                *VAR_7 -= 256;
            else {
                if (*VAR_7 >= 136)
                    *VAR_7 -= 264;
                else if (*VAR_7 >= 16)
                    *VAR_7 -= 8;
                else if (*VAR_7 >= 8)
                    *VAR_7 -= 16;
                *VAR_7 += VAR_5;
            }
        }
    }
    return !VAR_2->at_eof;
}
