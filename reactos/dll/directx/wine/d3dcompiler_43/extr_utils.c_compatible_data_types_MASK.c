
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ array; } ;
struct hlsl_type {scalar_t__ type; int dimx; int dimy; TYPE_2__ e; } ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,struct hlsl_type*) ;
 scalar_t__ FUNC_1 (struct hlsl_type*) ;
 int FUNC_2 (struct hlsl_type*) ;

BOOL FUNC_3(struct hlsl_type *VAR_7, struct hlsl_type *VAR_8)
{
   if (!FUNC_2(VAR_7) || !FUNC_2(VAR_8))
        return VAR_0;

    if (VAR_7->type <= VAR_2)
    {

        if (VAR_7->dimx == 1 && VAR_7->dimy == 1)
            return VAR_6;

        if (VAR_7->type == VAR_5 && VAR_8->type == VAR_5)
            return VAR_7->dimx >= VAR_8->dimx;
    }


    if (VAR_8->type <= VAR_2 && VAR_8->dimx == 1 && VAR_8->dimy == 1)
        return VAR_6;

    if (VAR_7->type == VAR_1)
    {
        if (FUNC_0(VAR_7->e.array.type, VAR_8))

            return VAR_6;

        if (VAR_8->type == VAR_1 || VAR_8->type == VAR_4)
            return FUNC_1(VAR_7) >= FUNC_1(VAR_8);
        else
            return FUNC_1(VAR_7) == FUNC_1(VAR_8);
    }

    if (VAR_7->type == VAR_4)
        return FUNC_1(VAR_7) >= FUNC_1(VAR_8);

    if (VAR_8->type == VAR_1 || VAR_8->type == VAR_4)
        return FUNC_1(VAR_7) == FUNC_1(VAR_8);

    if (VAR_7->type == VAR_3 || VAR_8->type == VAR_3)
    {
        if (VAR_7->type == VAR_3 && VAR_8->type == VAR_3 && VAR_7->dimx >= VAR_8->dimx && VAR_7->dimy >= VAR_8->dimy)
            return VAR_6;


        if ((VAR_7->type == VAR_5 || VAR_8->type == VAR_5)
                && FUNC_1(VAR_7) == FUNC_1(VAR_8))
            return VAR_6;
        return VAR_0;
    }

    if (FUNC_1(VAR_7) >= FUNC_1(VAR_8))
        return VAR_6;
    return VAR_0;
}
