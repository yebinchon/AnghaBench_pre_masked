
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pending_message {int entry; scalar_t__ msg; } ;
typedef int pTW_IDENTITY ;
struct TYPE_3__ {scalar_t__ ui_window; scalar_t__ event_window; int pending_messages; } ;
typedef TYPE_1__ activeDS ;
typedef scalar_t__ TW_UINT16 ;
typedef int TW_MEMREF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct pending_message* FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int *) ;

TW_UINT16 FUNC_5 (pTW_IDENTITY VAR_10, pTW_IDENTITY VAR_11, activeDS *VAR_12, TW_UINT16 VAR_13, TW_MEMREF VAR_14)
{
    struct pending_message *VAR_15;

    FUNC_3 ("DG_CONTROL/DAT_NULL MSG=%i\n", VAR_13);

    if (VAR_13 != VAR_2 &&
        VAR_13 != VAR_3 &&
        VAR_13 != VAR_4)
    {
        VAR_1 = VAR_5;
        return VAR_7;
    }

    VAR_15 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_15));
    if (!VAR_15)
    {
        VAR_1 = VAR_6;
        return VAR_7;
    }

    VAR_15->msg = VAR_13;
    FUNC_4(&VAR_12->pending_messages, &VAR_15->entry);






    if (VAR_0)
        FUNC_2(VAR_0, VAR_9, 0, 0);
    if (VAR_12->ui_window && VAR_12->ui_window != VAR_0)
        FUNC_2(VAR_12->ui_window, VAR_9, 0, 0);
    if (VAR_12->event_window && VAR_12->event_window != VAR_12->ui_window &&
        VAR_12->event_window != VAR_0)
        FUNC_2(VAR_12->event_window, VAR_9, 0, 0);
    FUNC_2(0, VAR_9, 0, 0);

    return VAR_8;
}
