
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_string ;
typedef int strm_stream ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_1, FILE* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    strm_string VAR_7;

    if (VAR_6 != 0) {
      if (!FUNC_5(VAR_4[VAR_6-1])) {
        FUNC_0(" ", VAR_2);
      }
    }
    VAR_7 = FUNC_6(VAR_4[VAR_6]);
    FUNC_1(FUNC_4(VAR_7), FUNC_3(VAR_7), 1, VAR_2);
  }
  FUNC_0("\n", VAR_2);
  *VAR_5 = FUNC_2();
  return VAR_0;
}
