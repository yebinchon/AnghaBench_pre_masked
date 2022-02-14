
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef size_t strm_int ;
typedef int strm_array ;
typedef int node_string ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,size_t) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static strm_array
FUNC_3(node_string* VAR_0, strm_int VAR_1)
{
  strm_array VAR_2 = FUNC_1(((void*)0), VAR_1);
  strm_value* VAR_3 = FUNC_2(VAR_2);
  strm_int VAR_4;

  for (VAR_4=0; VAR_4<VAR_1; VAR_4++) {
    VAR_3[VAR_4] = FUNC_0(VAR_0[VAR_4]);
  }
  return VAR_2;
}
