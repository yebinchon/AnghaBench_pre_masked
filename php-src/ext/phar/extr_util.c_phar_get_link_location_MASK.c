
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* link; int filename; } ;
typedef TYPE_1__ phar_entry_info ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char**,int ,char*,int ,char*) ;
 char* FUNC_2 (int ,char) ;

__attribute__((used)) static char *FUNC_3(phar_entry_info *VAR_0)
{
 char *VAR_1, *VAR_2 = ((void*)0);
 if (!VAR_0->link) {
  return ((void*)0);
 }
 if (VAR_0->link[0] == '/') {
  return FUNC_0(VAR_0->link + 1);
 }
 VAR_1 = FUNC_2(VAR_0->filename, '/');
 if (VAR_1) {
  *VAR_1 = '\0';
  FUNC_1(&VAR_2, 0, "%s/%s", VAR_0->filename, VAR_0->link);
  return VAR_2;
 }
 return VAR_0->link;
}
