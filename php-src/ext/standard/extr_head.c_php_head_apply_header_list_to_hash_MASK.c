
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {scalar_t__ header; } ;
typedef TYPE_1__ sapi_header_struct ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1)
{
 sapi_header_struct *VAR_2 = (sapi_header_struct *)VAR_0;

 if (VAR_1 && VAR_2) {
  FUNC_0((zval *)VAR_1, (char *)(VAR_2->header));
 }
}
