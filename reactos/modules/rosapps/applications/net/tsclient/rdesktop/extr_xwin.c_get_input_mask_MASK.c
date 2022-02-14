
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ grab_keyboard; scalar_t__ fullscreen; scalar_t__ ownbackstore; scalar_t__ sendmotion; } ;
typedef TYPE_1__ RDPCLIENT ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;

__attribute__((used)) static void
FUNC_0(RDPCLIENT * VAR_11, long *VAR_12)
{
 *VAR_12 = VAR_5 | VAR_6 | VAR_0 | VAR_1 |
  VAR_10 | VAR_4 | VAR_9;

 if (VAR_11->sendmotion)
  *VAR_12 |= VAR_8;
 if (VAR_11->ownbackstore)
  *VAR_12 |= VAR_3;
 if (VAR_11->fullscreen || VAR_11->grab_keyboard)
  *VAR_12 |= VAR_2;
 if (VAR_11->grab_keyboard)
  *VAR_12 |= VAR_7;
}
