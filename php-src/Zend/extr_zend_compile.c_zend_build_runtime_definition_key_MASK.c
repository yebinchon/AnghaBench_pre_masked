
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_2__ {int * filename; } ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int VAR_0 ;
 size_t FUNC_3 (char*,char*,...) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static zend_string *FUNC_6(zend_string *VAR_1, unsigned char *VAR_2)
{
 zend_string *VAR_3;
 char VAR_4[32];
 size_t VAR_5 = FUNC_3(VAR_4, "%p", VAR_2);
 zend_string *VAR_6 = FUNC_0(VAR_0)->filename;


 VAR_3 = FUNC_5(1 + FUNC_1(VAR_1) + FUNC_1(VAR_6) + VAR_5, 0);
 FUNC_3(FUNC_2(VAR_3), "%c%s%s%s", '\0', FUNC_2(VAR_1), FUNC_2(VAR_6), VAR_4);
 return FUNC_4(VAR_3);
}
