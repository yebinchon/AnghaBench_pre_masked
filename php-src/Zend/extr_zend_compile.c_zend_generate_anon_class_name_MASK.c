
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_2__ {int * filename; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int VAR_0 ;
 size_t FUNC_3 (char*,char*,...) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;

__attribute__((used)) static zend_string *FUNC_6(unsigned char *VAR_1)
{
 zend_string *VAR_2;
 char VAR_3[32];
 size_t VAR_4 = FUNC_3(VAR_3, "%p", VAR_1);
 zend_string *VAR_5 = FUNC_0(VAR_0)->filename;


 VAR_2 = FUNC_5(sizeof("class@anonymous") + FUNC_1(VAR_5) + VAR_4, 0);
 FUNC_3(FUNC_2(VAR_2), "class@anonymous%c%s%s", '\0', FUNC_2(VAR_5), VAR_3);
 return FUNC_4(VAR_2);
}
