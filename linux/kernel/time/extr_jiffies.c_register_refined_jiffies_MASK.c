
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {char* name; int mult; int rating; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int,int) ;
 TYPE_1__ VAR_4 ;

int FUNC_2(long VAR_5)
{
 u64 VAR_6, VAR_7;
 long VAR_8;



 VAR_4 = VAR_3;
 VAR_4.name = "refined-jiffies";
 VAR_4.rating++;


 VAR_8 = (VAR_5 + VAR_0/2)/VAR_0;

 VAR_7 = (u64)VAR_5 << 8;
 VAR_7 += VAR_8/2;
 FUNC_1(VAR_7, VAR_8);

 VAR_6 = (u64)VAR_2 << 8;
 VAR_6 += (u32)VAR_7/2;
 FUNC_1(VAR_6, (u32)VAR_7);

 VAR_4.mult = ((u32)VAR_6) << VAR_1;

 FUNC_0(&VAR_4);
 return 0;
}
