
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mrb_state ;
struct TYPE_8__ {int rlen; struct TYPE_8__** reps; } ;
typedef TYPE_1__ mrb_irep ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_5(mrb_state *VAR_3, mrb_irep *VAR_4, uint8_t *VAR_5, size_t *VAR_6, uint8_t VAR_7)
{
  int VAR_8;
  uint8_t *VAR_9 = VAR_5;

  if (VAR_4 == ((void*)0)) {
    return VAR_1;
  }

  *VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (*VAR_6 == 0) {
    return VAR_0;
  }

  VAR_5 += FUNC_1(VAR_3, VAR_4, VAR_5);
  VAR_5 += FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7);
  VAR_5 += FUNC_3(VAR_3, VAR_4, VAR_5);
  VAR_5 += FUNC_4(VAR_3, VAR_4, VAR_5);

  for (VAR_8 = 0; VAR_8 < VAR_4->rlen; VAR_8++) {
    int VAR_10;
    size_t VAR_11;

    VAR_10 = FUNC_5(VAR_3, VAR_4->reps[VAR_8], VAR_5, &VAR_11, VAR_7);
    if (VAR_10 != VAR_2) {
      return VAR_10;
    }
    VAR_5 += VAR_11;
  }
  *VAR_6 = VAR_5 - VAR_9;
  return VAR_2;
}
