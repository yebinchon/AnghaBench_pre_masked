
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* old_dir; char* new_dir; struct TYPE_3__* next; } ;
typedef TYPE_1__ TablespaceListCell ;
struct TYPE_4__ {TYPE_1__* tail; TYPE_1__* head; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{
 TablespaceListCell *VAR_3 = (TablespaceListCell *) FUNC_4(sizeof(TablespaceListCell));
 char *VAR_4;
 char *VAR_5;
 const char *VAR_6;

 VAR_5 = VAR_4 = VAR_3->old_dir;
 for (VAR_6 = VAR_2; *VAR_6; VAR_6++)
 {
  if (VAR_5 - VAR_4 >= VAR_0)
  {
   FUNC_3("directory name too long");
   FUNC_1(1);
  }

  if (*VAR_6 == '\\' && *(VAR_6 + 1) == '=')
   ;
  else if (*VAR_6 == '=' && (VAR_6 == VAR_2 || *(VAR_6 - 1) != '\\'))
  {
   if (*VAR_3->new_dir)
   {
    FUNC_3("multiple \"=\" signs in tablespace mapping");
    FUNC_1(1);
   }
   else
    VAR_4 = VAR_5 = VAR_3->new_dir;
  }
  else
   *VAR_5++ = *VAR_6;
 }

 if (!*VAR_3->old_dir || !*VAR_3->new_dir)
 {
  FUNC_3("invalid tablespace mapping format \"%s\", must be \"OLDDIR=NEWDIR\"", VAR_2);
  FUNC_1(1);
 }







 if (!FUNC_2(VAR_3->old_dir))
 {
  FUNC_3("old directory is not an absolute path in tablespace mapping: %s",
      VAR_3->old_dir);
  FUNC_1(1);
 }

 if (!FUNC_2(VAR_3->new_dir))
 {
  FUNC_3("new directory is not an absolute path in tablespace mapping: %s",
      VAR_3->new_dir);
  FUNC_1(1);
 }






 FUNC_0(VAR_3->old_dir);
 FUNC_0(VAR_3->new_dir);

 if (VAR_1.tail)
  VAR_1.tail->next = VAR_3;
 else
  VAR_1.head = VAR_3;
 VAR_1.tail = VAR_3;
}
