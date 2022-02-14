
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t operation; TYPE_1__* filename; } ;
struct TYPE_6__ {TYPE_2__ path; } ;
struct tomoyo_request_info {TYPE_3__ param; } ;
struct TYPE_4__ {int name; } ;


 int * VAR_0 ;
 int FUNC_0 (struct tomoyo_request_info*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct tomoyo_request_info *VAR_1)
{
 return FUNC_0(VAR_1, "file %s %s\n", VAR_0
     [VAR_1->param.path.operation],
     VAR_1->param.path.filename->name);
}
