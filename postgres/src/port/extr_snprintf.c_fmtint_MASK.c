
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int convert ;
typedef int PrintfTarget ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int,int,int*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int,int,int*,int *) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static void
FUNC_7(long long VAR_0, char VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5, int VAR_6, int VAR_7,
    PrintfTarget *VAR_8)
{
 unsigned long long VAR_9;
 unsigned long long VAR_10;
 int VAR_11;
 const char *VAR_12 = "0123456789abcdef";
 int VAR_13 = 0;
 char VAR_14[64];
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;

 switch (VAR_1)
 {
  case 'd':
  case 'i':
   VAR_9 = 10;
   VAR_11 = 1;
   break;
  case 'o':
   VAR_9 = 8;
   VAR_11 = 0;
   break;
  case 'u':
   VAR_9 = 10;
   VAR_11 = 0;
   break;
  case 'x':
   VAR_9 = 16;
   VAR_11 = 0;
   break;
  case 'X':
   VAR_12 = "0123456789ABCDEF";
   VAR_9 = 16;
   VAR_11 = 0;
   break;
  default:
   return;
 }







 if (VAR_11 && FUNC_1((VAR_0 < 0), VAR_2, &VAR_13))
  VAR_10 = -(unsigned long long) VAR_0;
 else
  VAR_10 = (unsigned long long) VAR_0;
 if (VAR_0 == 0 && VAR_7 && VAR_6 == 0)
  VAR_15 = 0;
 else
 {

  do
  {
   VAR_14[sizeof(VAR_14) - (++VAR_15)] = VAR_12[VAR_10 % VAR_9];
   VAR_10 = VAR_10 / VAR_9;
  } while (VAR_10);
 }

 VAR_17 = FUNC_0(0, VAR_6 - VAR_15);

 VAR_16 = FUNC_2(VAR_4, VAR_15 + VAR_17, VAR_3);

 FUNC_5(VAR_5, VAR_13, &VAR_16, VAR_8);

 if (VAR_17 > 0)
  FUNC_3('0', VAR_17, VAR_8);

 FUNC_4(VAR_14 + sizeof(VAR_14) - VAR_15, VAR_15, VAR_8);

 FUNC_6(VAR_16, VAR_8);
}
