
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,unsigned long long*,unsigned long long*) ;
 scalar_t__ FUNC_2 (int,unsigned long long*,unsigned long long*,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,unsigned int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(int VAR_2, void *VAR_3)
{
 const unsigned int VAR_4 = 1000;
 const unsigned int VAR_5 = 100000;

 int VAR_6 = *(int *)VAR_3;
 unsigned long long VAR_7;
 unsigned long long VAR_8, VAR_9[VAR_1];
 unsigned long long VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;

 VAR_7 = VAR_2 * VAR_5 * 2 + 1;
 VAR_10 = VAR_7;
 VAR_9[0] = 1234;
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  FUNC_0(FUNC_2(VAR_6, &VAR_10, VAR_9,
           VAR_0) == 0);
  VAR_10++;
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  int VAR_13;

  VAR_13 = FUNC_4();

  if (VAR_13 % 10) {
   VAR_8 = VAR_13 % VAR_4 + VAR_7;
   FUNC_1(VAR_6, &VAR_8, VAR_9);
  } else {
   FUNC_2(VAR_6, &VAR_10, VAR_9,
     VAR_0);
   VAR_10++;
  }
 }

 VAR_8 = VAR_7;
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (FUNC_1(VAR_6, &VAR_8, VAR_9))
   VAR_11++;
  VAR_8++;
 }

 FUNC_3("    task:%d nr_losses:%u\n", VAR_2, VAR_11);
}
