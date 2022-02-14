
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xarray {int xa_flags; } ;
struct xa_limit {scalar_t__ min; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct xarray*,scalar_t__*,void*,struct xa_limit,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

int FUNC_2(struct xarray *VAR_1, u32 *VAR_2, void *VAR_3,
  struct xa_limit VAR_4, u32 *VAR_5, gfp_t VAR_6)
{
 u32 VAR_7 = VAR_4.min;
 int VAR_8;

 VAR_4.min = FUNC_1(VAR_7, *VAR_5);
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 if ((VAR_1->xa_flags & VAR_0) && VAR_8 == 0) {
  VAR_1->xa_flags &= ~VAR_0;
  VAR_8 = 1;
 }

 if (VAR_8 < 0 && VAR_4.min > VAR_7) {
  VAR_4.min = VAR_7;
  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
  if (VAR_8 == 0)
   VAR_8 = 1;
 }

 if (VAR_8 >= 0) {
  *VAR_5 = *VAR_2 + 1;
  if (*VAR_5 == 0)
   VAR_1->xa_flags |= VAR_0;
 }
 return VAR_8;
}
