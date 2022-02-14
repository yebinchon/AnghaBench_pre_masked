
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ name; } ;
struct TYPE_5__ {int cv_property; } ;
struct TYPE_6__ {int pad; TYPE_3__ name; TYPE_1__ prop; int field_list; int utype; int count; } ;
typedef TYPE_2__ SLF_ENUM ;


 int FUNC_0 (int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_3 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,unsigned char*,unsigned int*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(SLF_ENUM *VAR_3, unsigned char *VAR_4, unsigned int *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = *VAR_5;
 unsigned int VAR_8 = 0;

 VAR_3->name.name = 0;

 FUNC_2(*VAR_5, VAR_6, VAR_3->count, VAR_4, VAR_0);
 FUNC_2(*VAR_5, VAR_6, VAR_3->prop.cv_property, VAR_4, VAR_0);
 FUNC_3(*VAR_5, VAR_6, VAR_3->utype, VAR_4, VAR_1);
 FUNC_3(*VAR_5, VAR_6, VAR_3->field_list, VAR_4, VAR_1);

 VAR_3->prop.cv_property = FUNC_4(VAR_3->prop.cv_property);
 VAR_8 = *VAR_5;
 FUNC_5 (&VAR_3->name, VAR_4, VAR_5, VAR_6);
 VAR_4 += (*VAR_5 - VAR_8);

 FUNC_1(*VAR_5, VAR_6, VAR_3->pad, VAR_4, VAR_2);
 FUNC_0(VAR_3->pad, *VAR_5, VAR_4, VAR_6);


 return *VAR_5 - VAR_7;
}
