
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64 ;
typedef int thandle_t ;
struct TYPE_2__ {int QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static uint64
FUNC_1(thandle_t VAR_0)
{
 ULARGE_INTEGER VAR_1;
 VAR_1.LowPart=FUNC_0(VAR_0,&VAR_1.HighPart);
 return(VAR_1.QuadPart);
}
