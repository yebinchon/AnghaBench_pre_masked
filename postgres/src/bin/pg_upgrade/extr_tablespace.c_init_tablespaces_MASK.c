
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ num_old_tablespaces; } ;
struct TYPE_5__ {int tablespace_suffix; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void
FUNC_4(void)
{
 FUNC_0();

 FUNC_2(&VAR_1);
 FUNC_2(&VAR_0);

 if (VAR_2.num_old_tablespaces > 0 &&
  FUNC_3(VAR_1.tablespace_suffix, VAR_0.tablespace_suffix) == 0)
  FUNC_1("Cannot upgrade to/from the same system catalog version when\n"
     "using tablespaces.\n");
}
