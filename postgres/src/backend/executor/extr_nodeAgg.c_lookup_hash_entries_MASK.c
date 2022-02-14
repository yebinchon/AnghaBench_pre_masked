
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int additional; } ;
struct TYPE_6__ {int num_hashes; int * hash_pergroup; } ;
typedef int AggStatePerGroup ;
typedef TYPE_1__ AggState ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_2(AggState *VAR_0)
{
 int VAR_1 = VAR_0->num_hashes;
 AggStatePerGroup *VAR_2 = VAR_0->hash_pergroup;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  FUNC_1(VAR_0, VAR_3, 1);
  VAR_2[VAR_3] = FUNC_0(VAR_0)->additional;
 }
}
