
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct enum_cb {int data; scalar_t__ (* cb ) (int ,int ,int ) ;scalar_t__ cont; } ;
struct TYPE_3__ {scalar_t__ monitor_of_sink; int name; int description; } ;
typedef TYPE_1__ pa_source_info ;
typedef int pa_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(pa_context *VAR_1, const pa_source_info *VAR_2,
       int VAR_3, void *VAR_4)
{
 FUNC_0(VAR_1);
 if (VAR_3 != 0 || VAR_2->monitor_of_sink == VAR_0)
  goto skip;

 struct enum_cb *VAR_5 = (struct enum_cb *)VAR_4;
 if (VAR_5->cont)
  VAR_5->cont = VAR_5->cb(VAR_5->data, VAR_2->description, VAR_2->name);

skip:
 FUNC_1(0);
}
