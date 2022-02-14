
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlvar_struct {int dummy; } ;
struct sqlda_struct {int dummy; } ;
typedef int PGresult ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (long,int,int ,long*,int *) ;

__attribute__((used)) static long
FUNC_2(const PGresult *VAR_0)
{
 long VAR_1;
 int VAR_2 = FUNC_0(VAR_0);


 VAR_1 = sizeof(struct sqlda_struct) + (VAR_2 - 1) * sizeof(struct sqlvar_struct);


 FUNC_1(VAR_1, sizeof(int), 0, &VAR_1, ((void*)0));

 return VAR_1;
}
