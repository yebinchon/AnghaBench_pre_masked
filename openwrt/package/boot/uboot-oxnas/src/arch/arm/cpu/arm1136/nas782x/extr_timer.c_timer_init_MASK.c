
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {scalar_t__ tbl; int lastinc; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_0 (int,scalar_t__) ;

int FUNC_1 (void)
{
 int32_t VAR_12;


 FUNC_0(VAR_7, VAR_0 + VAR_6);

 VAR_12 = (VAR_1 << VAR_10) |
   (VAR_8 << VAR_9) |
   (VAR_4 << VAR_5);
 FUNC_0(VAR_12, VAR_0 + VAR_3);


 VAR_11->arch.lastinc = VAR_2;
 VAR_11->arch.tbl = 0;

 return(0);
}
