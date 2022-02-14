
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(void)
{
 if (VAR_7 > 0)
 {
  if (VAR_6 > VAR_7)
  {

   FUNC_3(VAR_5, VAR_5 + VAR_7,
     VAR_6 - VAR_7);
   VAR_6 -= VAR_7;
   VAR_7 = 0;
  }
  else
   VAR_6 = VAR_7 = 0;
 }


 FUNC_5(0);


 for (;;)
 {
  int VAR_9;

  VAR_9 = FUNC_4(VAR_3, VAR_5 + VAR_6,
      VAR_4 - VAR_6);

  if (VAR_9 < 0)
  {
   if (VAR_8 == VAR_1)
    continue;






   FUNC_0(VAR_0,
     (FUNC_1(),
      FUNC_2("could not receive data from client: %m")));
   return VAR_2;
  }
  if (VAR_9 == 0)
  {




   return VAR_2;
  }

  VAR_6 += VAR_9;
  return 0;
 }
}
