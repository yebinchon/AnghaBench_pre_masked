
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__*,long*,int ) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1(int VAR_5)
{
 int VAR_6 = VAR_3[VAR_1];
 uint32_t VAR_7;
 long VAR_8 = 1;
 int VAR_9;

 if (VAR_4 > VAR_2)
  VAR_2 = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_9 = FUNC_0(VAR_6, &VAR_7, &VAR_8, VAR_0);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
