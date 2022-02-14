
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {char** h_addr_list; char* h_name; char** h_aliases; } ;
typedef int ipStr ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 struct hostent* FUNC_1 (char const*,struct in_addr*) ;
 int FUNC_2 (int const,char const** const,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,char**,int) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_7(const int VAR_2, const char **const VAR_3, const CommandPtr VAR_4, const ArgvInfoPtr VAR_5)
{
 int VAR_6, VAR_7;
 struct hostent *VAR_8;
 const char *VAR_9;
 char **VAR_10;
 struct in_addr VAR_11;
 int VAR_12, VAR_13;
 char VAR_14[16];

 FUNC_0(VAR_1);
 VAR_12 = 1;

 FUNC_3();
 while ((VAR_13 = FUNC_2(VAR_2, VAR_3, "v")) >= 0) {
  if (VAR_13 == 'v')
   VAR_12 = 0;
  else {
   FUNC_5(VAR_4);
   return;
  }
 }

 for (VAR_6=VAR_0; VAR_6<VAR_2; VAR_6++) {
  VAR_8 = FUNC_1((VAR_9 = VAR_3[VAR_6]), &VAR_11);
  if ((VAR_6 > VAR_0) && (VAR_12 == 0))
   FUNC_6(-1, "\n");
  if (VAR_8 == ((void*)0)) {
   FUNC_6(-1, "Unable to get information about site %s.\n", VAR_9);
  } else if (VAR_12) {
   FUNC_4(VAR_14, sizeof(VAR_14), VAR_8->h_addr_list, 0);
   FUNC_6(-1, "%-40s %s\n", VAR_8->h_name, VAR_14);
  } else {
   FUNC_6(-1, "%s:\n", VAR_9);
   FUNC_6(-1, "    Name:     %s\n", VAR_8->h_name);
   for (VAR_10 = VAR_8->h_aliases; *VAR_10 != ((void*)0); VAR_10++)
    FUNC_6(-1, "    Alias:    %s\n", *VAR_10);
   for (VAR_7 = 0, VAR_10 = VAR_8->h_addr_list; *VAR_10 != ((void*)0); VAR_10++, ++VAR_7) {
    FUNC_4(VAR_14, sizeof(VAR_14), VAR_8->h_addr_list, VAR_7);
    FUNC_6(-1, "    Address:  %s\n", VAR_14);
   }
  }
 }
}
