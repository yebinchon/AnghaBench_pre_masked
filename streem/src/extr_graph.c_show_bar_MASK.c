
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_data {double* data; double max; double llen; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct bar_data* VAR_0, int VAR_1, int VAR_2)
{
  double VAR_3 = VAR_0->data[VAR_1] / VAR_0->max * VAR_0->llen;

  for (int VAR_4=0; VAR_4<VAR_0->llen; VAR_4++) {
    FUNC_0(VAR_0->llen+1-VAR_4, VAR_2);
    if (VAR_4 < VAR_3) {
      FUNC_1("\x1b[7m ");
    }
    else if (VAR_4 == 0) {
      FUNC_1("\x1b[0m_");
    }
    else {
      FUNC_1("\x1b[0m ");
    }
  }
}
