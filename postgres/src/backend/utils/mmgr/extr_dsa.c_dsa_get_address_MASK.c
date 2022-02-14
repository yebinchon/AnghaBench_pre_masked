
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t dsa_segment_index ;
typedef int dsa_pointer ;
struct TYPE_7__ {TYPE_1__* segment_maps; } ;
typedef TYPE_2__ dsa_area ;
struct TYPE_6__ {void* mapped_address; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_6 (int ) ;

void *
FUNC_7(dsa_area *VAR_1, dsa_pointer VAR_2)
{
 dsa_segment_index VAR_3;
 size_t VAR_4;


 if (!FUNC_3(VAR_2))
  return ((void*)0);


 FUNC_4(VAR_1);


 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 < VAR_0);


 if (FUNC_6(VAR_1->segment_maps[VAR_3].mapped_address == ((void*)0)))
 {

  FUNC_5(VAR_1, VAR_3);
 }

 return VAR_1->segment_maps[VAR_3].mapped_address + VAR_4;
}
