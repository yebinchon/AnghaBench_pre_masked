
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u8 ;
typedef int BOOLEAN ;



__attribute__((used)) static __inline BOOLEAN FUNC_0 (__u8 * VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
        if (VAR_0[VAR_1]) {
            break;
        }
    }

    return (VAR_1 >= 16);
}
