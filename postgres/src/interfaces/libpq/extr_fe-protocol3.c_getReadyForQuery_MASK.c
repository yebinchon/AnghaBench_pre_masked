
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xactStatus; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(PGconn *VAR_5)
{
 char VAR_6;

 if (FUNC_0(&VAR_6, VAR_5))
  return VAR_0;
 switch (VAR_6)
 {
  case 'I':
   VAR_5->xactStatus = VAR_1;
   break;
  case 'T':
   VAR_5->xactStatus = VAR_3;
   break;
  case 'E':
   VAR_5->xactStatus = VAR_2;
   break;
  default:
   VAR_5->xactStatus = VAR_4;
   break;
 }

 return 0;
}
