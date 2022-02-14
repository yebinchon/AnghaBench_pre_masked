
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pad; int position; int length; int base_type; } ;
typedef TYPE_1__ SLF_BITFIELD ;


 int FUNC_0 (int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_3 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(SLF_BITFIELD *VAR_2, unsigned char *VAR_3, unsigned int *VAR_4, unsigned int VAR_5) {
 unsigned int VAR_6 = *VAR_4;

 FUNC_3(*VAR_4, VAR_5, VAR_2->base_type, VAR_3, VAR_0);
 FUNC_2(*VAR_4, VAR_5, VAR_2->length, VAR_3, VAR_1);
 FUNC_2(*VAR_4, VAR_5, VAR_2->position, VAR_3, VAR_1);

 FUNC_1(*VAR_4, VAR_5, VAR_2->pad, VAR_3, VAR_1);
 FUNC_0(VAR_2->pad, *VAR_4, VAR_3, VAR_5);

 return *VAR_4 - VAR_6;
}
