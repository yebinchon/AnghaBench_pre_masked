
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hdspm*) ;

__attribute__((used)) static int FUNC_2(struct hdspm *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);
 int VAR_2, VAR_3 = 0;
 for (VAR_2 = 1; VAR_2 < 10; VAR_2++)
  if (FUNC_0(VAR_2) == VAR_1) {
   VAR_3 = VAR_2;
   break;
  }
 return VAR_3;
}
