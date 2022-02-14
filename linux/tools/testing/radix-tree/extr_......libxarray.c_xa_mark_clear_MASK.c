
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xa_mark_t ;
struct xarray {int xa_flags; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct xarray *VAR_0, xa_mark_t VAR_1)
{
 if (VAR_0->xa_flags & FUNC_0(VAR_1))
  VAR_0->xa_flags &= ~(FUNC_0(VAR_1));
}
