
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* mime; int type; } ;
typedef TYPE_1__ phar_mime_type ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 TYPE_1__* FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_3(HashTable *VAR_1, char *VAR_2, char **VAR_3)
{
 char *VAR_4;
 phar_mime_type *VAR_5;
 VAR_4 = FUNC_1(VAR_2, '.');
 if (!VAR_4) {
  *VAR_3 = "text/plain";

  return VAR_0;
 }
 ++VAR_4;
 if (((void*)0) == (VAR_5 = FUNC_2(VAR_1, VAR_4, FUNC_0(VAR_4)))) {
  *VAR_3 = "application/octet-stream";
  return VAR_0;
 }
 *VAR_3 = VAR_5->mime;
 return VAR_5->type;
}
