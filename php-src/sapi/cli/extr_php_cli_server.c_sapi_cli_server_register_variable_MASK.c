
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {scalar_t__ (* input_filter ) (int ,char*,char**,int ,size_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,size_t,int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,char*,char**,int ,size_t*) ;

__attribute__((used)) static void FUNC_3(zval *VAR_2, const char *VAR_3, const char *VAR_4)
{
 char *VAR_5 = (char *)VAR_4;
 size_t VAR_6;

 if (((void*)0) == VAR_4) {
  return;
 }

 if (VAR_1.input_filter(VAR_0, (char*)VAR_3, &VAR_5, FUNC_1(VAR_4), &VAR_6)) {
  FUNC_0((char *)VAR_3, VAR_5, VAR_6, VAR_2);
 }
}
