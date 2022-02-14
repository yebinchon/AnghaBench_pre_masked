
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int values; } ;
typedef TYPE_1__ oidvector ;
typedef int Oid ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char const*,int,int ,int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(const char *VAR_4, int VAR_5,
         oidvector *VAR_6, Oid VAR_7)
{

 if (FUNC_3(VAR_3,
         FUNC_0(VAR_4),
         FUNC_2(VAR_6),
         FUNC_1(VAR_7)))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("function %s already exists in schema \"%s\"",
      FUNC_7(VAR_4, VAR_5,
              VAR_2, VAR_6->values),
      FUNC_8(VAR_7))));
}
