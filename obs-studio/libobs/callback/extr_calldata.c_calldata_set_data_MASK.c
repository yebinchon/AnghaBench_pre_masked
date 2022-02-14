
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {size_t size; int * stack; int fixed; } ;
typedef TYPE_1__ calldata_t ;


 int FUNC_0 (int **,void const*,size_t) ;
 int FUNC_1 (int **,char const*,int ) ;
 int FUNC_2 (TYPE_1__*,int **,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,int **) ;
 int FUNC_4 (TYPE_1__*,char const*,void const*,size_t) ;
 int FUNC_5 (size_t*,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (char const*) ;

void FUNC_9(calldata_t *VAR_0, const char *VAR_1, const void *VAR_2,
         size_t VAR_3)
{
 uint8_t *VAR_4 = ((void*)0);

 if (!VAR_0 || !VAR_1 || !*VAR_1)
  return;

 if (!VAR_0->fixed && !VAR_0->stack) {
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
  return;
 }

 if (FUNC_3(VAR_0, VAR_1, &VAR_4)) {
  size_t VAR_5;
  FUNC_5(&VAR_5, VAR_4, sizeof(size_t));

  if (VAR_5 < VAR_3) {
   size_t VAR_6 = VAR_3 - VAR_5;
   size_t VAR_7 = VAR_0->size;

   if (!FUNC_2(VAR_0, &VAR_4, VAR_7 + VAR_6))
    return;
   FUNC_6(VAR_4 + VAR_6, VAR_4, VAR_7 - (VAR_4 - VAR_0->stack));
   VAR_0->size += VAR_6;

  } else if (VAR_5 > VAR_3) {
   size_t VAR_8 = VAR_5 - VAR_3;
   size_t VAR_9 = VAR_0->size - VAR_8;

   FUNC_6(VAR_4, VAR_4 + VAR_8, VAR_9 - (VAR_4 - VAR_0->stack));
   VAR_0->size -= VAR_8;
  }

  FUNC_0(&VAR_4, VAR_2, VAR_3);

 } else {
  size_t VAR_10 = FUNC_8(VAR_1) + 1;
  size_t VAR_11 = VAR_10 + VAR_3 + sizeof(size_t) * 2;
  if (!FUNC_2(VAR_0, &VAR_4, VAR_0->size + VAR_11))
   return;
  VAR_0->size += VAR_11;

  FUNC_1(&VAR_4, VAR_1, 0);
  FUNC_0(&VAR_4, VAR_2, VAR_3);
  FUNC_7(VAR_4, 0, sizeof(size_t));
 }
}
