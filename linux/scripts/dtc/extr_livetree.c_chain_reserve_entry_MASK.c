
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserve_info {struct reserve_info* next; } ;


 int FUNC_0 (int ) ;

struct reserve_info *FUNC_1(struct reserve_info *VAR_0,
     struct reserve_info *VAR_1)
{
 FUNC_0(VAR_0->next == ((void*)0));

 VAR_0->next = VAR_1;
 return VAR_0;
}
