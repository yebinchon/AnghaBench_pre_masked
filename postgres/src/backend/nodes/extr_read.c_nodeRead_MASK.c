
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef scalar_t__ NodeTag ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;


 int * VAR_1 ;






 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int *,void*) ;
 int * FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*,char const*,int) ;
 scalar_t__ FUNC_11 (char const*,int) ;
 char* FUNC_12 (int) ;
 int * FUNC_13 () ;
 char* FUNC_14 (int*) ;
 scalar_t__ FUNC_15 (char const*,char**,int) ;
 int FUNC_16 (char const*,char**,int) ;

void *
FUNC_17(const char *VAR_2, int VAR_3)
{
 Node *VAR_4;
 NodeTag VAR_5;

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = FUNC_14(&VAR_3);

  if (VAR_2 == ((void*)0))
   return ((void*)0);
 }

 VAR_5 = FUNC_11(VAR_2, VAR_3);

 switch ((int) VAR_5)
 {
  case 135:
   VAR_4 = FUNC_13();
   VAR_2 = FUNC_14(&VAR_3);
   if (VAR_2 == ((void*)0) || VAR_2[0] != '}')
    FUNC_2(VAR_0, "did not find '}' at end of input node");
   break;
  case 134:
   {
    List *VAR_6 = VAR_1;







    VAR_2 = FUNC_14(&VAR_3);
    if (VAR_2 == ((void*)0))
     FUNC_2(VAR_0, "unterminated List structure");
    if (VAR_3 == 1 && VAR_2[0] == 'i')
    {

     for (;;)
     {
      int VAR_7;
      char *VAR_8;

      VAR_2 = FUNC_14(&VAR_3);
      if (VAR_2 == ((void*)0))
       FUNC_2(VAR_0, "unterminated List structure");
      if (VAR_2[0] == ')')
       break;
      VAR_7 = (int) FUNC_15(VAR_2, &VAR_8, 10);
      if (VAR_8 != VAR_2 + VAR_3)
       FUNC_2(VAR_0, "unrecognized integer: \"%.*s\"",
         VAR_3, VAR_2);
      VAR_6 = FUNC_4(VAR_6, VAR_7);
     }
    }
    else if (VAR_3 == 1 && VAR_2[0] == 'o')
    {

     for (;;)
     {
      Oid VAR_9;
      char *VAR_10;

      VAR_2 = FUNC_14(&VAR_3);
      if (VAR_2 == ((void*)0))
       FUNC_2(VAR_0, "unterminated List structure");
      if (VAR_2[0] == ')')
       break;
      VAR_9 = (Oid) FUNC_16(VAR_2, &VAR_10, 10);
      if (VAR_10 != VAR_2 + VAR_3)
       FUNC_2(VAR_0, "unrecognized OID: \"%.*s\"",
         VAR_3, VAR_2);
      VAR_6 = FUNC_5(VAR_6, VAR_9);
     }
    }
    else
    {

     for (;;)
     {

      if (VAR_2[0] == ')')
       break;
      VAR_6 = FUNC_3(VAR_6, FUNC_17(VAR_2, VAR_3));
      VAR_2 = FUNC_14(&VAR_3);
      if (VAR_2 == ((void*)0))
       FUNC_2(VAR_0, "unterminated List structure");
     }
    }
    VAR_4 = (Node *) VAR_6;
    break;
   }
  case 132:
   FUNC_2(VAR_0, "unexpected right parenthesis");
   VAR_4 = ((void*)0);
   break;
  case 133:
   if (VAR_3 == 0)
   {

    VAR_4 = ((void*)0);
   }
   else
   {
    FUNC_2(VAR_0, "unrecognized token: \"%.*s\"", VAR_3, VAR_2);
    VAR_4 = ((void*)0);
   }
   break;
  case 129:




   VAR_4 = (Node *) FUNC_8(FUNC_0(VAR_2));
   break;
  case 130:
   {
    char *VAR_11 = (char *) FUNC_12(VAR_3 + 1);

    FUNC_10(VAR_11, VAR_2, VAR_3);
    VAR_11[VAR_3] = '\0';
    VAR_4 = (Node *) FUNC_7(VAR_11);
   }
   break;
  case 128:

   VAR_4 = (Node *) FUNC_9(FUNC_1(VAR_2 + 1, VAR_3 - 2));
   break;
  case 131:
   {
    char *VAR_12 = FUNC_12(VAR_3);


    FUNC_10(VAR_12, VAR_2 + 1, VAR_3 - 1);
    VAR_12[VAR_3 - 1] = '\0';
    VAR_4 = (Node *) FUNC_6(VAR_12);
    break;
   }
  default:
   FUNC_2(VAR_0, "unrecognized node type: %d", (int) VAR_5);
   VAR_4 = ((void*)0);
   break;
 }

 return (void *) VAR_4;
}
