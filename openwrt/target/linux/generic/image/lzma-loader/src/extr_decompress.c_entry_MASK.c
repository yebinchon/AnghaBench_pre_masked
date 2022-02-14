
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int lc; unsigned int lp; unsigned int pb; } ;
struct TYPE_8__ {int * Probs; TYPE_1__ Properties; } ;
struct TYPE_7__ {int Read; } ;
typedef TYPE_2__ ILzmaInCallback ;
typedef int CProb ;
typedef TYPE_3__ CLzmaDecoderState ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (TYPE_3__*,TYPE_2__*,unsigned char*,unsigned int,unsigned int*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 void FUNC_4 (int,int,int,int) ;

void FUNC_5(unsigned long VAR_6, unsigned long VAR_7,
 unsigned long VAR_8, unsigned long VAR_9)
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 volatile unsigned int VAR_12, VAR_13, VAR_14, VAR_15;


 __asm__ __volatile__ ("ori %0, $12, 0":"=r"(VAR_12));
 __asm__ __volatile__ ("ori %0, $13, 0":"=r"(VAR_13));
 __asm__ __volatile__ ("ori %0, $14, 0":"=r"(VAR_14));
 __asm__ __volatile__ ("ori %0, $15, 0":"=r"(VAR_15));

 ILzmaInCallback VAR_16;
 CLzmaDecoderState VAR_17;
 VAR_16.Read = VAR_5;

 VAR_3 = VAR_4;


 VAR_10 = FUNC_3();
 VAR_17.Properties.lc = VAR_10 % 9, VAR_10 = VAR_10 / 9;
 VAR_17.Properties.lp = VAR_10 % 5, VAR_17.Properties.pb = VAR_10 / 5;

 VAR_17.Probs = (CProb *)VAR_2;


 for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
  FUNC_3();


 VAR_11 = ((unsigned int)FUNC_3()) +
  ((unsigned int)FUNC_3() << 8) +
  ((unsigned int)FUNC_3() << 16) +
  ((unsigned int)FUNC_3() << 24);


 for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
  FUNC_3();


 if ((VAR_10 = FUNC_0(&VAR_17, &VAR_16,
 (unsigned char*)VAR_0, VAR_11, &VAR_11)) == VAR_1)
 {
  FUNC_1(VAR_8, VAR_9);
  FUNC_2(VAR_6, VAR_7);


  ((void (*)(int VAR_18, int VAR_19, int VAR_20, int VAR_21)) VAR_0)(VAR_12, VAR_13, VAR_14, VAR_15);
 }
}
