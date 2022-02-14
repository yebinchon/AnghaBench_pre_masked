
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_fixup_desc {scalar_t__ w_sign_fixup; scalar_t__ z_sign_fixup; scalar_t__ y_sign_fixup; scalar_t__ x_sign_fixup; } ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(struct color_fixup_desc VAR_0)
{
    return VAR_0.x_sign_fixup || VAR_0.y_sign_fixup || VAR_0.z_sign_fixup || VAR_0.w_sign_fixup;
}
