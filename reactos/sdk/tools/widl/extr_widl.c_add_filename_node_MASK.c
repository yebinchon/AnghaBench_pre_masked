
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_3__ {int link; int filename; } ;
typedef TYPE_1__ filename_node_t ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (struct list*,int *) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct list *VAR_0, const char *VAR_1)
{
  filename_node_t *VAR_2 = FUNC_2(sizeof *VAR_2);
  VAR_2->filename = FUNC_0( VAR_1, ".idl" );
  FUNC_1(VAR_0, &VAR_2->link);
}
