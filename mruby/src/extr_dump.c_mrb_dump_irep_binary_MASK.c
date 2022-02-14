
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef int bin ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int ,int **,size_t*) ;
 size_t FUNC_2 (int *,int,size_t,int *) ;
 int FUNC_3 (int *,int *) ;

int
FUNC_4(mrb_state *VAR_4, mrb_irep *VAR_5, uint8_t VAR_6, FILE* VAR_7)
{
  uint8_t *VAR_8 = ((void*)0);
  size_t VAR_9 = 0;
  int VAR_10;

  if (VAR_7 == ((void*)0)) {
    return VAR_1;
  }

  VAR_10 = FUNC_1(VAR_4, VAR_5, FUNC_0(VAR_6, VAR_0), &VAR_8, &VAR_9);
  if (VAR_10 == VAR_2) {
    if (FUNC_2(VAR_8, sizeof(VAR_8[0]), VAR_9, VAR_7) != VAR_9) {
      VAR_10 = VAR_3;
    }
  }

  FUNC_3(VAR_4, VAR_8);
  return VAR_10;
}
