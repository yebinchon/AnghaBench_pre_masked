
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_operand {long (* extract ) (unsigned long,int ,int*) ;unsigned long shift; unsigned long bitm; int flags; } ;
typedef int ppc_cpu_t ;


 int VAR_0 ;
 long FUNC_0 (unsigned long,int ,int*) ;

__attribute__((used)) static long
FUNC_1 (const struct powerpc_operand *VAR_1,
         unsigned long VAR_2, ppc_cpu_t VAR_3)
{
  long VAR_4;
  int VAR_5;

  if (VAR_1->extract) {
   VAR_4 = (*VAR_1->extract) (VAR_2, VAR_3, &VAR_5);
  } else {
   VAR_4 = (VAR_2 >> VAR_1->shift) & VAR_1->bitm;
   if ((VAR_1->flags & VAR_0) != 0) {


    unsigned long VAR_6 = VAR_1->bitm;


    VAR_6 |= (VAR_6 & -VAR_6) - 1;
    VAR_6 &= ~(VAR_6 >> 1);
    VAR_4 = (VAR_4 ^ VAR_6) - VAR_6;
   }
    }

  return VAR_4;
}
