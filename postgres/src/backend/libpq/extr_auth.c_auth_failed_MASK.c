
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int user_name; TYPE_1__* hba; } ;
struct TYPE_4__ {int auth_method; char* linenumber; char* rawline; } ;
typedef TYPE_2__ Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*,int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*,char*,char*) ;
__attribute__((used)) static void
FUNC_8(Port *VAR_4, int VAR_5, char *VAR_6)
{
 const char *VAR_7;
 char *VAR_8;
 int VAR_9 = VAR_0;
 if (VAR_5 == VAR_3)
  FUNC_6(0);

 switch (VAR_4->hba->auth_method)
 {
  case 131:
  case 138:
   VAR_7 = FUNC_5("authentication failed for user \"%s\": host rejected");
   break;
  case 128:
   VAR_7 = FUNC_5("\"trust\" authentication failed for user \"%s\"");
   break;
  case 139:
   VAR_7 = FUNC_5("Ident authentication failed for user \"%s\"");
   break;
  case 133:
   VAR_7 = FUNC_5("Peer authentication failed for user \"%s\"");
   break;
  case 134:
  case 136:
  case 130:
   VAR_7 = FUNC_5("password authentication failed for user \"%s\"");

   VAR_9 = VAR_1;
   break;
  case 140:
   VAR_7 = FUNC_5("GSSAPI authentication failed for user \"%s\"");
   break;
  case 129:
   VAR_7 = FUNC_5("SSPI authentication failed for user \"%s\"");
   break;
  case 135:
   VAR_7 = FUNC_5("PAM authentication failed for user \"%s\"");
   break;
  case 142:
   VAR_7 = FUNC_5("BSD authentication failed for user \"%s\"");
   break;
  case 137:
   VAR_7 = FUNC_5("LDAP authentication failed for user \"%s\"");
   break;
  case 141:
   VAR_7 = FUNC_5("certificate authentication failed for user \"%s\"");
   break;
  case 132:
   VAR_7 = FUNC_5("RADIUS authentication failed for user \"%s\"");
   break;
  default:
   VAR_7 = FUNC_5("authentication failed for user \"%s\": invalid authentication method");
   break;
 }

 VAR_8 = FUNC_7(FUNC_0("Connection matched pg_hba.conf line %d: \"%s\""),
        VAR_4->hba->linenumber, VAR_4->hba->rawline);
 if (VAR_6)
  VAR_6 = FUNC_7("%s\n%s", VAR_6, VAR_8);
 else
  VAR_6 = VAR_8;

 FUNC_1(VAR_2,
   (FUNC_2(VAR_9),
    FUNC_4(VAR_7, VAR_4->user_name),
    VAR_6 ? FUNC_3("%s", VAR_6) : 0));


}
