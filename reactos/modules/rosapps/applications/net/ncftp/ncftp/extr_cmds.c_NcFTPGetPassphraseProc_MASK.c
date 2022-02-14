
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* host; char* user; } ;
struct TYPE_7__ {TYPE_1__* first; } ;
struct TYPE_6__ {char* line; struct TYPE_6__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const FTPCIPtr VAR_0, LineListPtr VAR_1, char *VAR_2, size_t VAR_3)
{
 LinePtr VAR_4;

 (void) FUNC_1("\nPassword requested by %s for user \"%s\".\n\n",
  VAR_0->host,
  VAR_0->user
  );

 for (VAR_4 = VAR_1->first; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  (void) FUNC_1("    %s\n", VAR_4->line);
 }
 (void) FUNC_1("\n");
 (void) FUNC_0("Password: ", VAR_2, (int) VAR_3);
}
