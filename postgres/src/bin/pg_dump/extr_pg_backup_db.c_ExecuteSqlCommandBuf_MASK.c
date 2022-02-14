
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ outputKind; int connection; scalar_t__ pgCopyIn; } ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (TYPE_1__*,char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,char const*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*,size_t) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 scalar_t__ FUNC_7 (size_t) ;

int
FUNC_8(Archive *VAR_2, const char *VAR_3, size_t VAR_4)
{
 ArchiveHandle *VAR_5 = (ArchiveHandle *) VAR_2;

 if (VAR_5->outputKind == VAR_0)
 {







  if (VAR_5->pgCopyIn &&
   FUNC_3(VAR_5->connection, VAR_3, VAR_4) <= 0)
   FUNC_4("error returned by PQputCopyData: %s",
      FUNC_2(VAR_5->connection));
 }
 else if (VAR_5->outputKind == VAR_1)
 {




  FUNC_0(VAR_5, VAR_3, VAR_4);
 }
 else
 {







  if (VAR_3[VAR_4] == '\0')
   FUNC_1(VAR_5, VAR_3, "could not execute query");
  else
  {
   char *VAR_6 = (char *) FUNC_7(VAR_4 + 1);

   FUNC_6(VAR_6, VAR_3, VAR_4);
   VAR_6[VAR_4] = '\0';
   FUNC_1(VAR_5, VAR_6, "could not execute query");
   FUNC_5(VAR_6);
  }
 }

 return VAR_4;
}
