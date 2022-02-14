
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t operation; TYPE_2__* filename2; TYPE_1__* filename1; } ;
struct TYPE_8__ {TYPE_3__ path2; } ;
struct tomoyo_request_info {TYPE_4__ param; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; } ;


 int * VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (struct tomoyo_request_info*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct tomoyo_request_info *VAR_2)
{
 return FUNC_0(VAR_2, "file %s %s %s\n", VAR_0
     [VAR_1[VAR_2->param.path2.operation]],
     VAR_2->param.path2.filename1->name,
     VAR_2->param.path2.filename2->name);
}
