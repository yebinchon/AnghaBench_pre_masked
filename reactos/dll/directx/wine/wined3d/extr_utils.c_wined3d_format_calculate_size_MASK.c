
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_format {scalar_t__ id; int* flags; unsigned int byte_count; } ;
typedef unsigned int UINT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct wined3d_format const*,unsigned int,unsigned int,unsigned int,unsigned int*,unsigned int*) ;

UINT FUNC_1(const struct wined3d_format *VAR_3, UINT VAR_4,
        UINT VAR_5, UINT VAR_6, UINT VAR_7)
{
    unsigned int VAR_8, VAR_9;

    if (VAR_3->id == VAR_1)
        return 0;

    if (VAR_3->flags[VAR_2] & VAR_0)
        return VAR_5 * VAR_6 * VAR_7 * VAR_3->byte_count;

    FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8, &VAR_9);

    return VAR_9 * VAR_7;
}
