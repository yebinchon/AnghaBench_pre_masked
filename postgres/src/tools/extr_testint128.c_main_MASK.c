
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_3__ {int hi; int lo; } ;
struct TYPE_4__ {int i128; TYPE_1__ hl; int I128; } ;
typedef TYPE_2__ test128 ;
typedef int int64 ;
typedef int int128 ;


 void* FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,int,int,...) ;
 long FUNC_7 (char*,int *,int ) ;

int
FUNC_8(int VAR_0, char **VAR_1)
{
 long VAR_2;

 if (VAR_0 >= 2)
  VAR_2 = FUNC_7(VAR_1[1], ((void*)0), 0);
 else
  VAR_2 = 1000000000;

 while (VAR_2-- > 0)
 {
  int64 VAR_3 = FUNC_0();
  int64 VAR_4 = FUNC_0();
  int64 VAR_5 = FUNC_0();
  test128 VAR_6;
  test128 VAR_7;


  VAR_6 = VAR_3;
  VAR_6 = VAR_4;
  VAR_7 = VAR_6;
  VAR_6 += (int128) (uint64) VAR_5;
  FUNC_3(&VAR_7, (uint64) VAR_5);

  if (VAR_6 != VAR_7 || VAR_6 != VAR_7)
  {
   FUNC_6("%016lX%016lX + unsigned %lX\n", VAR_3, VAR_4, VAR_5);
   FUNC_6("native = %016lX%016lX\n", VAR_6, VAR_6);
   FUNC_6("result = %016lX%016lX\n", VAR_7, VAR_7);
   return 1;
  }


  VAR_6 = VAR_3;
  VAR_6 = VAR_4;
  VAR_7 = VAR_6;
  VAR_6 += (int128) VAR_5;
  FUNC_1(&VAR_7, VAR_5);

  if (VAR_6 != VAR_7 || VAR_6 != VAR_7)
  {
   FUNC_6("%016lX%016lX + signed %lX\n", VAR_3, VAR_4, VAR_5);
   FUNC_6("native = %016lX%016lX\n", VAR_6, VAR_6);
   FUNC_6("result = %016lX%016lX\n", VAR_7, VAR_7);
   return 1;
  }


  VAR_6 = (int128) VAR_3 * (int128) VAR_4;

  VAR_7 = VAR_7 = 0;
  FUNC_2(&VAR_7, VAR_3, VAR_4);

  if (VAR_6 != VAR_7 || VAR_6 != VAR_7)
  {
   FUNC_6("%lX * %lX\n", VAR_3, VAR_4);
   FUNC_6("native = %016lX%016lX\n", VAR_6, VAR_6);
   FUNC_6("result = %016lX%016lX\n", VAR_7, VAR_7);
   return 1;
  }


  VAR_6 = VAR_3;
  VAR_6 = VAR_4;
  VAR_7 = VAR_5;
  VAR_7 = FUNC_0();

  if (FUNC_5(VAR_6, VAR_7) !=
   FUNC_4(VAR_6, VAR_7))
  {
   FUNC_6("comparison failure: %d vs %d\n",
       FUNC_5(VAR_6, VAR_7),
       FUNC_4(VAR_6, VAR_7));
   FUNC_6("arg1 = %016lX%016lX\n", VAR_6, VAR_6);
   FUNC_6("arg2 = %016lX%016lX\n", VAR_7, VAR_7);
   return 1;
  }


  VAR_7 = VAR_3;

  if (FUNC_5(VAR_6, VAR_7) !=
   FUNC_4(VAR_6, VAR_7))
  {
   FUNC_6("comparison failure: %d vs %d\n",
       FUNC_5(VAR_6, VAR_7),
       FUNC_4(VAR_6, VAR_7));
   FUNC_6("arg1 = %016lX%016lX\n", VAR_6, VAR_6);
   FUNC_6("arg2 = %016lX%016lX\n", VAR_7, VAR_7);
   return 1;
  }
 }

 return 0;
}
