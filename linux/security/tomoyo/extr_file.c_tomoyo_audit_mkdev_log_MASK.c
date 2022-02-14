
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t operation; int minor; int major; int mode; TYPE_1__* filename; } ;
struct TYPE_6__ {TYPE_2__ mkdev; } ;
struct tomoyo_request_info {TYPE_3__ param; } ;
struct TYPE_4__ {int name; } ;


 int * VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (struct tomoyo_request_info*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct tomoyo_request_info *VAR_2)
{
 return FUNC_0(VAR_2, "file %s %s 0%o %u %u\n",
     VAR_0
     [VAR_1[VAR_2->param.mkdev.operation]],
     VAR_2->param.mkdev.filename->name,
     VAR_2->param.mkdev.mode, VAR_2->param.mkdev.major,
     VAR_2->param.mkdev.minor);
}
