
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_string ;
typedef int strm_stream ;
typedef int strm_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_2, strm_state* VAR_3, strm_string VAR_4, int VAR_5, strm_value* VAR_6, strm_value* VAR_7)
{
  int VAR_8 = VAR_0;
  strm_value VAR_9;

  if (VAR_5 > 0) {
    strm_state* VAR_10 = FUNC_5(VAR_6[0]);
    if (VAR_10) {
      VAR_8 = FUNC_6(VAR_10, VAR_4, &VAR_9);
      if (VAR_8 == VAR_0) {
        if (VAR_5 > 0 && FUNC_1(VAR_6[0])) {
          VAR_9 = FUNC_4(VAR_4);
          VAR_8 = FUNC_0(VAR_2, VAR_6[0], 1, &VAR_9, VAR_7);
          if (VAR_8 == VAR_1 && VAR_5 == 1) return VAR_1;
          VAR_9 = *VAR_7;
        }
      }
    }
  }
  if (VAR_8 == VAR_0) {
    VAR_8 = FUNC_6(VAR_3, VAR_4, &VAR_9);
  }
  if (VAR_8 == VAR_1) {
    return FUNC_2(VAR_2, VAR_9, VAR_5, VAR_6, VAR_7);
  }
  FUNC_3(VAR_2, "function not found");
  return VAR_0;
}
