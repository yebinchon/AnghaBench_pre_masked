
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg; } ;
typedef TYPE_1__ RAnal ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(RAnal *VAR_0) {
 const char *VAR_1 =
  "=PC	mpc\n"
  "=SP	sp\n"
  "=A0	af\n"
  "=A1	bc\n"
  "=A2	de\n"
  "=A3	hl\n"

  "gpr	mpc	.32	0	0\n"
  "gpr	pc	.16	0	0\n"
  "gpr	m	.16	2	0\n"

  "gpr	sp	.16	4	0\n"

  "gpr	af	.16	6	0\n"
  "gpr	f	.8	6	0\n"
  "gpr	a	.8	7	0\n"
  "gpr	Z	.1	.55	0\n"
  "gpr	N	.1	.54	0\n"
  "gpr	H	.1	.53	0\n"
  "gpr	C	.1	.52	0\n"

  "gpr	bc	.16	8	0\n"
  "gpr	c	.8	8	0\n"
  "gpr	b	.8	9	0\n"

  "gpr	de	.16	10	0\n"
  "gpr	e	.8	10	0\n"
  "gpr	d	.8	11	0\n"

  "gpr	hl	.16	12	0\n"
  "gpr	l	.8	12	0\n"
  "gpr	h	.8	13	0\n"

  "gpr	mbcrom	.16	14	0\n"
  "gpr	mbcram	.16	16	0\n"

  "gpr	ime	.1	18	0\n";
 return FUNC_0 (VAR_0->reg, VAR_1);
}
