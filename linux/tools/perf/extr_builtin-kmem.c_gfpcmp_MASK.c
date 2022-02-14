
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfp_flag {int flags; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct gfp_flag *VAR_2 = VAR_0;
 const struct gfp_flag *VAR_3 = VAR_1;

 return VAR_2->flags - VAR_3->flags;
}
