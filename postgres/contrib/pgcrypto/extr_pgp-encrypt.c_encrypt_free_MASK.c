
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct EncStat {scalar_t__ ciph; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct EncStat*) ;
 int FUNC_2 (struct EncStat*,int ,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct EncStat *VAR_1 = VAR_0;

 if (VAR_1->ciph)
  FUNC_0(VAR_1->ciph);
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(VAR_1);
}
