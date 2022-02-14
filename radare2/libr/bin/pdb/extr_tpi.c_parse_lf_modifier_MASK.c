
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int modifier; } ;
struct TYPE_5__ {int pad; TYPE_1__ umodifier; int modified_type; } ;
typedef TYPE_2__ SLF_MODIFIER ;


 int FUNC_0 (int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_3 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(SLF_MODIFIER *VAR_3, unsigned char *VAR_4, unsigned int *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = *VAR_5;

 FUNC_3(*VAR_5, VAR_6, VAR_3->modified_type, VAR_4, VAR_1);
 FUNC_2(*VAR_5, VAR_6, VAR_3->umodifier.modifier, VAR_4, VAR_0);
 VAR_3->umodifier.modifier = FUNC_4(VAR_3->umodifier.modifier);

 FUNC_1(*VAR_5, VAR_6, VAR_3->pad, VAR_4, VAR_2);
 FUNC_0(VAR_3->pad, *VAR_5, VAR_4, VAR_6);

 return *VAR_5 - VAR_7;
}
