
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_11 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(void)
{
 static int VAR_12 = 0;

 char *VAR_13 = VAR_8 + VAR_10;
 char *VAR_14 = VAR_8 + VAR_9;

 while (VAR_13 < VAR_14)
 {
  int VAR_15;

  VAR_15 = FUNC_3(VAR_7, VAR_13, VAR_14 - VAR_13);

  if (VAR_15 <= 0)
  {
   if (VAR_11 == VAR_3)
    continue;





   if (VAR_11 == VAR_2 ||
    VAR_11 == VAR_5)
   {
    return 0;
   }
   if (VAR_11 != VAR_12)
   {
    VAR_12 = VAR_11;
    FUNC_0(VAR_0,
      (FUNC_1(),
       FUNC_2("could not send data to client: %m")));
   }







   VAR_10 = VAR_9 = 0;
   VAR_1 = 1;
   VAR_6 = 1;
   return VAR_4;
  }

  VAR_12 = 0;
  VAR_13 += VAR_15;
  VAR_10 += VAR_15;
 }

 VAR_10 = VAR_9 = 0;
 return 0;
}
