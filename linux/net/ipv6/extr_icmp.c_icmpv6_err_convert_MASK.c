
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int err; int fatal; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 TYPE_1__* VAR_3 ;

int FUNC_1(u8 VAR_4, u8 VAR_5, int *VAR_6)
{
 int VAR_7 = 0;

 *VAR_6 = VAR_2;

 switch (VAR_4) {
 case 131:
  VAR_7 = 1;
  if (VAR_5 < FUNC_0(VAR_3)) {
   *VAR_6 = VAR_3[VAR_5].err;
   VAR_7 = VAR_3[VAR_5].fatal;
  }
  break;

 case 129:
  *VAR_6 = VAR_1;
  break;

 case 130:
  *VAR_6 = VAR_2;
  VAR_7 = 1;
  break;

 case 128:
  *VAR_6 = VAR_0;
  break;
 }

 return VAR_7;
}
