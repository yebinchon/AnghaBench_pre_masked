
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wxflag; char* lookahead; int exflag; int handle; } ;
typedef TYPE_1__ ioinfo ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__** VAR_10 ;

__attribute__((used)) static void FUNC_1(ioinfo *VAR_11, HANDLE VAR_12, int VAR_13)
{
  VAR_11->handle = VAR_12;
  VAR_11->wxflag = VAR_6 | (VAR_13 & (VAR_5 | VAR_4 | VAR_8 | VAR_7 | VAR_9));
  VAR_11->lookahead[0] = '\n';
  VAR_11->lookahead[1] = '\n';
  VAR_11->lookahead[2] = '\n';
  VAR_11->exflag &= VAR_0;

  switch (VAR_11-VAR_10[0])
  {
  case 0: FUNC_0(VAR_2, VAR_12); break;
  case 1: FUNC_0(VAR_3, VAR_12); break;
  case 2: FUNC_0(VAR_1, VAR_12); break;
  }
}
