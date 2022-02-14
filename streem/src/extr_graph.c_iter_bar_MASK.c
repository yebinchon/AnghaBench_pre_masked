
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct bar_data {double* data; scalar_t__ offset; int dlen; double max; scalar_t__ row; } ;
typedef int strm_value ;
struct TYPE_5__ {struct bar_data* data; } ;
typedef TYPE_1__ strm_stream ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (double*) ;
 int FUNC_2 (struct bar_data*) ;
 void* VAR_4 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct bar_data*) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 double FUNC_10 (int ) ;
 void* VAR_6 ;

__attribute__((used)) static int
FUNC_11(strm_stream* VAR_7, strm_value VAR_8)
{
  struct bar_data* VAR_9 = VAR_7->data;
  double VAR_10, VAR_11 = 1.0;

  if (VAR_4) {
    VAR_4 = VAR_0;
    FUNC_9(VAR_1, VAR_5);
    FUNC_3(VAR_9->row-1, 1);
    FUNC_4();
    FUNC_0(1);
  }
  if (!FUNC_6(VAR_8)) {
    FUNC_7(VAR_7, "invalid data");
    return VAR_2;
  }

  if (VAR_6) {
    VAR_6 = VAR_0;
    FUNC_1(VAR_9->data);
    if (FUNC_2(VAR_9) == VAR_2) {
      FUNC_8(VAR_7);
      return VAR_2;
    }
  }
  VAR_10 = FUNC_10(VAR_8);
  if (VAR_10 < 0) VAR_10 = 0;
  VAR_9->data[VAR_9->offset++] = VAR_10;
  VAR_11 = 1.0;
  for (int VAR_12=0; VAR_12<VAR_9->dlen; VAR_12++) {
    VAR_10 = VAR_9->data[VAR_12];
    if (VAR_10 > VAR_11) VAR_11 = VAR_10;
  }
  VAR_9->max = VAR_11;
  if (VAR_9->offset == VAR_9->dlen) {
    VAR_9->offset = 0;
  }
  FUNC_5(VAR_9);
  return VAR_3;
}
