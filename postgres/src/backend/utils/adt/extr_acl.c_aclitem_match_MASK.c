
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ai_grantee; scalar_t__ ai_grantor; } ;
typedef TYPE_1__ AclItem ;



__attribute__((used)) static bool
FUNC_0(const AclItem *VAR_0, const AclItem *VAR_1)
{
 return VAR_0->ai_grantee == VAR_1->ai_grantee &&
  VAR_0->ai_grantor == VAR_1->ai_grantor;
}
