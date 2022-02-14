
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_hook_entry {int entry; int * hook; int id; } ;
typedef int * REFGUID ;
typedef int IChannelHook ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 struct channel_hook_entry* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

HRESULT FUNC_8(REFGUID VAR_4, IChannelHook *VAR_5)
{
    struct channel_hook_entry *VAR_6;

    FUNC_5("(%s, %p)\n", FUNC_6(VAR_4), VAR_5);

    VAR_6 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_6));
    if (!VAR_6)
        return VAR_0;

    VAR_6->id = *VAR_4;
    VAR_6->hook = VAR_5;
    FUNC_3(VAR_5);

    FUNC_0(&VAR_3);
    FUNC_7(&VAR_2, &VAR_6->entry);
    FUNC_4(&VAR_3);

    return VAR_1;
}
