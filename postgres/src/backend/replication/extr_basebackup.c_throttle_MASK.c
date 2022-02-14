
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimeOffset ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int,long,int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static void
FUNC_4(size_t VAR_9)
{
 TimeOffset VAR_10;

 if (VAR_7 < 0)
  return;

 VAR_7 += VAR_9;
 if (VAR_7 < VAR_8)
  return;


 VAR_10 = VAR_5 *
  (VAR_7 / VAR_8);





 for (;;)
 {
  TimeOffset VAR_11,
     VAR_12;
  int VAR_13;


  VAR_11 = FUNC_1() - VAR_6;


  VAR_12 = VAR_10 - VAR_11;
  if (VAR_12 <= 0)
   break;

  FUNC_2(VAR_0);


  FUNC_0();





  VAR_13 = FUNC_3(VAR_0,
        VAR_3 | VAR_4 | VAR_2,
        (long) (VAR_12 / 1000),
        VAR_1);

  if (VAR_13 & VAR_3)
   FUNC_0();


  if (VAR_13 & VAR_4)
   break;
 }





 VAR_7 %= VAR_8;





 VAR_6 = FUNC_1();
}
