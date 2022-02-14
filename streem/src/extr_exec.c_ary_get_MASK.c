
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_array {size_t len; int * ptr; scalar_t__ headers; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef size_t strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 struct strm_array* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_2, strm_value VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  struct strm_array* VAR_7;
  strm_value VAR_8;

  if (VAR_4 != 1) {
    FUNC_3(VAR_2, "wrong number of arguments");
    return VAR_0;
  }

  VAR_7 = FUNC_1(VAR_3);
  VAR_8 = VAR_5[0];
  if (FUNC_2(VAR_8)) {
    strm_int VAR_9 = FUNC_6(VAR_8);

    if (VAR_9>=VAR_7->len)
      return VAR_0;
    *VAR_6 = VAR_7->ptr[VAR_9];
    return VAR_1;
  }
  if (FUNC_5(VAR_8)) {
    if (VAR_7->headers) {
      strm_int VAR_10, VAR_11 = VAR_7->len;

      for (VAR_10=0; VAR_10<VAR_11; VAR_10++) {
        if (FUNC_4(FUNC_7(VAR_8),
                        FUNC_7(FUNC_0(VAR_7->headers)[VAR_10]))) {
          *VAR_6 = VAR_7->ptr[VAR_10];
          return VAR_1;
        }
      }
    }
  }
  return VAR_0;
}
