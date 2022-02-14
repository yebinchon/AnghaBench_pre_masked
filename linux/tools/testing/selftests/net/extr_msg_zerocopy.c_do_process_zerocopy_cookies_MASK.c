
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rds_zcopy_cookies {int num; int* cookies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static uint32_t FUNC_2(struct rds_zcopy_cookies *VAR_3)
{
 int VAR_4;

 if (VAR_3->num > VAR_0)
  FUNC_0(1, 0, "Returned %d cookies, max expected %d\n",
        VAR_3->num, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_3->num; VAR_4++)
  if (VAR_1 >= 2)
   FUNC_1(VAR_2, "%d\n", VAR_3->cookies[VAR_4]);
 return VAR_3->num;
}
