
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char const* name; } ;
struct TYPE_10__ {int * argtypes; TYPE_1__ dobj; } ;
struct TYPE_9__ {char* data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int Oid ;
typedef TYPE_3__ FuncInfo ;
typedef int Archive ;





 int FUNC_0 (TYPE_2__*,char*,char*,...) ;
 int FUNC_1 (TYPE_2__*,char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_8(Archive *VAR_1,
         FuncInfo *VAR_2, int VAR_3,
         char **VAR_4,
         char **VAR_5,
         char **VAR_6)
{
 PQExpBufferData VAR_7;
 int VAR_8;

 FUNC_6(&VAR_7);
 FUNC_0(&VAR_7, "%s(", FUNC_3(VAR_2->dobj.name));
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
 {
  Oid VAR_9;
  char *VAR_10;
  const char *VAR_11;
  const char *VAR_12;

  VAR_9 = VAR_4 ? FUNC_2(VAR_4[VAR_8]) : VAR_2->argtypes[VAR_8];
  VAR_10 = FUNC_5(VAR_1, VAR_9, VAR_0);

  if (VAR_5)
  {
   switch (VAR_5[VAR_8][0])
   {
    case 130:
     VAR_11 = "";
     break;
    case 128:
     VAR_11 = "OUT ";
     break;
    case 129:
     VAR_11 = "INOUT ";
     break;
    default:
     FUNC_7("bogus value in proargmodes array");
     VAR_11 = "";
     break;
   }
  }
  else
   VAR_11 = "";

  VAR_12 = VAR_6 ? VAR_6[VAR_8] : (char *) ((void*)0);
  if (VAR_12 && VAR_12[0] == '\0')
   VAR_12 = ((void*)0);

  FUNC_0(&VAR_7, "%s%s%s%s%s",
        (VAR_8 > 0) ? ", " : "",
        VAR_11,
        VAR_12 ? FUNC_3(VAR_12) : "",
        VAR_12 ? " " : "",
        VAR_10);
  FUNC_4(VAR_10);
 }
 FUNC_1(&VAR_7, ')');
 return VAR_7.data;
}
