
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* file; } ;
typedef TYPE_1__ expanded_location ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_6(void)
{
 int VAR_3;
 expanded_location VAR_4;


 VAR_3 = FUNC_5(VAR_0) - FUNC_4(VAR_0) + 2;

 VAR_4 = FUNC_2(FUNC_1(VAR_1));
 FUNC_3(VAR_2, "Cyclomatic Complexity %d %s:%s\n", VAR_3,
  VAR_4.file, FUNC_0(VAR_1));

 return 0;
}
