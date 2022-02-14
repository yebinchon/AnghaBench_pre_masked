
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int result; int * raddr; int method; } ;
typedef TYPE_1__ check_network_data ;
typedef int SockAddr ;
typedef int IPCompareMethod ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_2(SockAddr *VAR_3, IPCompareMethod VAR_4)
{
 check_network_data VAR_5;

 VAR_5.method = VAR_4;
 VAR_5.raddr = VAR_3;
 VAR_5.result = 0;

 VAR_2 = 0;
 if (FUNC_1(VAR_1, &VAR_5) < 0)
 {
  FUNC_0(VAR_0, "error enumerating network interfaces: %m");
  return 0;
 }

 return VAR_5.result;
}
