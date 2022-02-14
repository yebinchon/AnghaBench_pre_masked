
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attr; scalar_t__ name; } ;
struct TYPE_7__ {TYPE_1__ dir_ent; struct TYPE_7__* next; struct TYPE_7__* first; } ;
typedef int FDSC ;
typedef int DOS_FS ;
typedef TYPE_2__ DOS_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,char*) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_3(DOS_FS * VAR_5, DOS_FILE * VAR_6, FDSC ** VAR_7)
{
    DOS_FILE *VAR_8;

    for (VAR_8 = VAR_6 ? VAR_6->first : VAR_4; VAR_8; VAR_8 = VAR_8->next)
 if (VAR_8->dir_ent.attr & VAR_0)
     if (FUNC_2((const char *)VAR_8->dir_ent.name, VAR_1, VAR_3)
  && FUNC_2((const char *)VAR_8->dir_ent.name, VAR_2,
      VAR_3))
  if (FUNC_1(VAR_5, VAR_8, FUNC_0(VAR_7, (char *)VAR_8->dir_ent.name)))
      return 1;
    return 0;
}
