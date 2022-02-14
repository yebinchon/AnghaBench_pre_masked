
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef int old_file ;
typedef int new_file ;
typedef int extent_suffix ;
struct TYPE_5__ {int transfer_mode; } ;
struct TYPE_4__ {char* old_tablespace; int old_tablespace_suffix; int old_db_oid; char* old_relfilenode; char* new_tablespace; int new_tablespace_suffix; int new_db_oid; char* new_relfilenode; int relname; int nspname; } ;
typedef TYPE_1__ FileNameMap ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (char*,char*,int ,int ) ;
 int FUNC_1 (char*,char*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ,char*,char*,int ) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (char*,char*,int ,int ) ;
 int FUNC_6 (char*,int,char*,...) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void
FUNC_11(FileNameMap *VAR_6, const char *VAR_7, bool VAR_8)
{
 char VAR_9[VAR_1];
 char VAR_10[VAR_1];
 int VAR_11;
 char VAR_12[65];
 struct stat VAR_13;






 for (VAR_11 = 0;; VAR_11++)
 {
  if (VAR_11 == 0)
   VAR_12[0] = '\0';
  else
   FUNC_6(VAR_12, sizeof(VAR_12), ".%d", VAR_11);

  FUNC_6(VAR_9, sizeof(VAR_9), "%s%s/%u/%u%s%s",
     VAR_6->old_tablespace,
     VAR_6->old_tablespace_suffix,
     VAR_6->old_db_oid,
     VAR_6->old_relfilenode,
     VAR_7,
     VAR_12);
  FUNC_6(VAR_10, sizeof(VAR_10), "%s%s/%u/%u%s%s",
     VAR_6->new_tablespace,
     VAR_6->new_tablespace_suffix,
     VAR_6->new_db_oid,
     VAR_6->new_relfilenode,
     VAR_7,
     VAR_12);


  if (VAR_7[0] != '\0' || VAR_11 != 0)
  {

   if (FUNC_7(VAR_9, &VAR_13) != 0)
   {

    if (VAR_4 == VAR_0)
     return;
    else
     FUNC_3("error while checking for file existence \"%s.%s\" (\"%s\" to \"%s\"): %s\n",
        VAR_6->nspname, VAR_6->relname, VAR_9, VAR_10,
        FUNC_9(VAR_4));
   }


   if (VAR_13.st_size == 0)
    return;
  }

  FUNC_10(VAR_10);


  FUNC_4(VAR_2, "%s", VAR_9);

  if (VAR_8 && FUNC_8(VAR_7, "_vm") == 0)
  {

   FUNC_4(VAR_3, "rewriting \"%s\" to \"%s\"\n",
       VAR_9, VAR_10);
   FUNC_5(VAR_9, VAR_10, VAR_6->nspname, VAR_6->relname);
  }
  else
   switch (VAR_5.transfer_mode)
   {
    case 130:
     FUNC_4(VAR_3, "cloning \"%s\" to \"%s\"\n",
         VAR_9, VAR_10);
     FUNC_0(VAR_9, VAR_10, VAR_6->nspname, VAR_6->relname);
     break;
    case 129:
     FUNC_4(VAR_3, "copying \"%s\" to \"%s\"\n",
         VAR_9, VAR_10);
     FUNC_1(VAR_9, VAR_10, VAR_6->nspname, VAR_6->relname);
     break;
    case 128:
     FUNC_4(VAR_3, "linking \"%s\" to \"%s\"\n",
         VAR_9, VAR_10);
     FUNC_2(VAR_9, VAR_10, VAR_6->nspname, VAR_6->relname);
   }
 }
}
