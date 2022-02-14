
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rle {int state; int chain; } ;
typedef int fz_context ;






 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,struct rle*) ;
 int FUNC_2 (int *,struct rle*) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_0, void *VAR_1)
{
 struct rle *VAR_2 = VAR_1;
 switch (VAR_2->state)
 {
  case 128: break;
  case 130: FUNC_1(VAR_0, VAR_2); break;
  case 131: FUNC_1(VAR_0, VAR_2); break;
  case 129: FUNC_2(VAR_0, VAR_2); break;
 }
 FUNC_0(VAR_0, VAR_2->chain, 128);
}
