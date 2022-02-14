
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct minmax_data {double num; void* data; scalar_t__ min; scalar_t__ start; int func; } ;
typedef void* strm_value ;
struct TYPE_4__ {struct minmax_data* data; } ;
typedef TYPE_1__ strm_stream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int,void**,void**) ;
 int FUNC_1 (int ) ;
 double FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_3, strm_value VAR_4)
{
  struct minmax_data* VAR_5 = VAR_3->data;
  strm_value VAR_6;
  double VAR_7;

  if (!FUNC_1(VAR_5->func)) {
    if (FUNC_0(VAR_3, VAR_5->func, 1, &VAR_4, &VAR_6) == VAR_1) {
      return VAR_1;
    }
  }
  else {
    VAR_6 = VAR_4;
  }
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_5->start) {
    VAR_5->start = VAR_0;
    VAR_5->num = VAR_7;
    VAR_5->data = VAR_4;
  }
  else if (VAR_5->min) {
    if (VAR_5->num > VAR_7) {
      VAR_5->num = VAR_7;
      VAR_5->data = VAR_4;
    }
  }
  else {
    if (VAR_5->num < VAR_7) {
      VAR_5->num = VAR_7;
      VAR_5->data = VAR_4;
    }
  }
  return VAR_2;
}
