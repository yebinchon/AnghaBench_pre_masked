
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* key; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_2__ FormatNode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*,char const* const*,int,int,int*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_8(int *VAR_3, char **VAR_4, const char *const *VAR_5, int VAR_6,
      int VAR_7, FormatNode *VAR_8, bool *VAR_9)
{
 int VAR_10;

 *VAR_3 = FUNC_6(*VAR_4, VAR_5, VAR_6, VAR_7, &VAR_10);
 if (VAR_10 <= 0)
 {
  char VAR_11[VAR_0 + 1];

  FUNC_0(VAR_7 <= VAR_0);
  FUNC_7(VAR_11, *VAR_4, VAR_7 + 1);

  FUNC_1(FUNC_2(VAR_2,
        (FUNC_3(VAR_1),
         FUNC_5("invalid value \"%s\" for \"%s\"",
          VAR_11, VAR_8->key->name),
         FUNC_4("The given value did not match any of "
          "the allowed values for this field."))));
 }
 *VAR_4 += VAR_10;
 return VAR_10;

on_error:
 return -1;
}
