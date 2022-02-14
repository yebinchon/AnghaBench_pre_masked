
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* defaultAnonPassword; scalar_t__ htried; char* ourHostName; int magic; } ;
typedef TYPE_1__* FTPLIPtr ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;

void
FUNC_5(const FTPLIPtr VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (FUNC_4(VAR_1->magic, VAR_0))
  return;

 FUNC_0(VAR_1);

 if (VAR_1->defaultAnonPassword[0] == '\0') {
  (void) FUNC_3(VAR_1->defaultAnonPassword, "NcFTP@");

 }
}
