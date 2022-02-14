
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ entry; } ;
struct TYPE_5__ {TYPE_1__ map; } ;
struct TYPE_6__ {int pos; TYPE_2__ data; } ;
typedef TYPE_3__ DocRepresentation ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const DocRepresentation *VAR_2 = (const DocRepresentation *) VAR_0;
 const DocRepresentation *VAR_3 = (const DocRepresentation *) VAR_1;

 if (FUNC_0(VAR_2->pos) == FUNC_0(VAR_3->pos))
 {
  if (FUNC_1(VAR_2->pos) == FUNC_1(VAR_3->pos))
  {
   if (VAR_2->data.map.entry == VAR_3->data.map.entry)
    return 0;

   return (VAR_2->data.map.entry > VAR_3->data.map.entry) ? 1 : -1;
  }

  return (FUNC_1(VAR_2->pos) > FUNC_1(VAR_3->pos)) ? 1 : -1;
 }

 return (FUNC_0(VAR_2->pos) > FUNC_0(VAR_3->pos)) ? 1 : -1;
}
