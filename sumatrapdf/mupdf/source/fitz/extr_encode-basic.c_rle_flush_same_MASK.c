
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rle {scalar_t__* buf; int chain; scalar_t__ run; } ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, struct rle *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->chain, 257 - VAR_1->run);
 FUNC_0(VAR_0, VAR_1->chain, VAR_1->buf[0]);
}
