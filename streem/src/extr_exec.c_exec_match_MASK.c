
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strm_lambda {TYPE_1__* body; } ;
typedef int strm_value ;
typedef int strm_stream ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct strm_lambda* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  strm_value VAR_6;

  if (VAR_3 < 2) {
      FUNC_2(VAR_2, "wrong number of arguments");
      return VAR_1;
  }
  VAR_6 = VAR_4[VAR_3-1];
  if (FUNC_1(VAR_6)) {
    struct strm_lambda* VAR_7 = FUNC_3(VAR_6);
    if (VAR_7->body->type == VAR_0) {
      FUNC_2(VAR_2, "not a case function");
      return VAR_1;
    }
  }
  return FUNC_0(VAR_2, VAR_6, VAR_3-1, VAR_4, VAR_5);
}
