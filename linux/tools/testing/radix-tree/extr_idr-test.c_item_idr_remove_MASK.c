
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int index; } ;
struct idr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct item*) ;
 struct item* FUNC_2 (struct idr*,int) ;
 int FUNC_3 (struct idr*,int) ;

void FUNC_4(struct idr *VAR_0, int VAR_1)
{
 struct item *VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_2->index == VAR_1);
 FUNC_3(VAR_0, VAR_1);
 FUNC_1(VAR_2);
}
