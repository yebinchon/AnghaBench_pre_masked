
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Pfdebug; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;
 scalar_t__ FUNC_2 (char const*,size_t,TYPE_1__*) ;

int
FUNC_3(const char *VAR_1, size_t VAR_2, PGconn *VAR_3)
{
 if (FUNC_2(VAR_1, VAR_2, VAR_3))
  return VAR_0;

 if (VAR_3->Pfdebug)
 {
  FUNC_0(VAR_3->Pfdebug, "To backend> ");
  FUNC_1(VAR_3->Pfdebug, VAR_1, VAR_2);
  FUNC_0(VAR_3->Pfdebug, "\n");
 }

 return 0;
}
