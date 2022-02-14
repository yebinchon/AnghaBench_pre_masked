
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc1_ctx {int dx; int x1a2; size_t i; int ax; int* x1a0; int cx; int bx; int tmp; int si; int res; } ;



__attribute__((used)) static void FUNC_0(struct pc1_ctx *VAR_0)
{
 VAR_0->dx = VAR_0->x1a2 + VAR_0->i;
 VAR_0->ax = VAR_0->x1a0[VAR_0->i];
 VAR_0->cx = 0x015a;
 VAR_0->bx = 0x4e35;

 VAR_0->tmp = VAR_0->ax;
 VAR_0->ax = VAR_0->si;
 VAR_0->si = VAR_0->tmp;

 VAR_0->tmp = VAR_0->ax;
 VAR_0->ax = VAR_0->dx;
 VAR_0->dx = VAR_0->tmp;

 if (VAR_0->ax != 0) {
  VAR_0->ax = VAR_0->ax * VAR_0->bx;
 }

 VAR_0->tmp = VAR_0->ax;
 VAR_0->ax = VAR_0->cx;
 VAR_0->cx = VAR_0->tmp;

 if (VAR_0->ax != 0) {
  VAR_0->ax = VAR_0->ax * VAR_0->si;
  VAR_0->cx = VAR_0->ax + VAR_0->cx;
 }

 VAR_0->tmp = VAR_0->ax;
 VAR_0->ax = VAR_0->si;
 VAR_0->si = VAR_0->tmp;
 VAR_0->ax = VAR_0->ax * VAR_0->bx;
 VAR_0->dx = VAR_0->cx + VAR_0->dx;

 VAR_0->ax = VAR_0->ax + 1;

 VAR_0->x1a2 = VAR_0->dx;
 VAR_0->x1a0[VAR_0->i] = VAR_0->ax;

 VAR_0->res = VAR_0->ax ^ VAR_0->dx;
 VAR_0->i = VAR_0->i + 1;
}
