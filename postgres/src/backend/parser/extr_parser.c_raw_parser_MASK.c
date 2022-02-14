
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int core_yyscan_t ;
struct TYPE_3__ {int have_lookahead; int * parsetree; int core_yy_extra; } ;
typedef TYPE_1__ base_yy_extra_type ;
typedef int List ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int *,int *,int ) ;

List *
FUNC_4(const char *VAR_3)
{
 core_yyscan_t VAR_4;
 base_yy_extra_type VAR_5;
 int VAR_6;


 VAR_4 = FUNC_3(VAR_3, &VAR_5.core_yy_extra,
        &VAR_2, VAR_1);


 VAR_5.have_lookahead = 0;


 FUNC_1(&VAR_5);


 VAR_6 = FUNC_0(VAR_4);


 FUNC_2(VAR_4);

 if (VAR_6)
  return VAR_0;

 return VAR_5.parsetree;
}
