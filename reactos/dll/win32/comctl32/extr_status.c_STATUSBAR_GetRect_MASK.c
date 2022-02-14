
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bound; } ;
struct TYPE_7__ {size_t numParts; TYPE_2__* parts; TYPE_1__ part0; scalar_t__ simple; } ;
struct TYPE_6__ {int bound; } ;
typedef TYPE_3__ STATUS_INFO ;
typedef int * LPRECT ;
typedef size_t INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_1 (const STATUS_INFO *VAR_2, INT VAR_3, LPRECT VAR_4)
{
    FUNC_0("part %d\n", VAR_3);
    if(VAR_3 >= VAR_2->numParts || VAR_3 < 0)
      return VAR_0;
    if (VAR_2->simple)
 *VAR_4 = VAR_2->part0.bound;
    else
 *VAR_4 = VAR_2->parts[VAR_3].bound;
    return VAR_1;
}
