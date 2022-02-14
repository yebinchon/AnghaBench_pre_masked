
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
    if (VAR_1 <= 512)
        return 64;
    else if (VAR_1 <= 1024)
        return 128;
    else if (VAR_1 <= 2048)
        return 384;
    else if (VAR_1 <= 4096)
        return 1024;
    return VAR_0;
}
