
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_sceneitem_crop {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;



__attribute__((used)) static inline bool FUNC_0(const struct obs_sceneitem_crop *VAR_0)
{
 return VAR_0->left || VAR_0->right || VAR_0->top || VAR_0->bottom;
}
