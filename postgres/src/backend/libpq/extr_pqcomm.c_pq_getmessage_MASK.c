
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {char* data; int len; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (char*,int) ;
 int FUNC_12 (TYPE_1__*) ;

int
FUNC_13(StringInfo VAR_4, int VAR_5)
{
 int32 VAR_6;

 FUNC_0(VAR_3);

 FUNC_12(VAR_4);


 if (FUNC_11((char *) &VAR_6, 4) == VAR_1)
 {
  FUNC_6(VAR_0,
    (FUNC_7(VAR_2),
     FUNC_8("unexpected EOF within message length word")));
  return VAR_1;
 }

 VAR_6 = FUNC_9(VAR_6);

 if (VAR_6 < 4 ||
  (VAR_5 > 0 && VAR_6 > VAR_5))
 {
  FUNC_6(VAR_0,
    (FUNC_7(VAR_2),
     FUNC_8("invalid message length")));
  return VAR_1;
 }

 VAR_6 -= 4;

 if (VAR_6 > 0)
 {





  FUNC_4();
  {
   FUNC_5(VAR_4, VAR_6);
  }
  FUNC_1();
  {
   if (FUNC_10(VAR_6) == VAR_1)
    FUNC_6(VAR_0,
      (FUNC_7(VAR_2),
       FUNC_8("incomplete message from client")));


   VAR_3 = 0;
   FUNC_3();
  }
  FUNC_2();


  if (FUNC_11(VAR_4->data, VAR_6) == VAR_1)
  {
   FUNC_6(VAR_0,
     (FUNC_7(VAR_2),
      FUNC_8("incomplete message from client")));
   return VAR_1;
  }
  VAR_4->len = VAR_6;

  VAR_4->data[VAR_6] = '\0';
 }


 VAR_3 = 0;

 return 0;
}
