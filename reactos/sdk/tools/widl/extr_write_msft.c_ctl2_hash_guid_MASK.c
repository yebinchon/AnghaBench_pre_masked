
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ REFGUID ;



__attribute__((used)) static int FUNC_0(
 REFGUID VAR_0)
{
    int VAR_1;
    int VAR_2;

    VAR_1 = 0;
    for (VAR_2 = 0; VAR_2 < 8; VAR_2 ++) {
 VAR_1 ^= ((const short *)VAR_0)[VAR_2];
    }

    return VAR_1 & 0x1f;
}
