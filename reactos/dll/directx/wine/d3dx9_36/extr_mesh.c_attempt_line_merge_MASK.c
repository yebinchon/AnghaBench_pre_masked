
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct point2d {scalar_t__ corner; int const pos; } ;
struct outline {int count; struct point2d* items; } ;
struct cos_table {int cos_half; } ;
typedef int D3DXVECTOR2 ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int const*,int const*) ;

__attribute__((used)) static BOOL FUNC_2(struct outline *VAR_6,
                               int VAR_7,
                               const D3DXVECTOR2 *VAR_8,
                               BOOL VAR_9,
                               const struct cos_table *VAR_10)
{
    D3DXVECTOR2 VAR_11, VAR_12;
    struct point2d *VAR_13, *VAR_14;
    BOOL VAR_15 = VAR_0;

    VAR_14 = &VAR_6->items[VAR_7];
    VAR_7 = (VAR_7 - 1 + VAR_6->count) % VAR_6->count;
    VAR_13 = &VAR_6->items[VAR_7];

    if (VAR_9)
        VAR_14->corner = VAR_14->corner != VAR_1 ? VAR_3 : VAR_4;

    if (VAR_6->count < 2)
        return VAR_0;


    FUNC_1(&VAR_12, &VAR_13->pos, &VAR_14->pos);
    FUNC_1(&VAR_11, &VAR_14->pos, VAR_8);
    if (FUNC_0(&VAR_12, &VAR_11, VAR_10->cos_half))
    {
        VAR_6->count--;
        if (VAR_14->corner == VAR_2)
            VAR_13->corner = VAR_14->corner;
        if (VAR_13->corner == VAR_2 && VAR_9)
            VAR_13->corner = VAR_3;
        VAR_14 = VAR_13;

        VAR_15 = VAR_5;
        if (VAR_6->count < 2)
            return VAR_15;

        VAR_7 = (VAR_7 - 1 + VAR_6->count) % VAR_6->count;
        VAR_13 = &VAR_6->items[VAR_7];
        FUNC_1(&VAR_12, &VAR_13->pos, &VAR_14->pos);
        FUNC_1(&VAR_11, &VAR_14->pos, VAR_8);
    }
    return VAR_15;
}
