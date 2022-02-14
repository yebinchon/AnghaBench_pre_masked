
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * search_path; void* right_arg; void* left_arg; int oprname; } ;
typedef int ParseState ;
typedef int ParseCallbackState ;
typedef TYPE_1__ OprCacheKey ;
typedef void* Oid ;
typedef int List ;


 int FUNC_0 (int *,char**,char**) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static bool
FUNC_7(ParseState *VAR_2, OprCacheKey *VAR_3, List *VAR_4,
     Oid VAR_5, Oid VAR_6, int VAR_7)
{
 char *VAR_8;
 char *VAR_9;


 FUNC_0(VAR_4, &VAR_8, &VAR_9);


 FUNC_2(VAR_3, 0, sizeof(OprCacheKey));


 FUNC_6(VAR_3->oprname, VAR_9, VAR_1);
 VAR_3->left_arg = VAR_5;
 VAR_3->right_arg = VAR_6;

 if (VAR_8)
 {
  ParseCallbackState VAR_10;


  FUNC_5(&VAR_10, VAR_2, VAR_7);
  VAR_3->search_path[0] = FUNC_1(VAR_8, 0);
  FUNC_3(&VAR_10);
 }
 else
 {

  if (FUNC_4(VAR_3->search_path,
         VAR_0) > VAR_0)
   return 0;
 }

 return 1;
}
