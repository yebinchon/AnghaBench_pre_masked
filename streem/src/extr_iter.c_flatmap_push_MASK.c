
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef size_t strm_int ;
typedef int strm_array ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int,int *,int *) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_2, strm_array VAR_3, strm_value VAR_4, strm_value** VAR_5)
{
  strm_value* VAR_6 = FUNC_2(VAR_3);
  strm_int VAR_7, VAR_8;

  VAR_8 = FUNC_1(VAR_3);
  for (VAR_7=0; VAR_7<VAR_8; VAR_7++) {
    if (FUNC_0(VAR_6[VAR_7])) {
      if (FUNC_4(VAR_2, VAR_6[VAR_7], VAR_4, VAR_5) == VAR_0) {
        return VAR_0;
      }
    }
    else {
      if (FUNC_3(VAR_2, VAR_4, 1, &VAR_6[VAR_7], *VAR_5) == VAR_0) {
        return VAR_0;
      }
      *VAR_5 += 1;
    }
  }
  return VAR_1;
}
