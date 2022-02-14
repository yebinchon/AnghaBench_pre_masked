
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ port; int major_version; int controldata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (char*) ;

void
FUNC_4(bool VAR_3)
{

 FUNC_2(&VAR_2, VAR_3);
 FUNC_2(&VAR_1, 0);
 FUNC_1(&VAR_2.controldata, &VAR_1.controldata);


 if (VAR_3 && FUNC_0(VAR_2.major_version) < 901 &&
  VAR_2.port == VAR_0)
  FUNC_3("When checking a pre-PG 9.1 live old server, "
     "you must specify the old server's port number.\n");

 if (VAR_3 && VAR_2.port == VAR_1.port)
  FUNC_3("When checking a live server, "
     "the old and new port numbers must be different.\n");
}
