
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct config_enum_entry {char const* name; int hidden; } ;
struct config_enum {struct config_enum_entry* options; } ;
struct TYPE_5__ {int len; char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(struct config_enum *VAR_0, const char *VAR_1,
      const char *VAR_2, const char *VAR_3)
{
 const struct config_enum_entry *VAR_4;
 StringInfoData VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5);
 FUNC_1(&VAR_5, VAR_1);

 VAR_6 = FUNC_3(VAR_3);
 for (VAR_4 = VAR_0->options; VAR_4 && VAR_4->name; VAR_4++)
 {
  if (!VAR_4->hidden)
  {
   FUNC_1(&VAR_5, VAR_4->name);
   FUNC_0(&VAR_5, VAR_3, VAR_6);
  }
 }
 if (VAR_5.len >= VAR_6)
 {

  VAR_5.data[VAR_5.len - VAR_6] = '\0';
  VAR_5.len -= VAR_6;
 }

 FUNC_1(&VAR_5, VAR_2);

 return VAR_5.data;
}
