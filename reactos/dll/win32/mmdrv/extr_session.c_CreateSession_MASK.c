
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {struct TYPE_6__* next; int device_id; int device_type; } ;
typedef TYPE_1__ SessionInfo ;
typedef int MMRESULT ;
typedef int HANDLE ;
typedef int DeviceType ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

MMRESULT
FUNC_7(
    DeviceType VAR_6,
    UINT VAR_7,
    SessionInfo** VAR_8)
{
    HANDLE VAR_9 = FUNC_3();

    FUNC_0(VAR_8);

    FUNC_2(&VAR_5);



    if ( FUNC_4(VAR_6, VAR_7) )
    {
        FUNC_1("Already allocated session\n");
        FUNC_6(&VAR_5);
        return VAR_1;
    }

    *VAR_8 = FUNC_5(VAR_9, VAR_0, sizeof(SessionInfo));

    if ( ! *VAR_8 )
    {
        FUNC_1("Failed to allocate mem for session info\n");
        FUNC_6(&VAR_5);
        return VAR_3;
    }

    (*VAR_8)->device_type = VAR_6;
    (*VAR_8)->device_id = VAR_7;



    (*VAR_8)->next = VAR_4;
    VAR_4 = *VAR_8;

    FUNC_6(&VAR_5);

    return VAR_2;
}
