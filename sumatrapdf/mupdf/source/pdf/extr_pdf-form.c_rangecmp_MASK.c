
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
typedef TYPE_1__ fz_range ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const fz_range *VAR_2 = (const fz_range *) VAR_0;
 const fz_range *VAR_3 = (const fz_range *) VAR_1;
 return (int) (VAR_2->offset - VAR_3->offset);
}
