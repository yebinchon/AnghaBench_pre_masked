
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_data {int offset; int dlen; } ;


 int FUNC_0 (struct bar_data*,int,int ) ;
 int FUNC_1 (struct bar_data*) ;

__attribute__((used)) static void
FUNC_2(struct bar_data* VAR_0)
{
  int VAR_1 = 1;

  FUNC_1(VAR_0);
  for (int VAR_2=VAR_0->offset; VAR_2<VAR_0->dlen; VAR_2++) {
    FUNC_0(VAR_0, VAR_2, VAR_1++);
  }
  for (int VAR_3=0; VAR_3<VAR_0->offset; VAR_3++) {
    FUNC_0(VAR_0, VAR_3, VAR_1++);
  }
}
