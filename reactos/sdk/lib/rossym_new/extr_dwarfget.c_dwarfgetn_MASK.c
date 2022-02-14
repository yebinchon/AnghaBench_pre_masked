
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_3__ {scalar_t__ p; scalar_t__ ep; } ;
typedef TYPE_1__ DwarfBuf ;


 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_0 ;

int
FUNC_2(DwarfBuf *VAR_1, uchar *VAR_2, int VAR_3)
{
 if(VAR_1->p==VAR_0 || VAR_1->p+VAR_3 > VAR_1->ep){
  VAR_1->p = VAR_0;
  FUNC_1(VAR_2, 0, VAR_3);
  return -1;
 }
 FUNC_0(VAR_2, VAR_1->p, VAR_3);
 VAR_1->p += VAR_3;
 return 0;
}
