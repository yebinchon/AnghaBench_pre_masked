
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int * name; } ;
typedef TYPE_1__ SCString ;


 int FUNC_0 (unsigned int,int,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int,char*) ;

int FUNC_2(SCString *VAR_0, unsigned char *VAR_1, unsigned int *VAR_2, unsigned int VAR_3) {
 unsigned int VAR_4 = 0;
 VAR_0->name = ((void*)0);
 VAR_0->size = 0;
 while (*VAR_1) {
  FUNC_0((*VAR_2 + VAR_4), 1, VAR_3);
  VAR_4++;
  VAR_1++;
 }
 FUNC_0(*VAR_2, 1, VAR_3);
 VAR_1 += 1;
 (*VAR_2) += (VAR_4 + 1);

 FUNC_1 (VAR_0, VAR_4 + 1, (char *)VAR_1 - (VAR_4 + 1));
 return 1;
}
