
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ai_grantee; scalar_t__ ai_grantor; scalar_t__ ai_privs; } ;
typedef TYPE_1__ AclItem ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const AclItem *VAR_2 = (const AclItem *) VAR_0;
 const AclItem *VAR_3 = (const AclItem *) VAR_1;

 if (VAR_2->ai_grantee > VAR_3->ai_grantee)
  return 1;
 if (VAR_2->ai_grantee < VAR_3->ai_grantee)
  return -1;
 if (VAR_2->ai_grantor > VAR_3->ai_grantor)
  return 1;
 if (VAR_2->ai_grantor < VAR_3->ai_grantor)
  return -1;
 if (VAR_2->ai_privs > VAR_3->ai_privs)
  return 1;
 if (VAR_2->ai_privs < VAR_3->ai_privs)
  return -1;
 return 0;
}
