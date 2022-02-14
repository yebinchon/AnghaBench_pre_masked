
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* name; char* value; struct TYPE_5__* next; } ;
typedef TYPE_1__ pgParameterStatus ;
struct TYPE_6__ {scalar_t__ client_encoding; int std_strings; int sversion; TYPE_1__* pstatus; scalar_t__ Pfdebug; } ;
typedef TYPE_2__ PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,char const*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*,int*,int*,int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

void
FUNC_8(PGconn *VAR_3, const char *VAR_4, const char *VAR_5)
{
 pgParameterStatus *VAR_6;
 pgParameterStatus *VAR_7;

 if (VAR_3->Pfdebug)
  FUNC_0(VAR_3->Pfdebug, "pqSaveParameterStatus: '%s' = '%s'\n",
    VAR_4, VAR_5);




 for (VAR_6 = VAR_3->pstatus, VAR_7 = ((void*)0);
   VAR_6 != ((void*)0);
   VAR_7 = VAR_6, VAR_6 = VAR_6->next)
 {
  if (FUNC_5(VAR_6->name, VAR_4) == 0)
  {
   if (VAR_7)
    VAR_7->next = VAR_6->next;
   else
    VAR_3->pstatus = VAR_6->next;
   FUNC_1(VAR_6);
   break;
  }
 }




 VAR_6 = (pgParameterStatus *) FUNC_2(sizeof(pgParameterStatus) +
             FUNC_7(VAR_4) + FUNC_7(VAR_5) + 2);
 if (VAR_6)
 {
  char *VAR_8;

  VAR_8 = ((char *) VAR_6) + sizeof(pgParameterStatus);
  VAR_6->name = VAR_8;
  FUNC_6(VAR_8, VAR_4);
  VAR_8 += FUNC_7(VAR_4) + 1;
  VAR_6->value = VAR_8;
  FUNC_6(VAR_8, VAR_5);
  VAR_6->next = VAR_3->pstatus;
  VAR_3->pstatus = VAR_6;
 }
 if (FUNC_5(VAR_4, "client_encoding") == 0)
 {
  VAR_3->client_encoding = FUNC_3(VAR_5);

  if (VAR_3->client_encoding < 0)
   VAR_3->client_encoding = VAR_0;
  VAR_1 = VAR_3->client_encoding;
 }
 else if (FUNC_5(VAR_4, "standard_conforming_strings") == 0)
 {
  VAR_3->std_strings = (FUNC_5(VAR_5, "on") == 0);
  VAR_2 = VAR_3->std_strings;
 }
 else if (FUNC_5(VAR_4, "server_version") == 0)
 {
  int VAR_9;
  int VAR_10,
     VAR_11,
     VAR_12;

  VAR_9 = FUNC_4(VAR_5, "%d.%d.%d", &VAR_10, &VAR_11, &VAR_12);

  if (VAR_9 == 3)
  {

   VAR_3->sversion = (100 * VAR_10 + VAR_11) * 100 + VAR_12;
  }
  else if (VAR_9 == 2)
  {
   if (VAR_10 >= 10)
   {

    VAR_3->sversion = 100 * 100 * VAR_10 + VAR_11;
   }
   else
   {

    VAR_3->sversion = (100 * VAR_10 + VAR_11) * 100;
   }
  }
  else if (VAR_9 == 1)
  {

   VAR_3->sversion = 100 * 100 * VAR_10;
  }
  else
   VAR_3->sversion = 0;
 }
}
