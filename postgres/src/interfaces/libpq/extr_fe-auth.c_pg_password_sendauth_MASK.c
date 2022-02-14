
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* pguser; int pversion; int errorMessage; } ;
typedef TYPE_1__ PGconn ;
typedef int AuthRequest ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*,char*,int,char*) ;
 scalar_t__ FUNC_5 (char*,int,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char,char const*,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int
FUNC_9(PGconn *VAR_2, const char *VAR_3, AuthRequest VAR_4)
{
 int VAR_5;
 char *VAR_6 = ((void*)0);
 const char *VAR_7;
 char VAR_8[4];


 if (VAR_4 == 129)
 {
  if (FUNC_5(VAR_8, 4, VAR_2))
   return VAR_1;
 }



 switch (VAR_4)
 {
  case 129:
   {
    char *VAR_9;


    VAR_6 = FUNC_3(2 * (VAR_0 + 1));
    if (!VAR_6)
    {
     FUNC_7(&VAR_2->errorMessage,
           FUNC_2("out of memory\n"));
     return VAR_1;
    }

    VAR_9 = VAR_6 + VAR_0 + 1;
    if (!FUNC_4(VAR_3, VAR_2->pguser,
         FUNC_8(VAR_2->pguser), VAR_9))
    {
     FUNC_1(VAR_6);
     return VAR_1;
    }
    if (!FUNC_4(VAR_9 + FUNC_8("md5"), VAR_8,
         4, VAR_6))
    {
     FUNC_1(VAR_6);
     return VAR_1;
    }

    VAR_7 = VAR_6;
    break;
   }
  case 128:
   VAR_7 = VAR_3;
   break;
  default:
   return VAR_1;
 }

 if (FUNC_0(VAR_2->pversion) >= 3)
  VAR_5 = FUNC_6(VAR_2, 'p', VAR_7, FUNC_8(VAR_7) + 1);
 else
  VAR_5 = FUNC_6(VAR_2, 0, VAR_7, FUNC_8(VAR_7) + 1);
 if (VAR_6)
  FUNC_1(VAR_6);
 return VAR_5;
}
