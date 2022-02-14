
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* right; TYPE_3__* left; } ;
struct TYPE_5__ {TYPE_2__ combine; int path; } ;
struct TYPE_7__ {int type; TYPE_1__ elementdata; } ;
typedef TYPE_3__ region_element ;
typedef int INT ;
typedef int GpRect ;
typedef int DWORD ;






 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline INT FUNC_1(const region_element* VAR_0)
{
    INT VAR_1 = sizeof(DWORD);
    switch(VAR_0->type)
    {
        case 128:
            return VAR_1 + sizeof(GpRect);
        case 129:
        {
            VAR_1 += FUNC_0(VAR_0->elementdata.path, ((void*)0));
            VAR_1 += sizeof(DWORD);
            return VAR_1;
        }
        case 131:
        case 130:
            return VAR_1;
        default:
            VAR_1 += FUNC_1(VAR_0->elementdata.combine.left);
            VAR_1 += FUNC_1(VAR_0->elementdata.combine.right);
            return VAR_1;
    }

    return 0;
}
