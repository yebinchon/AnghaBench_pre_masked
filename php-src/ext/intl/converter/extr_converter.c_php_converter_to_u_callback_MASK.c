
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {int param_count; scalar_t__ no_separation; int * retval; int * params; } ;
struct TYPE_8__ {int to_cache; TYPE_3__ to_cb; } ;
typedef TYPE_1__ php_converter_object ;
typedef char const* int32_t ;
typedef int UErrorCode ;
struct TYPE_9__ {char const* source; char const* sourceLimit; } ;
typedef TYPE_2__ UConverterToUnicodeArgs ;
typedef int UConverterCallbackReason ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*,char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(const void *VAR_3,
                                        UConverterToUnicodeArgs *VAR_4,
                                        const char *VAR_5, int32_t VAR_6,
                                        UConverterCallbackReason VAR_7,
                                        UErrorCode *VAR_8) {
 php_converter_object *VAR_9 = (php_converter_object*)VAR_3;
 zval VAR_10;
 zval VAR_11[4];

 FUNC_1(&VAR_11[0], VAR_7);
 if (VAR_4->source) {
  FUNC_2(&VAR_11[1], VAR_4->source, VAR_4->sourceLimit - VAR_4->source);
 } else {
  FUNC_0(&VAR_11[1]);
 }
 if (VAR_5) {
  FUNC_2(&VAR_11[2], VAR_5, VAR_6);
 } else {
  FUNC_0(&VAR_11[2]);
 }
 FUNC_1(&VAR_11[3], *VAR_8);

 VAR_9->to_cb.param_count = 4;
 VAR_9->to_cb.params = VAR_11;
 VAR_9->to_cb.retval = &VAR_10;
 VAR_9->to_cb.no_separation = 0;
 if (FUNC_12(&(VAR_9->to_cb), &(VAR_9->to_cache)) == VAR_0) {

  FUNC_11(VAR_9, VAR_2, "Unexpected failure calling toUCallback()");
 } else if (!FUNC_4(VAR_10)) {
  FUNC_10(&VAR_10, VAR_4, VAR_9);
  FUNC_13(&VAR_10);
 }

 if (FUNC_8(VAR_11[3]) == VAR_1) {
  *VAR_8 = FUNC_5(VAR_11[3]);
 } else if (FUNC_3(VAR_11[3]) && FUNC_9(FUNC_7(VAR_11[3])) == VAR_1) {
  *VAR_8 = FUNC_6(FUNC_7(VAR_11[3]));
 }

 FUNC_13(&VAR_11[0]);
 FUNC_13(&VAR_11[1]);
 FUNC_13(&VAR_11[2]);
 FUNC_13(&VAR_11[3]);
}
