
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ts_tokentype ;
typedef int int8 ;
typedef int int16 ;
struct TYPE_7__ {int (* gettoken ) (TYPE_1__*,int *,int*,char**,int *,int*) ;int buffer; } ;
typedef TYPE_1__* TSQueryParserState ;
typedef int (* PushFunction ) (int ,TYPE_1__*,char*,int,int ,int) ;
typedef int OperatorElement ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int *,int*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int*,char**,int *,int*) ;

__attribute__((used)) static void
FUNC_7(TSQueryParserState VAR_5,
  PushFunction VAR_6,
  Datum VAR_7)
{
 int8 VAR_8 = 0;
 ts_tokentype VAR_9;
 int VAR_10 = 0;
 char *VAR_11 = ((void*)0);
 OperatorElement VAR_12[VAR_4];
 int VAR_13 = 0;
 int16 VAR_14 = 0;
 bool VAR_15;


 FUNC_0();

 while ((VAR_9 = VAR_5->gettoken(VAR_5, &VAR_8,
           &VAR_10, &VAR_11,
           &VAR_14, &VAR_15)) != VAR_3)
 {
  switch (VAR_9)
  {
   case 128:
    VAR_6(VAR_7, VAR_5, VAR_11, VAR_10, VAR_14, VAR_15);
    break;
   case 129:
    FUNC_1(VAR_5, VAR_12, &VAR_13, VAR_8);
    FUNC_5(VAR_12, &VAR_13, VAR_8, VAR_14);
    break;
   case 130:
    FUNC_7(VAR_5, VAR_6, VAR_7);
    break;
   case 132:
    FUNC_1(VAR_5, VAR_12, &VAR_13, VAR_2 );
    return;
   case 131:
   default:
    FUNC_2(VAR_1,
      (FUNC_3(VAR_0),
       FUNC_4("syntax error in tsquery: \"%s\"",
        VAR_5->buffer)));
  }
 }

 FUNC_1(VAR_5, VAR_12, &VAR_13, VAR_2 );
}
