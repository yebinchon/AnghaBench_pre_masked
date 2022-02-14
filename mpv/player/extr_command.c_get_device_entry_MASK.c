
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_sub_property {char* member_0; int member_1; } ;
struct ao_device_list {struct ao_device_desc* devices; } ;
struct ao_device_desc {int desc; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct m_sub_property*,int,void*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, void *VAR_2, void *VAR_3)
{
    struct ao_device_list *VAR_4 = VAR_3;
    struct ao_device_desc *VAR_5 = &VAR_4->devices[VAR_0];

    struct m_sub_property VAR_6[] = {
        {"name", FUNC_0(VAR_5->name)},
        {"description", FUNC_0(VAR_5->desc)},
        {0}
    };

    return FUNC_1(VAR_6, VAR_1, VAR_2);
}
