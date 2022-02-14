
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct correl_data {int n; int sxx; int syy; double sxy; } ;
typedef int strm_value ;
struct TYPE_4__ {struct correl_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 double FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (double) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, strm_value VAR_2)
{
  struct correl_data* VAR_3 = VAR_1->data;

  VAR_3->n--;
  double VAR_4 = FUNC_0(VAR_3->sxx / VAR_3->n);
  double VAR_5 = FUNC_0(VAR_3->syy / VAR_3->n);
  double VAR_6 = VAR_3->sxy / (VAR_3->n * VAR_4 * VAR_5);
  FUNC_1(VAR_1, FUNC_2(VAR_6), ((void*)0));
  return VAR_0;
}
