
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int QueuePosition ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int volatile) ;
 int FUNC_3 (int volatile) ;
 int FUNC_4 (int volatile,int,int) ;

__attribute__((used)) static bool
FUNC_5(volatile QueuePosition *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_3(*VAR_3);
 int VAR_6 = FUNC_2(*VAR_3);
 bool VAR_7 = 0;





 VAR_6 += VAR_4;
 FUNC_0(VAR_6 <= VAR_2);






 if (VAR_6 + FUNC_1(VAR_0) > VAR_2)
 {
  VAR_5++;
  if (VAR_5 > VAR_1)
   VAR_5 = 0;
  VAR_6 = 0;
  VAR_7 = 1;
 }

 FUNC_4(*VAR_3, VAR_5, VAR_6);
 return VAR_7;
}
