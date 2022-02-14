
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* VacAttrStatsP ;
struct TYPE_3__ {int rowstride; int* exprnulls; int * exprvals; } ;
typedef int Datum ;



__attribute__((used)) static Datum
FUNC_0(VacAttrStatsP VAR_0, int VAR_1, bool *VAR_2)
{
 int VAR_3;


 VAR_3 = VAR_1 * VAR_0->rowstride;
 *VAR_2 = VAR_0->exprnulls[VAR_3];
 return VAR_0->exprvals[VAR_3];
}
