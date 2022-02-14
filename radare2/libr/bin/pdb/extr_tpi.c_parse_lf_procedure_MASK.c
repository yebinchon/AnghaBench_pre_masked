
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pad; int arg_list; int parm_count; int reserved; int call_conv; int return_type; } ;
typedef TYPE_1__ SLF_PROCEDURE ;


 int FUNC_0 (int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_3 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_4 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(SLF_PROCEDURE *VAR_3, unsigned char *VAR_4, unsigned int *VAR_5, unsigned int VAR_6) {
 unsigned int VAR_7 = *VAR_5;

 FUNC_4(*VAR_5, VAR_6, VAR_3->return_type, VAR_4, VAR_1);
 FUNC_2(*VAR_5, VAR_6, VAR_3->call_conv, VAR_4, VAR_2);
 FUNC_2(*VAR_5, VAR_6, VAR_3->reserved, VAR_4, VAR_2);
 FUNC_3(*VAR_5, VAR_6, VAR_3->parm_count, VAR_4, VAR_0);
 FUNC_4(*VAR_5, VAR_6, VAR_3->arg_list, VAR_4, VAR_1);

 FUNC_1(*VAR_5, VAR_6, VAR_3->pad, VAR_4, VAR_2);
 FUNC_0(VAR_3->pad, *VAR_5, VAR_4, VAR_6);

 return *VAR_5 - VAR_7;
}
