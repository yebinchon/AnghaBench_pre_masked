
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int param_count; scalar_t__ no_separation; int * retval; int * params; } ;
struct TYPE_5__ {int from_cache; TYPE_2__ from_cb; } ;
typedef TYPE_1__ php_converter_object ;
typedef int int32_t ;
typedef int UErrorCode ;
typedef int UConverterFromUnicodeArgs ;
typedef int UConverterCallbackReason ;
typedef int UChar32 ;
typedef int UChar ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(const void *VAR_3,
                                          UConverterFromUnicodeArgs *VAR_4,
                                          const UChar *VAR_5, int32_t VAR_6, UChar32 VAR_7,
                                          UConverterCallbackReason VAR_8,
                                          UErrorCode *VAR_9) {
 php_converter_object *VAR_10 = (php_converter_object*)VAR_3;
 zval VAR_11;
 zval VAR_12[4];
 int VAR_13;

 FUNC_1(&VAR_12[0], VAR_8);
 FUNC_10(&VAR_12[1]);
 VAR_13 = 0;
 while (VAR_13 < VAR_6) {
  UChar32 VAR_14;
  FUNC_0(VAR_5, VAR_13, VAR_6, VAR_14);
  FUNC_9(&VAR_12[1], VAR_14);
 }
 FUNC_1(&VAR_12[2], VAR_7);
 FUNC_1(&VAR_12[3], *VAR_9);

 VAR_10->from_cb.param_count = 4;
 VAR_10->from_cb.params = VAR_12;
 VAR_10->from_cb.retval = &VAR_11;
 VAR_10->from_cb.no_separation = 0;
 if (FUNC_13(&(VAR_10->from_cb), &(VAR_10->from_cache)) == VAR_0) {

  FUNC_12(VAR_10, VAR_2, "Unexpected failure calling fromUCallback()");
 } else if (!FUNC_3(VAR_11)) {
  FUNC_11(&VAR_11, VAR_4, VAR_10);
  FUNC_14(&VAR_11);
 }

 if (FUNC_7(VAR_12[3]) == VAR_1) {
  *VAR_9 = FUNC_4(VAR_12[3]);
 } else if (FUNC_2(VAR_12[3]) && FUNC_8(FUNC_6(VAR_12[3])) == VAR_1) {
  *VAR_9 = FUNC_5(FUNC_6(VAR_12[3]));
 }

 FUNC_14(&VAR_12[0]);
 FUNC_14(&VAR_12[1]);
 FUNC_14(&VAR_12[2]);
 FUNC_14(&VAR_12[3]);
}
