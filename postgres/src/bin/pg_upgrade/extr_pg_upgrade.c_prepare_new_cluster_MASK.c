
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ verbose; } ;
struct TYPE_4__ {int bindir; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,int,int,char*,int ,int ,char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void)
{





 FUNC_3("Analyzing all rows in the new cluster");
 FUNC_2(VAR_0, ((void*)0), 1, 1,
     "\"%s/vacuumdb\" %s --all --analyze %s",
     VAR_2.bindir, FUNC_1(&VAR_2),
     VAR_1.verbose ? "--verbose" : "");
 FUNC_0();







 FUNC_3("Freezing all rows in the new cluster");
 FUNC_2(VAR_0, ((void*)0), 1, 1,
     "\"%s/vacuumdb\" %s --all --freeze %s",
     VAR_2.bindir, FUNC_1(&VAR_2),
     VAR_1.verbose ? "--verbose" : "");
 FUNC_0();
}
