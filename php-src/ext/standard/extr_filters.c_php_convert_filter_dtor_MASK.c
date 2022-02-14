
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int persistent; int * filtername; int * cd; } ;
typedef TYPE_1__ php_convert_filter ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(php_convert_filter *VAR_0)
{
 if (VAR_0->cd != ((void*)0)) {
  FUNC_1(VAR_0->cd);
  FUNC_0(VAR_0->cd, VAR_0->persistent);
 }

 if (VAR_0->filtername != ((void*)0)) {
  FUNC_0(VAR_0->filtername, VAR_0->persistent);
 }
}
