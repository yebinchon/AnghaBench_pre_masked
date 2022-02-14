
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__ glsl_version; scalar_t__* supported; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ FUNC_0 (int,int) ;
 size_t VAR_16 ;
 scalar_t__ FUNC_1 (struct wined3d_gl_info const*) ;

__attribute__((used)) static unsigned int FUNC_2(const struct wined3d_gl_info *VAR_17)
{
    BOOL VAR_18 = VAR_17->glsl_version >= FUNC_0(1, 50)
            && VAR_17->supported[VAR_16]
            && VAR_17->supported[VAR_5]
            && VAR_17->supported[VAR_7]
            && VAR_17->supported[VAR_14];

    if (VAR_18
            && VAR_17->supported[VAR_0]
            && VAR_17->supported[VAR_1]
            && VAR_17->supported[VAR_2]
            && VAR_17->supported[VAR_3]
            && VAR_17->supported[VAR_4]
            && VAR_17->supported[VAR_6]
            && VAR_17->supported[VAR_8]
            && VAR_17->supported[VAR_9]
            && VAR_17->supported[VAR_11]
            && VAR_17->supported[VAR_12]
            && VAR_17->supported[VAR_13]
            && VAR_17->supported[VAR_15])
        return 5;

    if (VAR_18)
        return 4;



    if (FUNC_1(VAR_17) || VAR_17->supported[VAR_10])
        return 3;

    return 2;
}
