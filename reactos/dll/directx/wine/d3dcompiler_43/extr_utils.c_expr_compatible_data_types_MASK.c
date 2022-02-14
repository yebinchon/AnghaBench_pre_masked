
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_type {scalar_t__ base_type; int dimx; int dimy; scalar_t__ type; } ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hlsl_type*) ;

__attribute__((used)) static BOOL FUNC_1(struct hlsl_type *VAR_5, struct hlsl_type *VAR_6)
{
    if (VAR_5->base_type > VAR_3 || VAR_6->base_type > VAR_3)
        return VAR_0;


    if ((VAR_5->dimx == 1 && VAR_5->dimy == 1) || (VAR_6->dimx == 1 && VAR_6->dimy == 1))
        return VAR_4;

    if (VAR_5->type == VAR_2 && VAR_6->type == VAR_2)
        return VAR_4;

    if (VAR_5->type == VAR_1 || VAR_6->type == VAR_1)
    {


        if (VAR_5->type == VAR_2 || VAR_6->type == VAR_2)
        {
            if (FUNC_0(VAR_5) == FUNC_0(VAR_6))
                return VAR_4;

            return (VAR_5->type == VAR_1 && (VAR_5->dimx == 1 || VAR_5->dimy == 1))
                    || (VAR_6->type == VAR_1 && (VAR_6->dimx == 1 || VAR_6->dimy == 1));
        }


        if ((VAR_5->dimx >= VAR_6->dimx && VAR_5->dimy >= VAR_6->dimy)
                || (VAR_5->dimx <= VAR_6->dimx && VAR_5->dimy <= VAR_6->dimy))
            return VAR_4;
    }

    return VAR_0;
}
