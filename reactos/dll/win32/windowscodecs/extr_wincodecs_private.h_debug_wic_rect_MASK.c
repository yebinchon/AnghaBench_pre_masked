
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Height; int Width; int Y; int X; } ;
typedef TYPE_1__ WICRect ;


 char const* FUNC_0 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static inline const char *FUNC_1(const WICRect *VAR_0)
{
    if (!VAR_0) return "(null)";
    return FUNC_0("(%u,%u)-(%u,%u)", VAR_0->X, VAR_0->Y, VAR_0->Width, VAR_0->Height);
}
