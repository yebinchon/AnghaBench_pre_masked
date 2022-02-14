
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {int lastinc; int tbl; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

ulong FUNC_0 (void)
{
 ulong VAR_5 = VAR_1;

 if (VAR_5 >= VAR_4->arch.lastinc) {

  VAR_4->arch.tbl += (VAR_5 - VAR_4->arch.lastinc);
 } else {

  VAR_4->arch.tbl += ((VAR_3 / (VAR_2 / VAR_0))
     - VAR_4->arch.lastinc) + VAR_5;
 }
 VAR_4->arch.lastinc = VAR_5;
 return VAR_4->arch.tbl;
}
