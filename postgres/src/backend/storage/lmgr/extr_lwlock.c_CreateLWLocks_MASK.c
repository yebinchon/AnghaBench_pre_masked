
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int Size ;
typedef int LWLockPadded ;
typedef int LWLock ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;

void
FUNC_5(void)
{
 FUNC_4(VAR_4 > (uint32) VAR_5,
      "MAX_BACKENDS too big for lwlock.c");

 FUNC_4(sizeof(LWLock) <= VAR_1 &&
      sizeof(LWLock) <= VAR_2,
      "Miscalculated LWLock padding");

 if (!VAR_0)
 {
  Size VAR_7 = FUNC_1();
  int *VAR_8;
  char *VAR_9;


  VAR_9 = (char *) FUNC_3(VAR_7);


  VAR_9 += sizeof(int);


  VAR_9 += VAR_2 - ((uintptr_t) VAR_9) % VAR_2;

  VAR_6 = (LWLockPadded *) VAR_9;





  VAR_8 = (int *) ((char *) VAR_6 - sizeof(int));
  *VAR_8 = VAR_3;


  FUNC_0();
 }


 FUNC_2();
}
