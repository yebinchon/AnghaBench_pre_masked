
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static
uint32_t FUNC_0(uint8_t* VAR_0, int VAR_1, int VAR_2)
{

    if(!VAR_2) {

        return (VAR_0[VAR_1] << 24) |
               (VAR_0[VAR_1+1] << 16) |
               (VAR_0[VAR_1+2] << 8) |
                VAR_0[VAR_1+3];
    }

    return VAR_0[VAR_1] |
           (VAR_0[VAR_1+1] << 8) |
           (VAR_0[VAR_1+2] << 16) |
           (VAR_0[VAR_1+3] << 24);
}
