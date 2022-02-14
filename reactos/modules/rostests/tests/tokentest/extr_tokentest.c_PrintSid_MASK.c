
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_12__ {int Attributes; int Sid; } ;
struct TYPE_11__ {int Owner; } ;
struct TYPE_10__ {int PrimaryGroup; } ;
typedef TYPE_2__ TOKEN_PRIMARY_GROUP ;
typedef TYPE_3__ TOKEN_OWNER ;
typedef TYPE_4__ SID_AND_ATTRIBUTES ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(SID_AND_ATTRIBUTES* VAR_5, TOKEN_OWNER* VAR_6, TOKEN_PRIMARY_GROUP* VAR_7)
{
 UNICODE_STRING VAR_8;

 FUNC_2(&VAR_8, VAR_5->Sid, VAR_4);
 FUNC_3("%wZ [", &VAR_8);
 FUNC_1(VAR_8.Buffer);

 if ( FUNC_0(VAR_5->Sid, VAR_6->Owner) )
  FUNC_3("owner,");

 if ( FUNC_0(VAR_5->Sid, VAR_7->PrimaryGroup) )
  FUNC_3("primary,");

 if ( VAR_5->Attributes & VAR_0 )
 {
  if ( VAR_5->Attributes & VAR_1 )
   FUNC_3("enabled-default,");
  else
   FUNC_3("enabled,");
 }

 if ( VAR_5->Attributes & VAR_2 )
  FUNC_3("logon,");


 if ( VAR_5->Attributes & VAR_3 )
  FUNC_3("mandatory,");

 FUNC_3("]\n");
}
