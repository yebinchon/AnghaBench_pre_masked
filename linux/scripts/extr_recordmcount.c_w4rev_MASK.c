
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(uint32_t const VAR_0)
{
 return ((0xff & (VAR_0 >> (0 * 8))) << (3 * 8))
        | ((0xff & (VAR_0 >> (1 * 8))) << (2 * 8))
        | ((0xff & (VAR_0 >> (2 * 8))) << (1 * 8))
        | ((0xff & (VAR_0 >> (3 * 8))) << (0 * 8));
}
