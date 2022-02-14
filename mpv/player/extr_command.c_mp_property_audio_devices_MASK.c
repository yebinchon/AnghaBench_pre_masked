
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_property {int dummy; } ;
struct command_ctx {int hotplug; } ;
struct ao_device_list {int num_devices; } ;
struct MPContext {struct command_ctx* command_ctx; } ;


 struct ao_device_list* FUNC_0 (int ) ;
 int FUNC_1 (struct MPContext*) ;
 int VAR_0 ;
 int FUNC_2 (int,void*,int ,int ,struct ao_device_list*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct m_property *VAR_2,
                                     int VAR_3, void *VAR_4)
{
    struct MPContext *VAR_5 = VAR_1;
    struct command_ctx *VAR_6 = VAR_5->command_ctx;
    FUNC_1(VAR_5);

    struct ao_device_list *VAR_7 = FUNC_0(VAR_6->hotplug);
    return FUNC_2(VAR_3, VAR_4, VAR_7->num_devices,
                                VAR_0, VAR_7);
}
