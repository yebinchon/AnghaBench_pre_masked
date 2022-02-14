
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int v ;
typedef int uint32_t ;
typedef int u ;
struct TYPE_3__ {int * tables; int * state; } ;
typedef TYPE_1__ PHP_GOST_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_5(PHP_GOST_CTX *VAR_0, uint32_t VAR_1[8])
{
 int VAR_2;
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6[8], VAR_7[8], VAR_8[8], VAR_9[8], VAR_10[8], *VAR_11 = VAR_0->state, *VAR_12 = VAR_1;

 FUNC_4(VAR_7, VAR_0->state, sizeof(VAR_7));
 FUNC_4(VAR_8, VAR_1, sizeof(VAR_8));

 for (VAR_2 = 0; VAR_2 < 8; VAR_2 += 2) {
  FUNC_0(*VAR_0->tables);
 }
 FUNC_1(VAR_7, VAR_12, VAR_10);
 FUNC_2(VAR_11, VAR_8, VAR_7);
 FUNC_3(VAR_11, VAR_8);
}
