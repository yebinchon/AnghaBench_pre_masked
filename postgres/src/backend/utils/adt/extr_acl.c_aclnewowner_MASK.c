
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ai_grantor; scalar_t__ ai_grantee; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ AclItem ;
typedef int const Acl ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__,int) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int VAR_0 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int) ;
 int* FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int const* FUNC_8 (int) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,int) ;

Acl *
FUNC_11(const Acl *VAR_1, Oid VAR_2, Oid VAR_3)
{
 Acl *VAR_4;
 AclItem *VAR_5;
 AclItem *VAR_6;
 AclItem *VAR_7;
 AclItem *VAR_8;
 AclItem *VAR_9;
 bool VAR_10 = 0;
 int VAR_11,
    VAR_12,
    VAR_13,
    VAR_14;

 FUNC_9(VAR_1);






 VAR_14 = FUNC_3(VAR_1);
 VAR_6 = FUNC_2(VAR_1);
 VAR_4 = FUNC_8(VAR_14);
 VAR_5 = FUNC_2(VAR_4);
 FUNC_10(VAR_5, VAR_6, VAR_14 * sizeof(AclItem));
 for (VAR_11 = 0, VAR_7 = VAR_5; VAR_11 < VAR_14; VAR_11++, VAR_7++)
 {
  if (VAR_7->ai_grantor == VAR_2)
   VAR_7->ai_grantor = VAR_3;
  else if (VAR_7->ai_grantor == VAR_3)
   VAR_10 = 1;
  if (VAR_7->ai_grantee == VAR_2)
   VAR_7->ai_grantee = VAR_3;
  else if (VAR_7->ai_grantee == VAR_3)
   VAR_10 = 1;
 }
 if (VAR_10)
 {
  VAR_11 = 0;
  for (VAR_13 = 0, VAR_9 = VAR_5; VAR_13 < VAR_14; VAR_13++, VAR_9++)
  {

   if (FUNC_0(*VAR_9) == VAR_0)
    continue;

   for (VAR_12 = VAR_13 + 1, VAR_8 = VAR_9 + 1; VAR_12 < VAR_14;
     VAR_12++, VAR_8++)
   {
    if (FUNC_0(*VAR_8) == VAR_0)
     continue;
    if (FUNC_7(VAR_9, VAR_8))
    {
     FUNC_1(*VAR_9,
            FUNC_0(*VAR_9) |
            FUNC_0(*VAR_8));

     FUNC_1(*VAR_8, VAR_0);
    }
   }

   VAR_5[VAR_11] = *VAR_9;
   VAR_11++;
  }

  FUNC_5(VAR_4)[0] = VAR_11;
  FUNC_6(VAR_4, FUNC_4(VAR_11));
 }

 return VAR_4;
}
