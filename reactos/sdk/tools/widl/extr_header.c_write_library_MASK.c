
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int attrs; } ;
typedef TYPE_1__ typelib_t ;
typedef int UUID ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int ,int const*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, const typelib_t *VAR_2)
{
  const UUID *VAR_3 = FUNC_1(VAR_2->attrs, VAR_0);
  FUNC_0(VAR_1, "\n");
  FUNC_2(VAR_1, "LIBID", VAR_2->name, VAR_3);
  FUNC_0(VAR_1, "\n");
}
