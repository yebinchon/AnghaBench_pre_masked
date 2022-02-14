
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64 ;
typedef size_t int64 ;


 char* FUNC_0 (int,int) ;
 char* FUNC_1 (char*) ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(uint64 VAR_1)
{
 int64 VAR_2 = 31,
    VAR_3;
 char *VAR_4 = FUNC_1("< us");
 char *VAR_5 = FUNC_1("% of total");
 char *VAR_6 = FUNC_1("count");
 int VAR_7 = FUNC_3(VAR_4);
 int VAR_8 = FUNC_3(VAR_5);
 int VAR_9 = FUNC_3(VAR_6);


 while (VAR_2 > 0 && VAR_0[VAR_2] == 0)
  VAR_2--;

 FUNC_2(FUNC_1("Histogram of timing durations:\n"));
 FUNC_2("%*s   %*s %*s\n",
     FUNC_0(6, VAR_7), VAR_4,
     FUNC_0(10, VAR_8), VAR_5,
     FUNC_0(10, VAR_9), VAR_6);

 for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++)
  FUNC_2("%*ld    %*.5f %*lld\n",
      FUNC_0(6, VAR_7), 1l << VAR_3,
      FUNC_0(10, VAR_8) - 1, (double) VAR_0[VAR_3] * 100 / VAR_1,
      FUNC_0(10, VAR_9), VAR_0[VAR_3]);
}
