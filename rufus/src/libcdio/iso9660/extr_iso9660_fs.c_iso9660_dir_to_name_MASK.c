
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {char* str; } ;
struct TYPE_6__ {TYPE_1__ filename; } ;
typedef TYPE_2__ iso9660_dir_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*) ;
 char* FUNC_2 (char*) ;

char *
FUNC_3 (const iso9660_dir_t *VAR_0)
{
  uint8_t VAR_1=FUNC_1(VAR_0);

  if (!VAR_1) return ((void*)0);

  FUNC_0 (VAR_1 >= sizeof (iso9660_dir_t));



  if (VAR_0->filename.str[1] == '\0')
    return FUNC_2(".");
  else if (VAR_0->filename.str[1] == '\1')
    return FUNC_2("..");
  else {
    return FUNC_2(&VAR_0->filename.str[1]);
  }
}
