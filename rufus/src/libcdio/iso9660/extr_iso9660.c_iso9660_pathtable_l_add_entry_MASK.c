
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int parent; int name; int extent; int name_len; } ;
typedef TYPE_1__ iso_path_table_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int ,char const*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_5 (void*,unsigned int) ;
 int FUNC_6 (void*,int *,unsigned int*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;

uint16_t
FUNC_11 (void *VAR_1,
                               const char VAR_2[],
                               uint32_t VAR_3,
                               uint16_t VAR_4)
{
  iso_path_table_t *VAR_5 =
    (iso_path_table_t *)((char *)VAR_1 + FUNC_2 (VAR_1));
  size_t VAR_6 = FUNC_7 (VAR_2) ? FUNC_7 (VAR_2) : 1;
  unsigned int VAR_7 = 0;

  FUNC_0 (FUNC_2 (VAR_1) < VAR_0);

  FUNC_4 (VAR_5, 0, sizeof (iso_path_table_t) + VAR_6);

  VAR_5->name_len = FUNC_8 (VAR_6);
  VAR_5->extent = FUNC_10 (VAR_3);
  VAR_5->parent = FUNC_9 (VAR_4);
  FUNC_3 (VAR_5->name, VAR_2, VAR_6);

  FUNC_6 (VAR_1, ((void*)0), &VAR_7);

  if (VAR_7 > 1)
    {
      const iso_path_table_t *VAR_8
        = FUNC_5 (VAR_1, VAR_7 - 2);

      FUNC_0 (VAR_8 != ((void*)0));

      FUNC_0 (FUNC_1 (VAR_8->parent) <= VAR_4);
    }

  return VAR_7;
}
