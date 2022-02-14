
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct strm_lambda {int dummy; } ;
struct array_data {scalar_t__ n; int arr; } ;
typedef int strm_value ;
struct TYPE_7__ {scalar_t__ mode; } ;
typedef TYPE_1__ strm_stream ;
typedef void* strm_cfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 struct array_data* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (scalar_t__,int ,int *,void*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 struct strm_lambda* FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (int ) ;

int
FUNC_15(strm_stream* VAR_11, strm_value VAR_12, strm_value VAR_13, strm_value* VAR_14)
{

  if (FUNC_3(VAR_12)) {
    VAR_12 = FUNC_10(FUNC_4(VAR_12, VAR_0));
  }

  else if (FUNC_5(VAR_12)) {
    struct strm_lambda* VAR_15 = FUNC_13(VAR_12);
    VAR_12 = FUNC_10(FUNC_8(VAR_9, VAR_5, ((void*)0), (void*)VAR_15));
  }

  else if (FUNC_1(VAR_12)) {
    struct array_data *VAR_16 = FUNC_0(sizeof(struct array_data));
    VAR_16->arr = FUNC_11(VAR_12);
    VAR_16->n = 0;
    VAR_12 = FUNC_10(FUNC_8(VAR_10, VAR_4, ((void*)0), (void*)VAR_16));
  }



  if (FUNC_3(VAR_13)) {
    VAR_13 = FUNC_10(FUNC_4(VAR_13, VAR_1));
  }

  else if (FUNC_5(VAR_13)) {
    struct strm_lambda* VAR_17 = FUNC_13(VAR_13);
    VAR_13 = FUNC_10(FUNC_8(VAR_9, VAR_5, ((void*)0), (void*)VAR_17));
  }

  else if (FUNC_2(VAR_13)) {
    strm_cfunc VAR_18 = FUNC_12(VAR_13);
    VAR_13 = FUNC_10(FUNC_8(VAR_9, VAR_7, VAR_6, VAR_18));
  }


  if (FUNC_9(VAR_12) && FUNC_9(VAR_13)) {
    strm_stream* VAR_19 = FUNC_14(VAR_12);
    strm_stream* VAR_20 = FUNC_14(VAR_13);
    if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0) ||
        VAR_19->mode == VAR_8 ||
        VAR_20->mode == VAR_10) {
      FUNC_6(VAR_11, "stream error");
      return VAR_2;
    }
    FUNC_7(FUNC_14(VAR_12), FUNC_14(VAR_13));
    *VAR_14 = VAR_13;
    return VAR_3;
  }
  return VAR_2;
}
