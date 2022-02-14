
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
typedef int uchar ;
struct TYPE_3__ {scalar_t__ p; scalar_t__ ep; } ;
typedef TYPE_1__ DwarfBuf ;


 int * VAR_0 ;

uchar*
FUNC_0(DwarfBuf *VAR_1, ulong VAR_2)
{
 uchar *VAR_3;

 if(VAR_1->p==VAR_0 || VAR_1->p+VAR_2 > VAR_1->ep){
  VAR_1->p = VAR_0;
  return VAR_0;
 }
 VAR_3 = VAR_1->p;
 VAR_1->p += VAR_2;
 return VAR_3;
}
