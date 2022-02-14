
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct correl_data {double n; double sx; double sy; int sxx; int syy; int sxy; } ;
typedef int strm_value ;
struct TYPE_4__ {struct correl_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 double FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_2, strm_value VAR_3)
{
  struct correl_data* VAR_4 = VAR_2->data;
  strm_value *VAR_5;
  double VAR_6, VAR_7;

  if (!FUNC_0(VAR_3) || FUNC_1(VAR_3) != 2) {
    FUNC_4(VAR_2, "invalid data");
    return VAR_0;
  }

  VAR_5 = FUNC_2(VAR_3);
  if (!FUNC_3(VAR_5[0]) || !FUNC_3(VAR_5[1])) {
    FUNC_4(VAR_2, "correl() requires [num, num]");
    return VAR_0;
  }
  VAR_4->n++;
  VAR_6 = FUNC_5(VAR_5[0]) - VAR_4->sx; VAR_4->sx += VAR_6 / VAR_4->n;
  VAR_7 = FUNC_5(VAR_5[1]) - VAR_4->sy; VAR_4->sy += VAR_7 / VAR_4->n;
  VAR_4->sxx += (VAR_4->n-1) * VAR_6 * VAR_6 / VAR_4->n;
  VAR_4->syy += (VAR_4->n-1) * VAR_7 * VAR_7 / VAR_4->n;
  VAR_4->sxy += (VAR_4->n-1) * VAR_6 * VAR_7 / VAR_4->n;
  return VAR_1;
}
