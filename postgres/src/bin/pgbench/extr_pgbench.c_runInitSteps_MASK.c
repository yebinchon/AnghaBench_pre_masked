
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_6__ {char* data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGconn ;


 double FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,char*,double) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,char const,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *) ;
 int VAR_0 ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_18(const char *VAR_1)
{
 PQExpBufferData VAR_2;
 PGconn *VAR_3;
 const char *VAR_4;
 double VAR_5 = 0.0;
 bool VAR_6 = 1;

 FUNC_15(&VAR_2);

 if ((VAR_3 = FUNC_6()) == ((void*)0))
  FUNC_7(1);

 for (VAR_4 = VAR_1; *VAR_4 != '\0'; VAR_4++)
 {
  instr_time VAR_7;
  char *VAR_8 = ((void*)0);

  FUNC_1(VAR_7);

  switch (*VAR_4)
  {
   case 'd':
    VAR_8 = "drop tables";
    FUNC_12(VAR_3);
    break;
   case 't':
    VAR_8 = "create tables";
    FUNC_11(VAR_3);
    break;
   case 'g':
    VAR_8 = "client-side generate";
    FUNC_13(VAR_3);
    break;
   case 'G':
    VAR_8 = "server-side generate";
    FUNC_14(VAR_3);
    break;
   case 'v':
    VAR_8 = "vacuum";
    FUNC_16(VAR_3);
    break;
   case 'p':
    VAR_8 = "primary keys";
    FUNC_10(VAR_3);
    break;
   case 'f':
    VAR_8 = "foreign keys";
    FUNC_9(VAR_3);
    break;
   case ' ':
    break;
   default:
    FUNC_8(VAR_0, "unrecognized initialization step \"%c\"\n",
      *VAR_4);
    FUNC_3(VAR_3);
    FUNC_7(1);
  }

  if (VAR_8 != ((void*)0))
  {
   instr_time VAR_9;
   double VAR_10;

   FUNC_1(VAR_9);
   FUNC_2(VAR_9, VAR_7);
   VAR_10 = FUNC_0(VAR_9);

   if (!VAR_6)
    FUNC_5(&VAR_2, ", ");
   else
    VAR_6 = 0;

   FUNC_4(&VAR_2, "%s %.2f s", VAR_8, VAR_10);

   VAR_5 += VAR_10;
  }
 }

 FUNC_8(VAR_0, "done in %c s (%s).\n", VAR_5, VAR_2.data);
 FUNC_3(VAR_3);
 FUNC_17(&VAR_2);
}
