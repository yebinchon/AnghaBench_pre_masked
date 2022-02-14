
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int*) ;
 scalar_t__ FUNC_2 (int,int*,int*,int ) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_4, void *VAR_5)
{
 int VAR_6 = ((int *)VAR_5)[1];
 int VAR_7 = ((int *)VAR_5)[0];
 int VAR_8, VAR_9, VAR_10;

 for (VAR_8 = VAR_4; VAR_8 < VAR_2; VAR_8 += VAR_3) {
  VAR_9 = VAR_10 = VAR_8;

  if (VAR_6) {
   FUNC_0(FUNC_2(VAR_7, &VAR_9, &VAR_10,
         VAR_1) == 0);
   FUNC_0(FUNC_2(VAR_7, &VAR_9, &VAR_10,
         VAR_0) == 0);
  } else {
   FUNC_0(FUNC_1(VAR_7, &VAR_9) == 0);
  }
 }
}
