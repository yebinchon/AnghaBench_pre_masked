
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ai_grantee; scalar_t__ ai_grantor; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ AclItem ;
typedef int Acl ;


 TYPE_1__* FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_1 ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,int,int,int ) ;
 int FUNC_5 (scalar_t__*,int,int,int ) ;

int
FUNC_6(const Acl *VAR_2, Oid **VAR_3)
{
 Oid *VAR_4;
 const AclItem *VAR_5;
 int VAR_6,
    VAR_7;

 if (VAR_2 == ((void*)0) || FUNC_1(VAR_2) == 0)
 {
  *VAR_3 = ((void*)0);
  return 0;
 }

 FUNC_2(VAR_2);


 VAR_4 = FUNC_3(FUNC_1(VAR_2) * 2 * sizeof(Oid));
 VAR_5 = FUNC_0(VAR_2);




 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_2); VAR_6++)
 {
  const AclItem *VAR_8 = &VAR_5[VAR_6];

  if (VAR_8->ai_grantee != VAR_0)
   VAR_4[VAR_7++] = VAR_8->ai_grantee;

  if (VAR_8->ai_grantor != VAR_0)
   VAR_4[VAR_7++] = VAR_8->ai_grantor;
 }


 FUNC_4(VAR_4, VAR_7, sizeof(Oid), VAR_1);





 *VAR_3 = VAR_4;


 return FUNC_5(VAR_4, VAR_7, sizeof(Oid), VAR_1);
}
