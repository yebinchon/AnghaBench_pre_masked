
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ build_options; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char const**,int ,int ,int ) ;
 char* VAR_1 ;
 int FUNC_2 (char*,char*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_3(int VAR_6, const char **VAR_7)
{
 VAR_6 = FUNC_1(VAR_6, VAR_7, VAR_3, VAR_4,
        VAR_0);

 FUNC_2("perf version %s\n", VAR_1);

 if (VAR_2.build_options || VAR_5 == 1)
  FUNC_0();

 return 0;
}
