
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int persistent; int * filtername; int * cd; scalar_t__ stub_len; } ;
typedef TYPE_1__ php_convert_filter ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (char const*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int *,int) ;

__attribute__((used)) static int FUNC_4(php_convert_filter *VAR_2,
 int VAR_3, HashTable *VAR_4,
 const char *VAR_5, int VAR_6)
{
 VAR_2->persistent = VAR_6;
 VAR_2->filtername = FUNC_1(VAR_5, VAR_6);
 VAR_2->stub_len = 0;

 if ((VAR_2->cd = FUNC_3(VAR_3, VAR_4, VAR_6)) == ((void*)0)) {
  goto out_failure;
 }

 return VAR_1;

out_failure:
 if (VAR_2->cd != ((void*)0)) {
  FUNC_2(VAR_2->cd);
  FUNC_0(VAR_2->cd, VAR_6);
 }
 if (VAR_2->filtername != ((void*)0)) {
  FUNC_0(VAR_2->filtername, VAR_6);
 }
 return VAR_0;
}
