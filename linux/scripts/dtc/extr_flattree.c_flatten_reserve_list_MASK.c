
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct version_info {int dummy; } ;
struct reserve_info {int size; int address; struct reserve_info* next; } ;
struct data {int dummy; } ;


 struct data FUNC_0 (struct data,int ,int ) ;
 struct data VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct data FUNC_1(struct reserve_info *VAR_2,
     struct version_info *VAR_3)
{
 struct reserve_info *VAR_4;
 struct data VAR_5 = VAR_0;
 int VAR_6;

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  VAR_5 = FUNC_0(VAR_5, VAR_4->address, VAR_4->size);
 }



 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = FUNC_0(VAR_5, 0, 0);
 }

 return VAR_5;
}
