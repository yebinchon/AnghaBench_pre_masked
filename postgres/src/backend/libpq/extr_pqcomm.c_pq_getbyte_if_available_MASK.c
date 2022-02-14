
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int) ;

int
FUNC_6(unsigned char *VAR_11)
{
 int VAR_12;

 FUNC_0(VAR_6);

 if (VAR_9 < VAR_8)
 {
  *VAR_11 = VAR_7[VAR_9++];
  return 1;
 }


 FUNC_5(1);

 VAR_12 = FUNC_4(VAR_5, VAR_11, 1);
 if (VAR_12 < 0)
 {





  if (VAR_10 == VAR_1 || VAR_10 == VAR_4 || VAR_10 == VAR_2)
   VAR_12 = 0;
  else
  {





   FUNC_1(VAR_0,
     (FUNC_2(),
      FUNC_3("could not receive data from client: %m")));
   VAR_12 = VAR_3;
  }
 }
 else if (VAR_12 == 0)
 {

  VAR_12 = VAR_3;
 }

 return VAR_12;
}
