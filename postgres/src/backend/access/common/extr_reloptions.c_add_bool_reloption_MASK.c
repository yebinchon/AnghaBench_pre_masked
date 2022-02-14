
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int relopt_gen ;
struct TYPE_2__ {int default_val; } ;
typedef TYPE_1__ relopt_bool ;
typedef int bits32 ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,char const*,char const*,int ) ;

void
FUNC_2(bits32 VAR_1, const char *VAR_2, const char *VAR_3,
       bool VAR_4, LOCKMODE VAR_5)
{
 relopt_bool *VAR_6;

 VAR_6 = (relopt_bool *) FUNC_1(VAR_1, VAR_0,
               VAR_2, VAR_3, VAR_5);
 VAR_6->default_val = VAR_4;

 FUNC_0((relopt_gen *) VAR_6);
}
