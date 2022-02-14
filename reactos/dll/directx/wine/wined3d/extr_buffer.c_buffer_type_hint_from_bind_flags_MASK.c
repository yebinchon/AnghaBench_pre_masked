
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
typedef int GLenum ;


 size_t VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;

__attribute__((used)) static GLenum FUNC_1(const struct wined3d_gl_info *VAR_12,
        unsigned int VAR_13)
{
    if (VAR_13 == VAR_7)
        return VAR_2;

    if (VAR_13 & (VAR_8 | VAR_10)
            && VAR_12->supported[VAR_0])
        return VAR_3;

    if (VAR_13 & VAR_6)
        return VAR_5;

    if (VAR_13 & VAR_9)
        return VAR_4;

    if (VAR_13 & ~(VAR_11 | VAR_7))
        FUNC_0("Unhandled bind flags %#x.\n", VAR_13);

    return VAR_1;
}
