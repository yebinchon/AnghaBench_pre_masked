
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uvlong ;
struct TYPE_7__ {scalar_t__ p; scalar_t__ ep; TYPE_2__* d; } ;
struct TYPE_6__ {TYPE_1__* pe; } ;
struct TYPE_5__ {int (* e8 ) (scalar_t__) ;} ;
typedef TYPE_3__ DwarfBuf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

uvlong
FUNC_1(DwarfBuf *VAR_1)
{
 uvlong VAR_2;

 if(VAR_1->p==VAR_0 || VAR_1->p+8 > VAR_1->ep){
  VAR_1->p = VAR_0;
  return 0;
 }
 VAR_2 = VAR_1->d->pe->e8(VAR_1->p);
 VAR_1->p += 8;
 return VAR_2;
}
