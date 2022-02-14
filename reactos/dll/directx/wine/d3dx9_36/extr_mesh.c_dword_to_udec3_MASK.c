
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udec3 {int x; int y; int z; int w; } ;
typedef int DWORD ;



__attribute__((used)) static struct udec3 FUNC_0(DWORD VAR_0)
{
    struct udec3 VAR_1;

    VAR_1.x = VAR_0 & 0x3ff;
    VAR_1.y = (VAR_0 & 0xffc00) >> 10;
    VAR_1.z = (VAR_0 & 0x3ff00000) >> 20;
    VAR_1.w = (VAR_0 & 0xc0000000) >> 30;

    return VAR_1;
}
