
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int reg; } ;
typedef TYPE_1__ RAnal ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(RAnal *VAR_0) {
 if (VAR_0->bits != 16) {
  return -1;
 }
 const char *VAR_1 =
  "=PC	pcl\n"
  "=SP	sp\n"
  "=LR	blink\n"

  "=A0	r0\n"
  "=A1	r1\n"
  "=A2	r2\n"
  "=A3	r3\n"

  "gpr	r0	.32	0	0\n"
  "gpr	r1	.32	4	0\n"
  "gpr	r2	.32	8	0\n"
  "gpr	r3	.32	12	0\n"
  "gpr	r4	.32	16	0\n"
  "gpr	r5	.32	20	0\n"
  "gpr	r6	.32	24	0\n"
  "gpr	r7	.32	28	0\n"
  "gpr	r8	.32	32	0\n"
  "gpr	r9	.32	36	0\n"
  "gpr	r10	.32	40	0\n"
  "gpr	r11	.32	44	0\n"
  "gpr	r12	.32	48	0\n"
  "gpr	r13	.32	52	0\n"
  "gpr	r14	.32	56	0\n"
  "gpr	r15	.32	60	0\n"
  "gpr	r16	.32	64	0\n"
  "gpr	r17	.32	68	0\n"
  "gpr	r18	.32	72	0\n"
  "gpr	r19	.32	76	0\n"
  "gpr	r20	.32	80	0\n"
  "gpr	r21	.32	84	0\n"
  "gpr	r22	.32	88	0\n"
  "gpr	r23	.32	92	0\n"
  "gpr	r24	.32	96	0\n"
  "gpr	r25	.32	100	0\n"
  "gpr	gp	.32	104	0\n"
  "gpr	fp	.32	108	0\n"
  "gpr	sp	.32	112	0\n"
  "gpr	ilink1	.32	116	0\n"
  "gpr	ilink2	.32	120	0\n"
  "gpr	blink	.32	124	0\n"
  "gpr	lp_count	.32	128	0\n"
  "gpr	pcl	.32	132	0\n";




 return FUNC_0 (VAR_0->reg, VAR_1);
}
