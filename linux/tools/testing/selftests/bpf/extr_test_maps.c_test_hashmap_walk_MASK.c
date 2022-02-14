
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,long long*,long long*) ;
 scalar_t__ FUNC_2 (int,long long*,long long*) ;
 scalar_t__ FUNC_3 (int,long long*,long long*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 1000;
 long long VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 1;

 VAR_3 = FUNC_5(VAR_5);

 for (VAR_4 = 0; FUNC_1(VAR_3, !VAR_4 ? ((void*)0) : &VAR_6,
      &VAR_8) == 0; VAR_4++) {
  VAR_6 = VAR_8;
  FUNC_0(FUNC_2(VAR_3, &VAR_6, &VAR_7) == 0);
 }

 FUNC_0(VAR_4 == VAR_5);

 FUNC_0(FUNC_1(VAR_3, ((void*)0), &VAR_6) == 0);
 for (VAR_4 = 0; VAR_9; VAR_4++) {
  VAR_9 = FUNC_1(VAR_3, &VAR_6, &VAR_8) == 0;
  FUNC_0(FUNC_2(VAR_3, &VAR_6, &VAR_7) == 0);
  VAR_7++;
  FUNC_0(FUNC_3(VAR_3, &VAR_6, &VAR_7, VAR_0) == 0);
  VAR_6 = VAR_8;
 }

 FUNC_0(VAR_4 == VAR_5);

 for (VAR_4 = 0; FUNC_1(VAR_3, !VAR_4 ? ((void*)0) : &VAR_6,
      &VAR_8) == 0; VAR_4++) {
  VAR_6 = VAR_8;
  FUNC_0(FUNC_2(VAR_3, &VAR_6, &VAR_7) == 0);
  FUNC_0(VAR_7 - 1 == VAR_6);
 }

 FUNC_0(VAR_4 == VAR_5);
 FUNC_4(VAR_3);
}
