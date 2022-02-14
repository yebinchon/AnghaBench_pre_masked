
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cidr {int dummy; } ;
struct TYPE_4__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 struct cidr* FUNC_0 (char*) ;
 struct cidr* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct cidr*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char***,int*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;

int FUNC_11(int VAR_4, char **VAR_5)
{
 int VAR_6 = 0;
 char **VAR_7 = VAR_5+2;
 struct cidr *VAR_8;

 if (VAR_4 < 3)
  FUNC_10(VAR_5[0]);

 VAR_8 = FUNC_9(VAR_5[1], ':') ? FUNC_1(VAR_5[1]) : FUNC_0(VAR_5[1]);

 if (!VAR_8)
  FUNC_10(VAR_5[0]);

 FUNC_4(VAR_8);

 while (FUNC_8(&VAR_7, &VAR_6));

 if (*VAR_7)
 {
  FUNC_6(VAR_3, "unknown operation '%s'\n", *VAR_7);
  FUNC_5(6);
 }

 if (!VAR_1 && (VAR_6 < 2))
 {
  if (VAR_2->family == VAR_0)
   FUNC_2(VAR_2);
  else
   FUNC_3(VAR_2);
 }

 FUNC_7("\n");

 FUNC_5(VAR_6);
}
