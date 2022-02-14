
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t matrix_row_t ;


 size_t* VAR_0 ;

inline
bool FUNC_0(uint8_t VAR_1, uint8_t VAR_2)

{
    return (VAR_0[VAR_1] & ((matrix_row_t)1<<VAR_2));
}
