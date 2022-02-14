
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_ ;
typedef int _TCHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned int,int *,...) ;
 int FUNC_2 (int) ;
 int ** VAR_0 ;
 int ** VAR_1 ;
 scalar_t__* VAR_2 ;

void FUNC_3
(
 uint64_ VAR_3,
 uint64_ VAR_4,
 _TCHAR * VAR_5,
 int VAR_6
)
{
 uint64_ VAR_7 = VAR_3 / VAR_2[VAR_6];
 uint64_ VAR_8 = VAR_3 % VAR_2[VAR_6];

 FUNC_2(VAR_7 <= (~((uint64_)0)));

 if(VAR_8 == 0)
 {


  if(VAR_4 == 0)
  {

   FUNC_1
   (
    FUNC_0("%u %s"),
    (unsigned)VAR_7,
    (VAR_7 == 1 ? VAR_1 : VAR_0)[VAR_6]
   );
  }
  else
  {

   FUNC_2(*VAR_5);


   FUNC_1
   (
    FUNC_0("%u %s %s %u %s"),
    (unsigned)VAR_4,
    VAR_5,
    FUNC_0("and"),
    (unsigned)VAR_7,
    (VAR_7 == 1 ? VAR_1 : VAR_0)[VAR_6]
   );
  }
 }
 else if(VAR_7 != 0)
 {


  if(VAR_4 != 0)
  {

   FUNC_2(*VAR_5);
   FUNC_1(FUNC_0("%u %s, "), (unsigned)VAR_4, VAR_5);
  }


  FUNC_3
  (
   VAR_8,
   VAR_7,
   (VAR_7 == 1 ? VAR_1 : VAR_0)[VAR_6],
   VAR_6 + 1
  );
 }
 else
 {




  FUNC_3(VAR_8, VAR_4, VAR_5, VAR_6 + 1);
 }
}
