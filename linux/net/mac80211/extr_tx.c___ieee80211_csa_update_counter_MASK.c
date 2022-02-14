
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct beacon_data {int csa_current_counter; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(struct beacon_data *VAR_0)
{
 VAR_0->csa_current_counter--;


 FUNC_0(!VAR_0->csa_current_counter);

 return VAR_0->csa_current_counter;
}
