
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* mbverifier ) (unsigned char*,int) ;
struct TYPE_2__ {int (* mbverify ) (unsigned char*,int) ;} ;


 size_t FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static bool
FUNC_2(unsigned char *VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = VAR_1 + VAR_2 - 1;
 mbverifier VAR_4;


 VAR_4 = VAR_0[FUNC_0()].mbverify;

 while (*VAR_3 < (unsigned char) 255)
 {
  (*VAR_3)++;
  if ((*VAR_4) (VAR_1, VAR_2) == VAR_2)
   return 1;
 }

 return 0;
}
