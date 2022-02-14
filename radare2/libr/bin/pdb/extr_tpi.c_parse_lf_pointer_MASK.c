
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptr_attr; } ;
struct TYPE_5__ {int pad; TYPE_1__ ptr_attr; int utype; } ;
typedef TYPE_2__ SLF_POINTER ;


 int FUNC_0 (int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(SLF_POINTER *VAR_2, unsigned char *VAR_3, unsigned int *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = *VAR_4;

 FUNC_2(*VAR_4, VAR_5, VAR_2->utype, VAR_3, VAR_0);
 FUNC_2(*VAR_4, VAR_5, VAR_2->ptr_attr.ptr_attr, VAR_3, VAR_0);

 VAR_2->ptr_attr.ptr_attr = FUNC_3(VAR_2->ptr_attr.ptr_attr);

 FUNC_1(*VAR_4, VAR_5, VAR_2->pad, VAR_3, VAR_1);
 FUNC_0(VAR_2->pad, *VAR_4, VAR_3, VAR_5);

 return *VAR_4 - VAR_6;
}
