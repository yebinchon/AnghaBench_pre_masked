
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t *
FUNC_0(uint16_t *VAR_0, const char *VAR_1)
{
    uint8_t *VAR_2 = (uint8_t *)VAR_0;
    char VAR_3;

    do {
 VAR_3 = *VAR_1++;
 *VAR_2++ = VAR_3;
 *VAR_2++ = 0;
    } while (VAR_3);

    return (uint16_t *)VAR_2;
}
