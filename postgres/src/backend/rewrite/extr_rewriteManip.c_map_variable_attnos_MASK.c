
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_varno; int sublevels_up; int map_length; int* found_whole_row; int to_rowtype; int const* attno_map; } ;
typedef TYPE_1__ map_variable_attnos_context ;
typedef int Oid ;
typedef int Node ;
typedef int AttrNumber ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,void*,int ) ;

Node *
FUNC_1(Node *VAR_1,
     int VAR_2, int VAR_3,
     const AttrNumber *VAR_4, int VAR_5,
     Oid VAR_6, bool *VAR_7)
{
 map_variable_attnos_context VAR_8;

 VAR_8.target_varno = VAR_2;
 VAR_8.sublevels_up = VAR_3;
 VAR_8.attno_map = VAR_4;
 VAR_8.map_length = VAR_5;
 VAR_8.to_rowtype = VAR_6;
 VAR_8.found_whole_row = VAR_7;

 *VAR_7 = 0;





 return FUNC_0(VAR_1,
           VAR_0,
           (void *) &VAR_8,
           0);
}
