
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int echo_hidden; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int *,int*) ;
 int FUNC_2 (char*,char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_4)
{
 FUNC_0(VAR_4 != ((void*)0));
 if (FUNC_3(VAR_4, "noexec") == 0)
  VAR_3.echo_hidden = VAR_0;
 else
 {
  bool VAR_5;

  if (FUNC_1(VAR_4, ((void*)0), &VAR_5))
   VAR_3.echo_hidden = VAR_5 ? VAR_2 : VAR_1;
  else
  {
   FUNC_2("ECHO_HIDDEN", VAR_4, "on, off, noexec");
   return 0;
  }
 }
 return 1;
}
