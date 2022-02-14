
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_data {int col; int max; int dlen; scalar_t__* data; scalar_t__ row; scalar_t__ llen; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int*) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (struct bar_data*) ;

__attribute__((used)) static int
FUNC_3(struct bar_data* VAR_2)
{
  if (FUNC_0(&VAR_2->row, &VAR_2->col))
    return VAR_0;
  VAR_2->max = 1;
  VAR_2->offset = 0;
  VAR_2->dlen = VAR_2->col-6;
  VAR_2->llen = VAR_2->row-3;
  VAR_2->data = FUNC_1((VAR_2->dlen)*sizeof(double));
  for (int VAR_3=0;VAR_3<VAR_2->dlen;VAR_3++) {
    VAR_2->data[VAR_3] = 0;
  }
  FUNC_2(VAR_2);
  return VAR_1;
}
