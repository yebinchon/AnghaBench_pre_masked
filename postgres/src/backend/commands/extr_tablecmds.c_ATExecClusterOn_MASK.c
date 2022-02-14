
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* rd_rel; } ;
struct TYPE_7__ {int relnamespace; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*,int ) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

__attribute__((used)) static ObjectAddress
FUNC_9(Relation VAR_3, const char *VAR_4, LOCKMODE VAR_5)
{
 Oid VAR_6;
 ObjectAddress VAR_7;

 VAR_6 = FUNC_7(VAR_4, VAR_3->rd_rel->relnamespace);

 if (!FUNC_1(VAR_6))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("index \"%s\" for table \"%s\" does not exist",
      VAR_4, FUNC_2(VAR_3))));


 FUNC_3(VAR_3, VAR_6, 0, VAR_5);


 FUNC_8(VAR_3, VAR_6, 0);

 FUNC_0(VAR_7,
      VAR_2, VAR_6);

 return VAR_7;
}
