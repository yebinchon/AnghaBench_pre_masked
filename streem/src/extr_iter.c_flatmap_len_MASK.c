
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef size_t strm_int ;
typedef int strm_array ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(strm_array VAR_0)
{
  strm_value* VAR_1 = FUNC_2(VAR_0);
  strm_int VAR_2, VAR_3, VAR_4 = 0;

  VAR_3 = FUNC_1(VAR_0);
  for (VAR_2=0; VAR_2<VAR_3; VAR_2++) {
    if (FUNC_0(VAR_1[VAR_2])) {
      VAR_4 += FUNC_3(VAR_1[VAR_2]);
    }
    else {
      VAR_4++;
    }
  }
  return VAR_4;
}
