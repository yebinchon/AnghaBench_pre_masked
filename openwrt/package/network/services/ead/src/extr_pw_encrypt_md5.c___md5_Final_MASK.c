
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MD5Context {int state; } ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (struct MD5Context*) ;
 int FUNC_2 (struct MD5Context*,int ,int) ;

__attribute__((used)) static void FUNC_3(unsigned char VAR_0[16], struct MD5Context *VAR_1)
{

 FUNC_1(VAR_1);


 FUNC_0(VAR_0, VAR_1->state, 16);


 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
}
