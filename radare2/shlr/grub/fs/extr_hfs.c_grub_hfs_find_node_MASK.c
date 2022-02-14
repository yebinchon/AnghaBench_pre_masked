
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfs_find_node_closure {char* key; int type; char* datar; int datalen; int done; int found; scalar_t__ isleaf; } ;
struct grub_hfs_data {int dummy; } ;
typedef int grub_uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct grub_hfs_data*,int,int,int ,int ,struct grub_hfs_find_node_closure*) ;

__attribute__((used)) static int
FUNC_1 (struct grub_hfs_data *VAR_1, char *VAR_2,
      grub_uint32_t VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
  struct grub_hfs_find_node_closure VAR_7;

  VAR_7.key = VAR_2;
  VAR_7.type = VAR_4;
  VAR_7.datar = VAR_5;
  VAR_7.datalen = VAR_6;
  VAR_7.isleaf = 0;
  VAR_7.done = 0;
  do
    {
      VAR_7.found = -1;

      if (FUNC_0 (VAR_1, VAR_4, VAR_3, 0,
        VAR_0, &VAR_7)) {
        return 0;
 }

      if (VAR_7.found == -1) {
        return 0;
}

      VAR_3 = VAR_7.found;
    } while (! VAR_7.isleaf);

  return VAR_7.done;
}
