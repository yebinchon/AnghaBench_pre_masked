
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_3__ {int bitcount; int tag; scalar_t__ (* get_byte ) () ;} ;
typedef TYPE_1__ UZLIB_DATA ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static uint FUNC_1 (UZLIB_DATA *VAR_0, int VAR_1, int VAR_2) {

  if (!VAR_1)
    return VAR_2;

  uint VAR_3, VAR_4 = (((uint)-1)<<VAR_1);
  for (VAR_3 = VAR_0->bitcount; VAR_3 < VAR_1; VAR_3 +=8)
    VAR_0->tag |= ((uint)VAR_0->get_byte()) << VAR_3;

  VAR_4 = VAR_0->tag & ~VAR_4;
  VAR_0->tag >>= VAR_1;
  VAR_0->bitcount = VAR_3 - VAR_1;
  return VAR_2 + VAR_4;
}
