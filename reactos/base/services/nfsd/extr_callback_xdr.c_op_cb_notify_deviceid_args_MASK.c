
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef size_t uint32_t ;
struct notify_deviceid4 {int type; } ;
struct TYPE_8__ {size_t count; int* arr; } ;
struct notify4 {TYPE_1__ mask; int len; int list; } ;
struct cb_notify_deviceid_args {size_t notify_count; size_t change_count; struct notify_deviceid4* change_list; struct notify4* notify_list; } ;
typedef int bool_t ;
struct TYPE_9__ {int x_op; } ;
typedef TYPE_2__ XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;


 struct notify_deviceid4* FUNC_1 (size_t,int) ;
 int FUNC_2 (TYPE_2__*,struct notify_deviceid4*) ;
 int FUNC_3 (TYPE_2__*,struct notify_deviceid4*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct notify_deviceid4*) ;
 int FUNC_5 (TYPE_2__*,char**,size_t*,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static bool_t FUNC_7(XDR *VAR_5, struct cb_notify_deviceid_args *VAR_6)
{
    XDR VAR_7;
    uint32_t VAR_8, VAR_9, VAR_10;
    bool_t VAR_11;


    VAR_11 = FUNC_5(VAR_5, (char**)&VAR_6->notify_list,
        &VAR_6->notify_count, VAR_0,
        sizeof(struct notify4), (xdrproc_t)VAR_4);
    if (!VAR_11) { FUNC_0("notify_deviceid.notify_list"); goto out; }

    switch (VAR_5->x_op) {
    case 128:
        FUNC_4(VAR_6->change_list);
    case 129:
        return VAR_2;
    }


    VAR_6->change_count = 0;
    for (VAR_8 = 0; VAR_8 < VAR_6->notify_count; VAR_8++)
        VAR_6->change_count += VAR_6->notify_list[VAR_8].mask.count;

    VAR_6->change_list = FUNC_1(VAR_6->change_count, sizeof(struct notify_deviceid4));
    if (VAR_6->change_list == ((void*)0))
        return VAR_1;

    VAR_10 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_6->notify_count; VAR_8++) {
        struct notify4 *VAR_12 = &VAR_6->notify_list[VAR_8];


        FUNC_6(&VAR_7, VAR_12->list, VAR_12->len, VAR_3);

        for (VAR_9 = 0; VAR_9 < VAR_12->mask.count; VAR_9++) {
            struct notify_deviceid4 *VAR_13 = &VAR_6->change_list[VAR_10++];
            VAR_13->type = VAR_12->mask.arr[VAR_9];

            switch (VAR_13->type) {
            case 131:
                VAR_11 = FUNC_2(&VAR_7, VAR_13);
                if (!VAR_11) { FUNC_0("notify_deviceid.change"); goto out; }
                break;
            case 130:
                VAR_11 = FUNC_3(&VAR_7, VAR_13);
                if (!VAR_11) { FUNC_0("notify_deviceid.delete"); goto out; }
                break;
            }
        }
    }
out:
    return VAR_11;
}
