
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_tag {int usage; } ;


 int FUNC_0 (struct key_tag*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

bool FUNC_2(struct key_tag *VAR_1)
{
 if (FUNC_1(&VAR_1->usage)) {
  FUNC_0(VAR_1, VAR_0);
  return 1;
 }

 return 0;
}
