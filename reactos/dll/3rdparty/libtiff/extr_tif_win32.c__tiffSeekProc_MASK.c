
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int thandle_t ;
struct TYPE_2__ {scalar_t__ LowPart; scalar_t__ QuadPart; int HighPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 scalar_t__ FUNC_1 (int ,scalar_t__,int *,int ) ;

__attribute__((used)) static uint64
FUNC_2(thandle_t VAR_5, uint64 VAR_6, int VAR_7)
{
 LARGE_INTEGER VAR_8;
 DWORD VAR_9;
 VAR_8.QuadPart = VAR_6;
 switch(VAR_7)
 {
  case 128:
   VAR_9 = VAR_0;
   break;
  case 130:
   VAR_9 = VAR_1;
   break;
  case 129:
   VAR_9 = VAR_2;
   break;
  default:
   VAR_9 = VAR_0;
   break;
 }
 VAR_8.LowPart=FUNC_1(VAR_5,VAR_8.LowPart,&VAR_8.HighPart,VAR_9);
 if ((VAR_8.LowPart==VAR_3)&&(FUNC_0()!=VAR_4))
  VAR_8.QuadPart=0;
 return(VAR_8.QuadPart);
}
