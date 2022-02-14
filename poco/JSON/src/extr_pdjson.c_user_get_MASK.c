
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get ) (int ) ;int ptr; } ;
struct TYPE_4__ {TYPE_1__ user; } ;
struct json_source {TYPE_2__ source; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct json_source *VAR_0)
{
    return VAR_0->source.user.get(VAR_0->source.user.ptr);
}
