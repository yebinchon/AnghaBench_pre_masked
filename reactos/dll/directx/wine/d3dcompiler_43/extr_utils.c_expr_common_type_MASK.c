
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct source_location {int col; int line; int file; } ;
struct hlsl_type {scalar_t__ type; scalar_t__ base_type; int dimx; int dimy; } ;
typedef enum hlsl_type_class { ____Placeholder_hlsl_type_class } hlsl_type_class ;
typedef enum hlsl_base_type { ____Placeholder_hlsl_base_type } hlsl_base_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hlsl_type*,struct hlsl_type*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct hlsl_type*,struct hlsl_type*) ;
 int FUNC_3 (int ,int ,int ,int ,char*) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 struct hlsl_type* FUNC_6 (int *,int,int,unsigned int,unsigned int) ;

__attribute__((used)) static struct hlsl_type *FUNC_7(struct hlsl_type *VAR_4, struct hlsl_type *VAR_5,
        struct source_location *VAR_6)
{
    enum hlsl_type_class VAR_7;
    enum hlsl_base_type VAR_8;
    unsigned int VAR_9, VAR_10;

    if (VAR_4->type > VAR_0 || VAR_5->type > VAR_0)
    {
        FUNC_3(VAR_6->file, VAR_6->line, VAR_6->col, VAR_3,
                "non scalar/vector/matrix data type in expression");
        return ((void*)0);
    }

    if (FUNC_0(VAR_4, VAR_5))
        return VAR_4;

    if (!FUNC_2(VAR_4, VAR_5))
    {
        FUNC_3(VAR_6->file, VAR_6->line, VAR_6->col, VAR_3,
                "expression data types are incompatible");
        return ((void*)0);
    }

    if (VAR_4->base_type == VAR_5->base_type)
        VAR_8 = VAR_4->base_type;
    else
        VAR_8 = FUNC_1(VAR_4->base_type, VAR_5->base_type);

    if (VAR_4->dimx == 1 && VAR_4->dimy == 1)
    {
        VAR_7 = VAR_5->type;
        VAR_9 = VAR_5->dimx;
        VAR_10 = VAR_5->dimy;
    }
    else if (VAR_5->dimx == 1 && VAR_5->dimy == 1)
    {
        VAR_7 = VAR_4->type;
        VAR_9 = VAR_4->dimx;
        VAR_10 = VAR_4->dimy;
    }
    else if (VAR_4->type == VAR_1 && VAR_5->type == VAR_1)
    {
        VAR_7 = VAR_1;
        VAR_9 = FUNC_5(VAR_4->dimx, VAR_5->dimx);
        VAR_10 = FUNC_5(VAR_4->dimy, VAR_5->dimy);
    }
    else
    {

        unsigned int VAR_11, VAR_12;

        VAR_11 = FUNC_4(VAR_4->dimx, VAR_4->dimy);
        VAR_12 = FUNC_4(VAR_5->dimx, VAR_5->dimy);
        if (VAR_4->dimx * VAR_4->dimy == VAR_5->dimx * VAR_5->dimy)
        {
            VAR_7 = VAR_2;
            VAR_9 = FUNC_4(VAR_4->dimx, VAR_5->dimx);
            VAR_10 = 1;
        }
        else if (VAR_11 <= VAR_12)
        {
            VAR_7 = VAR_4->type;
            if (VAR_7 == VAR_2)
            {
                VAR_9 = VAR_11;
                VAR_10 = 1;
            }
            else
            {
                VAR_9 = VAR_4->dimx;
                VAR_10 = VAR_4->dimy;
            }
        }
        else
        {
            VAR_7 = VAR_5->type;
            if (VAR_7 == VAR_2)
            {
                VAR_9 = VAR_12;
                VAR_10 = 1;
            }
            else
            {
                VAR_9 = VAR_5->dimx;
                VAR_10 = VAR_5->dimy;
            }
        }
    }

    return FUNC_6(((void*)0), VAR_7, VAR_8, VAR_9, VAR_10);
}
