
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int status; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;

PGconn *
FUNC_4(const char *VAR_1)
{
 PGconn *VAR_2;




 VAR_2 = FUNC_3();
 if (VAR_2 == ((void*)0))
  return ((void*)0);




 if (!FUNC_1(VAR_2, VAR_1))
  return VAR_2;




 if (!FUNC_2(VAR_2))
  return VAR_2;




 if (!FUNC_0(VAR_2))
 {

  VAR_2->status = VAR_0;
 }

 return VAR_2;
}
