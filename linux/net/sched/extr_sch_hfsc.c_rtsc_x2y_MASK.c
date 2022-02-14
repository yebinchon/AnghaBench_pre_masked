
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct runtime_sc {scalar_t__ x; scalar_t__ y; scalar_t__ dx; scalar_t__ dy; int sm2; int sm1; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static u64
FUNC_1(struct runtime_sc *VAR_0, u64 VAR_1)
{
 u64 VAR_2;

 if (VAR_1 <= VAR_0->x)
  VAR_2 = VAR_0->y;
 else if (VAR_1 <= VAR_0->x + VAR_0->dx)

  VAR_2 = VAR_0->y + FUNC_0(VAR_1 - VAR_0->x, VAR_0->sm1);
 else

  VAR_2 = VAR_0->y + VAR_0->dy
      + FUNC_0(VAR_1 - VAR_0->x - VAR_0->dx, VAR_0->sm2);
 return VAR_2;
}
