
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ai_grantee; int ai_grantor; } ;
typedef int Oid ;
typedef scalar_t__ AclMode ;
typedef TYPE_1__ const AclItem ;
typedef int const Acl ;


 scalar_t__ FUNC_0 (TYPE_1__ const) ;
 int VAR_0 ;
 TYPE_1__ const* FUNC_1 (int const*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int const*,int ,int ,int ,int ) ;
 int const* FUNC_8 (int const*,TYPE_1__ const*,int ,int ,int ) ;
 int const* FUNC_9 (int) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int const*,int const*,int ) ;
 int FUNC_15 (int const*) ;

__attribute__((used)) static void
FUNC_16(const Acl *VAR_7, const AclItem *VAR_8,
      Oid VAR_9)
{
 Acl *VAR_10;
 AclItem *VAR_11;
 int VAR_12,
    VAR_13;
 AclMode VAR_14;

 FUNC_10(VAR_7);





 FUNC_6(VAR_8->ai_grantee != VAR_1);


 if (VAR_8->ai_grantor == VAR_9)
  return;


 VAR_10 = FUNC_9(FUNC_3(VAR_7));
 FUNC_14(VAR_10, VAR_7, FUNC_5(VAR_7));


cc_restart:
 VAR_13 = FUNC_3(VAR_10);
 VAR_11 = FUNC_1(VAR_10);
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
 {
  if (VAR_11[VAR_12].ai_grantee == VAR_8->ai_grantee &&
   FUNC_0(VAR_11[VAR_12]) != VAR_3)
  {
   Acl *VAR_15;


   VAR_15 = FUNC_8(VAR_10, &VAR_11[VAR_12], VAR_2,
        VAR_9, VAR_4);

   FUNC_15(VAR_10);
   VAR_10 = VAR_15;

   goto cc_restart;
  }
 }


 VAR_14 = FUNC_7(VAR_10,
      VAR_8->ai_grantor,
      VAR_9,
      FUNC_2(FUNC_0(*VAR_8)),
      VAR_0);
 VAR_14 = FUNC_4(VAR_14);

 if ((FUNC_0(*VAR_8) & ~VAR_14) != 0)
  FUNC_11(VAR_6,
    (FUNC_12(VAR_5),
     FUNC_13("grant options cannot be granted back to your own grantor")));

 FUNC_15(VAR_10);
}
