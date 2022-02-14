
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct mvavg_data {size_t num; double* data; size_t i; int filled; int func; scalar_t__ func_p; } ;
typedef int strm_value ;
struct TYPE_6__ {struct mvavg_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef size_t strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (double) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 double FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_3, strm_value VAR_4)
{
  struct mvavg_data* VAR_5 = VAR_3->data;
  double VAR_6 = 0;
  double VAR_7 = 0;
  strm_int VAR_8, VAR_9 = VAR_5->num;

  if (VAR_5->func_p) {
    VAR_4 = FUNC_0(VAR_3, VAR_4, VAR_5->func);
  }
  if (!FUNC_5(VAR_4)) {
    FUNC_6(VAR_3, "number required");
    return VAR_0;
  }
  VAR_5->data[VAR_5->i++] = FUNC_7(VAR_4);
  if (VAR_5->i == VAR_5->num) {
    VAR_5->filled = VAR_2;
    VAR_5->i = 0;
  }
  if (!VAR_5->filled) {
    FUNC_2(VAR_3, FUNC_4(), ((void*)0));
    return VAR_1;
  }
  for (VAR_8=0; VAR_8<VAR_9; VAR_8++) {
    double VAR_10 = VAR_5->data[VAR_8];
    double VAR_11 = VAR_6 + VAR_10;
    if (FUNC_1(VAR_6) >= FUNC_1(VAR_10))
      VAR_7 += ((VAR_6 - VAR_11) + VAR_10);
    else
      VAR_7 += ((VAR_10 - VAR_11) + VAR_6);
    VAR_6 = VAR_11;
  }
  FUNC_2(VAR_3, FUNC_3((VAR_6+VAR_7)/VAR_5->num), ((void*)0));
  return VAR_1;
}
