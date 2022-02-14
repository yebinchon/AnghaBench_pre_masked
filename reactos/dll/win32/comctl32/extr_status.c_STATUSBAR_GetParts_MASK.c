
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t numParts; TYPE_1__* parts; } ;
struct TYPE_4__ {size_t x; } ;
typedef TYPE_2__ STATUS_INFO ;
typedef size_t INT ;


 int FUNC_0 (char*,size_t) ;

__attribute__((used)) static INT
FUNC_1 (const STATUS_INFO *VAR_0, INT VAR_1, INT VAR_2[])
{
    INT VAR_3;

    FUNC_0("(%d)\n", VAR_1);
    if (VAR_2) {
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
     VAR_2[VAR_3] = VAR_0->parts[VAR_3].x;
 }
    }
    return VAR_0->numParts;
}
