
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_boot_setup {char* name; int map; } ;
struct ifmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct netdev_boot_setup* VAR_2 ;
 int FUNC_0 (int *,struct ifmap*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, struct ifmap *VAR_4)
{
 struct netdev_boot_setup *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5[VAR_6].name[0] == '\0' || VAR_5[VAR_6].name[0] == ' ') {
   FUNC_1(VAR_5[VAR_6].name, 0, sizeof(VAR_5[VAR_6].name));
   FUNC_2(VAR_5[VAR_6].name, VAR_3, VAR_0);
   FUNC_0(&VAR_5[VAR_6].map, VAR_4, sizeof(VAR_5[VAR_6].map));
   break;
  }
 }

 return VAR_6 >= VAR_1 ? 0 : 1;
}
