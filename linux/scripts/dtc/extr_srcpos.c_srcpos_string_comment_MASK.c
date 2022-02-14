
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcpos {char* first_line; char* last_line; struct srcpos* next; int last_column; int first_column; TYPE_1__* file; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char**,char*,...) ;

__attribute__((used)) static char *
FUNC_3(struct srcpos *VAR_0, bool VAR_1, int VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 bool VAR_7 = 0;

 if (!VAR_0) {
  if (VAR_2 > 1) {
   FUNC_2(&VAR_3, "<no-file>:<no-line>");
   return VAR_3;
  } else {
   return ((void*)0);
  }
 }

 if (!VAR_0->file)
  VAR_4 = "<no-file>";
 else if (!VAR_0->file->name)
  VAR_4 = "<no-filename>";
 else if (VAR_2 > 1)
  VAR_4 = VAR_0->file->name;
 else {
  VAR_4 = FUNC_1(VAR_0->file->name);
  if (VAR_4)
   VAR_7 = 1;
  else
   VAR_4 = VAR_0->file->name;
 }

 if (VAR_2 > 1)
  FUNC_2(&VAR_5, "%s:%d:%d-%d:%d", VAR_4,
     VAR_0->first_line, VAR_0->first_column,
     VAR_0->last_line, VAR_0->last_column);
 else
  FUNC_2(&VAR_5, "%s:%d", VAR_4,
     VAR_1 ? VAR_0->first_line : VAR_0->last_line);

 if (VAR_7)
  FUNC_0(VAR_4);

 if (VAR_0->next != ((void*)0)) {
  VAR_6 = FUNC_3(VAR_0->next, VAR_1, VAR_2);
  FUNC_2(&VAR_3, "%s, %s", VAR_5, VAR_6);
  FUNC_0(VAR_5);
  FUNC_0(VAR_6);
 } else {
  VAR_3 = VAR_5;
 }

 return VAR_3;
}
