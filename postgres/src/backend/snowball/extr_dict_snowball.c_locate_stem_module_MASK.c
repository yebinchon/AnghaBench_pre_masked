
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ enc; int (* create ) () ;int stem; scalar_t__ name; } ;
typedef TYPE_1__ stemmer_module ;
struct TYPE_6__ {int needrecode; int z; int stem; } ;
typedef TYPE_2__ DictSnowball ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,char const*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(DictSnowball *VAR_5, const char *VAR_6)
{
 const stemmer_module *VAR_7;





 for (VAR_7 = VAR_4; VAR_7->name; VAR_7++)
 {
  if ((VAR_7->enc == VAR_2 || VAR_7->enc == FUNC_0()) &&
   FUNC_5(VAR_7->name, VAR_6) == 0)
  {
   VAR_5->stem = VAR_7->stem;
   VAR_5->z = VAR_7->create();
   VAR_5->needrecode = 0;
   return;
  }
 }




 for (VAR_7 = VAR_4; VAR_7->name; VAR_7++)
 {
  if (VAR_7->enc == VAR_3 && FUNC_5(VAR_7->name, VAR_6) == 0)
  {
   VAR_5->stem = VAR_7->stem;
   VAR_5->z = VAR_7->create();
   VAR_5->needrecode = 1;
   return;
  }
 }

 FUNC_2(VAR_1,
   (FUNC_3(VAR_0),
    FUNC_4("no Snowball stemmer available for language \"%s\" and encoding \"%s\"",
     VAR_6, FUNC_1())));
}
