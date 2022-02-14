
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_domain_info {int acl_info_list; int ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,char*,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,char*,int) ;

__attribute__((used)) static void FUNC_11(struct tomoyo_domain_info *VAR_2, char *VAR_3)
{
 char *VAR_4;
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 char *VAR_8 = FUNC_3(VAR_3, '\n');
 int VAR_9;

 if (!VAR_8)
  return;
 VAR_8 = FUNC_3(VAR_8 + 1, '\n');
 if (!VAR_8)
  return;
 *VAR_8++ = '\0';
 VAR_9 = FUNC_4(VAR_8) + 1;

 if (*VAR_8 == 'f') {
  VAR_6 = FUNC_5(VAR_3, " argv[]={ \"");
  if (VAR_6) {
   VAR_6 += 10;
   VAR_9 += FUNC_8(VAR_6) + 14;
  }
  VAR_5 = FUNC_5(VAR_3, " exec={ realpath=\"");
  if (VAR_5) {
   VAR_5 += 8;
   VAR_9 += FUNC_8(VAR_5) + 6;
  }
  VAR_7 = FUNC_5(VAR_3, " symlink.target=\"");
  if (VAR_7)
   VAR_9 += FUNC_8(VAR_7 + 1) + 1;
 }
 VAR_4 = FUNC_1(VAR_9, VAR_0);
 if (!VAR_4)
  return;
 FUNC_2(VAR_4, VAR_9 - 1, "%s", VAR_8);
 if (VAR_5)
  FUNC_6(VAR_4, VAR_9, " exec.%s", VAR_5);
 if (VAR_6)
  FUNC_6(VAR_4, VAR_9, " exec.argv[0]=%s", VAR_6);
 if (VAR_7)
  FUNC_6(VAR_4, VAR_9, "%s", VAR_7);
 FUNC_7(VAR_4);
 if (!FUNC_10(VAR_2->ns, &VAR_2->acl_info_list, VAR_4,
      0))
  FUNC_9(VAR_1);
 FUNC_0(VAR_4);
}
