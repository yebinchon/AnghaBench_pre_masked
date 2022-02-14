
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_vcc {scalar_t__ proto_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (int ,struct atm_vcc*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct atm_vcc *VAR_3, int VAR_4)
{
 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_4, VAR_1);
 if (!VAR_2[VAR_4])
  return -VAR_0;
 VAR_3->proto_data = VAR_2[VAR_4];
 return FUNC_1(FUNC_2(VAR_2[VAR_4]), VAR_3);
}
