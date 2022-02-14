
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_3__ {int registerWidth; int * hashesArr; } ;
typedef TYPE_1__ hyperLogLogState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;

void
FUNC_2(hyperLogLogState *VAR_1, uint32 VAR_2)
{
 uint8 VAR_3;
 uint32 VAR_4;


 VAR_4 = VAR_2 >> (VAR_0 * sizeof(uint32) - VAR_1->registerWidth);


 VAR_3 = FUNC_1(VAR_2 << VAR_1->registerWidth,
    VAR_0 * sizeof(uint32) - VAR_1->registerWidth);

 VAR_1->hashesArr[VAR_4] = FUNC_0(VAR_3, VAR_1->hashesArr[VAR_4]);
}
