
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readtup; int writetup; int copytup; } ;
typedef TYPE_1__ Tuplestorestate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int,int) ;
 int VAR_4 ;

Tuplestorestate *
FUNC_1(bool VAR_5, bool VAR_6, int VAR_7)
{
 Tuplestorestate *VAR_8;
 int VAR_9;





 VAR_9 = VAR_5 ?
  (VAR_0 | VAR_1) :
  (VAR_1);

 VAR_8 = FUNC_0(VAR_9, VAR_6, VAR_7);

 VAR_8->copytup = VAR_2;
 VAR_8->writetup = VAR_4;
 VAR_8->readtup = VAR_3;

 return VAR_8;
}
