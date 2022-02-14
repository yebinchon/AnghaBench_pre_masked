
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int ranctx ;


 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(tree *VAR_0, unsigned long VAR_1, ranctx *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 for (VAR_3 = VAR_1 - 1; VAR_3 > 0; VAR_3--) {
  tree VAR_5;
  VAR_4 = FUNC_0(VAR_2) % (VAR_3 + 1);
  VAR_5 = VAR_0[VAR_3];
  VAR_0[VAR_3] = VAR_0[VAR_4];
  VAR_0[VAR_4] = VAR_5;
 }
}
