
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int StringInfo ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,char const*,int,int,char const*,int) ;
 int VAR_0 ;

__attribute__((used)) static StringInfo
FUNC_7(Oid VAR_1,
       const char *VAR_2, bool VAR_3, bool VAR_4,
       const char *VAR_5, bool VAR_6)
{
 StringInfoData VAR_7;

 FUNC_5(&VAR_7);
 FUNC_3(&VAR_7, "SELECT * FROM %s",
      FUNC_0(FUNC_1(VAR_0,
               FUNC_2(VAR_1))));
 return FUNC_6(VAR_7.data, FUNC_4(VAR_1),
         VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
}
