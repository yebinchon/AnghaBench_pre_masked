
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
struct TYPE_4__ {TYPE_1__ heap; } ;
struct RString {TYPE_2__ as; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 struct RString* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct RString*) ;
 scalar_t__ FUNC_2 (struct RString*) ;
 char* FUNC_3 (struct RString*) ;
 int FUNC_4 (struct RString*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct RString*) ;
 scalar_t__ FUNC_6 (char*,char*,scalar_t__) ;
 int FUNC_7 (char*,char*,scalar_t__) ;
 int FUNC_8 (struct RString*) ;
 int FUNC_9 (int *,char*,char**,scalar_t__*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,struct RString*) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2, VAR_3;
  char *VAR_4, *VAR_5;
  struct RString *VAR_6 = FUNC_0(VAR_1);

  FUNC_9(VAR_0, "s", &VAR_4, &VAR_2);
  VAR_3 = FUNC_2(VAR_6);
  if (VAR_2 > VAR_3) return FUNC_10();
  VAR_5 = FUNC_3(VAR_6);
  if (FUNC_6(VAR_5, VAR_4, VAR_2) != 0) return FUNC_10();
  if (!FUNC_8(VAR_6) && (FUNC_5(VAR_6) || FUNC_1(VAR_6))) {
    VAR_6->as.heap.ptr += VAR_2;
  }
  else {
    FUNC_11(VAR_0, VAR_6);
    VAR_5 = FUNC_3(VAR_6);
    FUNC_7(VAR_5, VAR_5+VAR_2, VAR_3-VAR_2);
  }
  FUNC_4(VAR_6, VAR_3-VAR_2);
  return VAR_1;
}
