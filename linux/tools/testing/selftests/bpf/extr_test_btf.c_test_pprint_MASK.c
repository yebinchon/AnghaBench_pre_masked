
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int percpu_map; int lossless_map; int ordered_map; int map_name; int map_type; int descr; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned int VAR_2;
 int VAR_3 = 0;


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  VAR_0[0].descr = VAR_1[VAR_2].descr;
  VAR_0[0].map_type = VAR_1[VAR_2].map_type;
  VAR_0[0].map_name = VAR_1[VAR_2].map_name;
  VAR_0[0].ordered_map = VAR_1[VAR_2].ordered_map;
  VAR_0[0].lossless_map = VAR_1[VAR_2].lossless_map;
  VAR_0[0].percpu_map = VAR_1[VAR_2].percpu_map;

  VAR_3 |= FUNC_1(FUNC_2(0));
 }


 for (VAR_2 = 1; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_0[VAR_2].descr = VAR_1[0].descr;
  VAR_0[VAR_2].map_type = VAR_1[0].map_type;
  VAR_0[VAR_2].map_name = VAR_1[0].map_name;
  VAR_0[VAR_2].ordered_map = VAR_1[0].ordered_map;
  VAR_0[VAR_2].lossless_map = VAR_1[0].lossless_map;
  VAR_0[VAR_2].percpu_map = VAR_1[0].percpu_map;
  VAR_3 |= FUNC_1(FUNC_2(VAR_2));
 }

 return VAR_3;
}
