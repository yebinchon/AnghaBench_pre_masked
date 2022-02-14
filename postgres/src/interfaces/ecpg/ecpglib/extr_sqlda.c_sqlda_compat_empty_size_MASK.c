
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlvar_compat {int dummy; } ;
struct sqlda_compat {int dummy; } ;
typedef int PGresult ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (long,int,int ,long*,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static long
FUNC_4(const PGresult *VAR_0)
{
 long VAR_1;
 int VAR_2;
 int VAR_3 = FUNC_1(VAR_0);


 VAR_1 = sizeof(struct sqlda_compat) + VAR_3 * sizeof(struct sqlvar_compat);


 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  VAR_1 += FUNC_3(FUNC_0(VAR_0, VAR_2)) + 1;


 FUNC_2(VAR_1, sizeof(int), 0, &VAR_1, ((void*)0));

 return VAR_1;
}
