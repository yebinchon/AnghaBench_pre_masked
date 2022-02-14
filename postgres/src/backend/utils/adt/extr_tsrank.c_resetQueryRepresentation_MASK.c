
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* operandData; TYPE_1__* query; } ;
struct TYPE_6__ {int operandexists; int reverseinsert; scalar_t__ npos; } ;
struct TYPE_5__ {int size; } ;
typedef TYPE_3__ QueryRepresentation ;



__attribute__((used)) static void
FUNC_0(QueryRepresentation *VAR_0, bool VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->query->size; VAR_2++)
 {
  VAR_0->operandData[VAR_2].operandexists = 0;
  VAR_0->operandData[VAR_2].reverseinsert = VAR_1;
  VAR_0->operandData[VAR_2].npos = 0;
 }
}
