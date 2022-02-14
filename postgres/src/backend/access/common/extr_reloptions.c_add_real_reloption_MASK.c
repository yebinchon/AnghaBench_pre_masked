
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double default_val; double min; double max; } ;
typedef TYPE_1__ relopt_real ;
typedef int relopt_gen ;
typedef int bits32 ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,char const*,char const*,int ) ;

void
FUNC_2(bits32 VAR_1, const char *VAR_2, const char *VAR_3, double VAR_4,
       double VAR_5, double VAR_6, LOCKMODE VAR_7)
{
 relopt_real *VAR_8;

 VAR_8 = (relopt_real *) FUNC_1(VAR_1, VAR_0,
               VAR_2, VAR_3, VAR_7);
 VAR_8->default_val = VAR_4;
 VAR_8->min = VAR_5;
 VAR_8->max = VAR_6;

 FUNC_0((relopt_gen *) VAR_8);
}
