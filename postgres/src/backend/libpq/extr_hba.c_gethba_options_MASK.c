
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ auth_method; char* krb_realm; char* usermap; scalar_t__ clientcert; char* pamservice; char* ldapserver; char* ldapport; char* ldapprefix; char* ldapsuffix; char* ldapbasedn; char* ldapbinddn; char* ldapbindpasswd; char* ldapsearchattribute; char* ldapsearchfilter; char* ldapscope; char* radiusservers_s; char* radiussecrets_s; char* radiusidentifiers_s; char* radiusports_s; scalar_t__ ldaptls; scalar_t__ include_realm; } ;
typedef TYPE_1__ HbaLine ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int *,int,int ,int,int,char) ;
 char* FUNC_3 (char*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static ArrayType *
FUNC_4(HbaLine *VAR_8)
{
 int VAR_9;
 Datum VAR_10[VAR_0];

 VAR_9 = 0;

 if (VAR_8->auth_method == VAR_4 || VAR_8->auth_method == VAR_7)
 {
  if (VAR_8->include_realm)
   VAR_10[VAR_9++] =
    FUNC_1("include_realm=true");

  if (VAR_8->krb_realm)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("krb_realm=%s", VAR_8->krb_realm));
 }

 if (VAR_8->usermap)
  VAR_10[VAR_9++] =
   FUNC_1(FUNC_3("map=%s", VAR_8->usermap));

 if (VAR_8->clientcert != VAR_3)
  VAR_10[VAR_9++] =
   FUNC_1(FUNC_3("clientcert=%s", (VAR_8->clientcert == VAR_2) ? "verify-ca" : "verify-full"));

 if (VAR_8->pamservice)
  VAR_10[VAR_9++] =
   FUNC_1(FUNC_3("pamservice=%s", VAR_8->pamservice));

 if (VAR_8->auth_method == VAR_5)
 {
  if (VAR_8->ldapserver)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapserver=%s", VAR_8->ldapserver));

  if (VAR_8->ldapport)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapport=%d", VAR_8->ldapport));

  if (VAR_8->ldaptls)
   VAR_10[VAR_9++] =
    FUNC_1("ldaptls=true");

  if (VAR_8->ldapprefix)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapprefix=%s", VAR_8->ldapprefix));

  if (VAR_8->ldapsuffix)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapsuffix=%s", VAR_8->ldapsuffix));

  if (VAR_8->ldapbasedn)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapbasedn=%s", VAR_8->ldapbasedn));

  if (VAR_8->ldapbinddn)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapbinddn=%s", VAR_8->ldapbinddn));

  if (VAR_8->ldapbindpasswd)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapbindpasswd=%s",
            VAR_8->ldapbindpasswd));

  if (VAR_8->ldapsearchattribute)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapsearchattribute=%s",
            VAR_8->ldapsearchattribute));

  if (VAR_8->ldapsearchfilter)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapsearchfilter=%s",
            VAR_8->ldapsearchfilter));

  if (VAR_8->ldapscope)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("ldapscope=%d", VAR_8->ldapscope));
 }

 if (VAR_8->auth_method == VAR_6)
 {
  if (VAR_8->radiusservers_s)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("radiusservers=%s", VAR_8->radiusservers_s));

  if (VAR_8->radiussecrets_s)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("radiussecrets=%s", VAR_8->radiussecrets_s));

  if (VAR_8->radiusidentifiers_s)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("radiusidentifiers=%s", VAR_8->radiusidentifiers_s));

  if (VAR_8->radiusports_s)
   VAR_10[VAR_9++] =
    FUNC_1(FUNC_3("radiusports=%s", VAR_8->radiusports_s));
 }


 FUNC_0(VAR_9 <= VAR_0);

 if (VAR_9 > 0)
  return FUNC_2(VAR_10, VAR_9, VAR_1, -1, 0, 'i');
 else
  return ((void*)0);
}
