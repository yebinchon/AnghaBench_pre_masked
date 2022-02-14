
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {scalar_t__ (* input_filter ) (int,char*,char**,int ,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,size_t,int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,char*,char**,int ,size_t*) ;

__attribute__((used)) static void FUNC_6(char *VAR_5, unsigned int VAR_6, char *VAR_7, unsigned int VAR_8, void *VAR_9)
{
 zval *VAR_10 = (zval*)VAR_9;
 int VAR_11 = (FUNC_2(VAR_10) == FUNC_1(FUNC_0(VAR_3)[VAR_2]))?VAR_0:VAR_1;
 size_t VAR_12;

 if (VAR_4.input_filter(VAR_11, VAR_5, &VAR_7, FUNC_4(VAR_7), &VAR_12)) {
  FUNC_3(VAR_5, VAR_7, VAR_12, VAR_10);
 }
}
