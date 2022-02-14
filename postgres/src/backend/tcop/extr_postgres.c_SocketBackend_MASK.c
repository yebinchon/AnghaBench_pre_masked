
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_9 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int VAR_10 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_13(StringInfo VAR_12)
{
 int VAR_13;




 FUNC_1();
 FUNC_12();
 VAR_13 = FUNC_9();

 if (VAR_13 == VAR_3)
 {
  if (FUNC_2())
   FUNC_5(VAR_0,
     (FUNC_6(VAR_5),
      FUNC_7("unexpected EOF on client connection with an open transaction")));
  else
  {





   VAR_11 = VAR_2;
   FUNC_5(VAR_1,
     (FUNC_6(VAR_4),
      FUNC_7("unexpected EOF on client connection")));
  }
  return VAR_13;
 }
 switch (VAR_13)
 {
  case 'Q':
   VAR_9 = 0;
   if (FUNC_3(VAR_8) < 3)
   {

    if (FUNC_11(VAR_12))
    {
     if (FUNC_2())
      FUNC_5(VAR_0,
        (FUNC_6(VAR_5),
         FUNC_7("unexpected EOF on client connection with an open transaction")));
     else
     {





      VAR_11 = VAR_2;
      FUNC_5(VAR_1,
        (FUNC_6(VAR_4),
         FUNC_7("unexpected EOF on client connection")));
     }
     return VAR_3;
    }
   }
   break;

  case 'F':
   VAR_9 = 0;
   if (FUNC_3(VAR_8) < 3)
   {
    if (FUNC_0(VAR_12))
    {
     if (FUNC_2())
      FUNC_5(VAR_0,
        (FUNC_6(VAR_5),
         FUNC_7("unexpected EOF on client connection with an open transaction")));
     else
     {





      VAR_11 = VAR_2;
      FUNC_5(VAR_1,
        (FUNC_6(VAR_4),
         FUNC_7("unexpected EOF on client connection")));
     }
     return VAR_3;
    }
   }
   break;

  case 'X':
   VAR_9 = 0;
   VAR_10 = 0;
   break;

  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'H':
  case 'P':
   VAR_9 = 1;

   if (FUNC_3(VAR_8) < 3)
    FUNC_5(VAR_7,
      (FUNC_6(VAR_6),
       FUNC_7("invalid frontend message type %d", VAR_13)));
   break;

  case 'S':

   VAR_10 = 0;

   VAR_9 = 0;

   if (FUNC_3(VAR_8) < 3)
    FUNC_5(VAR_7,
      (FUNC_6(VAR_6),
       FUNC_7("invalid frontend message type %d", VAR_13)));
   break;

  case 'd':
  case 'c':
  case 'f':
   VAR_9 = 0;

   if (FUNC_3(VAR_8) < 3)
    FUNC_5(VAR_7,
      (FUNC_6(VAR_6),
       FUNC_7("invalid frontend message type %d", VAR_13)));
   break;

  default:






   FUNC_5(VAR_7,
     (FUNC_6(VAR_6),
      FUNC_7("invalid frontend message type %d", VAR_13)));
   break;
 }






 if (FUNC_3(VAR_8) >= 3)
 {
  if (FUNC_10(VAR_12, 0))
   return VAR_3;
 }
 else
  FUNC_8();
 FUNC_4();

 return VAR_13;
}
