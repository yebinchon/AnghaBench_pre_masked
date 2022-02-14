
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * uncompressedfp; int * compressedfp; } ;
typedef TYPE_1__ cfp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(cfp *VAR_3)
{
 int VAR_4;

 if (VAR_3 == ((void*)0))
 {
  VAR_2 = VAR_0;
  return VAR_1;
 }
 {
  VAR_4 = FUNC_0(VAR_3->uncompressedfp);
  VAR_3->uncompressedfp = ((void*)0);
 }
 FUNC_1(VAR_3);

 return VAR_4;
}
