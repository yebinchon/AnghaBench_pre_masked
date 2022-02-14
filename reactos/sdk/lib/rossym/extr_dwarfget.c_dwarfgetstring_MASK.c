
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* p; char* ep; } ;
typedef TYPE_1__ DwarfBuf ;


 char* VAR_0 ;

char*
FUNC_0(DwarfBuf *VAR_1)
{
 char *VAR_2;

 if(VAR_1->p == VAR_0)
  return VAR_0;
 VAR_2 = (char*)VAR_1->p;
 while(VAR_1->p < VAR_1->ep && *VAR_1->p)
  VAR_1->p++;
 if(VAR_1->p >= VAR_1->ep){
  VAR_1->p = VAR_0;
  return VAR_0;
 }
 VAR_1->p++;
 return VAR_2;
}
