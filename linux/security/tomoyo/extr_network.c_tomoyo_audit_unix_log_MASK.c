
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* address; int operation; int protocol; } ;
struct TYPE_6__ {TYPE_2__ unix_network; } ;
struct tomoyo_request_info {TYPE_3__ param; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct tomoyo_request_info*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct tomoyo_request_info *VAR_0)
{
 return FUNC_0(VAR_0, "unix", VAR_0->param.unix_network.protocol,
        VAR_0->param.unix_network.operation,
        VAR_0->param.unix_network.address->name);
}
