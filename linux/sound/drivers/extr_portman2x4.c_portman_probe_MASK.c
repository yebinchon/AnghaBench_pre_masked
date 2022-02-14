
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*,scalar_t__) ;
 int FUNC_2 (struct parport*,int ) ;

__attribute__((used)) static int FUNC_3(struct parport *VAR_5)
{




 FUNC_2(VAR_5, 0);
 FUNC_1(VAR_5, 0);



 FUNC_1(VAR_5, VAR_1);



 if ((FUNC_0(VAR_5) & VAR_0) == VAR_0)
  return 1;



 FUNC_1(VAR_5, VAR_1 + VAR_2);


 if ((FUNC_0(VAR_5) & VAR_0) != VAR_0)
  return 1;


 FUNC_1(VAR_5, 0);





 FUNC_1(VAR_5, VAR_3);





 if ((FUNC_0(VAR_5) & VAR_4) == 0)
  return 2;


 return 0;
}
