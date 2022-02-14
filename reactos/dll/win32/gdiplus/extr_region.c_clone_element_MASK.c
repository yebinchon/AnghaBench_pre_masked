
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* right; TYPE_3__* left; } ;
struct TYPE_9__ {TYPE_1__ combine; int path; int rect; } ;
struct TYPE_10__ {int type; TYPE_2__ elementdata; } ;
typedef TYPE_3__ region_element ;
typedef int GpStatus ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;

__attribute__((used)) static inline GpStatus FUNC_3(const region_element* VAR_2,
        region_element** VAR_3)
{
    GpStatus VAR_4;


    if(!*VAR_3){
        *VAR_3 = FUNC_2(sizeof(region_element));
        if (!*VAR_3)
            return VAR_1;
    }

    (*VAR_3)->type = VAR_2->type;

    switch (VAR_2->type)
    {
        case 128:
            (*VAR_3)->elementdata.rect = VAR_2->elementdata.rect;
            return VAR_0;
        case 131:
        case 130:
            return VAR_0;
        case 129:
            VAR_4 = FUNC_0(VAR_2->elementdata.path, &(*VAR_3)->elementdata.path);
            if (VAR_4 == VAR_0) return VAR_0;
            break;
        default:
            (*VAR_3)->elementdata.combine.left = ((void*)0);
            (*VAR_3)->elementdata.combine.right = ((void*)0);

            VAR_4 = FUNC_3(VAR_2->elementdata.combine.left,
                    &(*VAR_3)->elementdata.combine.left);
            if (VAR_4 == VAR_0)
            {
                VAR_4 = FUNC_3(VAR_2->elementdata.combine.right,
                        &(*VAR_3)->elementdata.combine.right);
                if (VAR_4 == VAR_0) return VAR_0;
            }
            break;
    }

    FUNC_1(*VAR_3);
    *VAR_3 = ((void*)0);
    return VAR_4;
}
