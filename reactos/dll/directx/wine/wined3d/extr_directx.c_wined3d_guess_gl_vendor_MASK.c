
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
typedef enum wined3d_gl_vendor { ____Placeholder_wined3d_gl_vendor } wined3d_gl_vendor ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static enum wined3d_gl_vendor FUNC_3(const struct wined3d_gl_info *VAR_7,
        const char *VAR_8, const char *VAR_9, const char *VAR_10)
{
    if (VAR_7->supported[VAR_0] && VAR_7->supported[VAR_1])
        return VAR_2;

    if (FUNC_2(VAR_8, "NVIDIA"))
        return VAR_5;

    if (FUNC_2(VAR_8, "ATI"))
        return VAR_3;

    if (FUNC_2(VAR_8, "Mesa")
            || FUNC_2(VAR_8, "Brian Paul")
            || FUNC_2(VAR_8, "X.Org")
            || FUNC_2(VAR_8, "Advanced Micro Devices, Inc.")
            || FUNC_2(VAR_8, "DRI R300 Project")
            || FUNC_2(VAR_8, "Tungsten Graphics, Inc")
            || FUNC_2(VAR_8, "VMware, Inc.")
            || FUNC_2(VAR_8, "Intel")
            || FUNC_2(VAR_9, "Mesa")
            || FUNC_2(VAR_9, "Gallium")
            || FUNC_2(VAR_9, "Intel")
            || FUNC_2(VAR_10, "Mesa"))
        return VAR_4;

    FUNC_0("Received unrecognized GL_VENDOR %s. Returning GL_VENDOR_UNKNOWN.\n",
            FUNC_1(VAR_8));

    return VAR_6;
}
