
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct table {scalar_t__ num_rows; scalar_t__ data; } ;
struct record_pnpentity {int device_id; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef int devinfo ;
typedef int WCHAR ;
struct TYPE_4__ {int cbSize; int member_0; } ;
typedef TYPE_1__ SP_DEVINFO_DATA ;
typedef int HDEVINFO ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int *,int *,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int *,int ,int *) ;
 int FUNC_5 (struct table*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct table*,scalar_t__,struct expr const*,int*) ;
 int FUNC_8 (struct table*,scalar_t__,int) ;

__attribute__((used)) static enum fill_status FUNC_9( struct table *VAR_4, const struct expr *VAR_5 )
{
    struct record_pnpentity *VAR_6;
    enum fill_status VAR_7 = VAR_2;
    HDEVINFO VAR_8;
    SP_DEVINFO_DATA VAR_9 = {0};
    DWORD VAR_10;

    VAR_8 = FUNC_3( ((void*)0), ((void*)0), ((void*)0), VAR_0|VAR_1 );

    VAR_9.cbSize = sizeof(VAR_9);

    VAR_10 = 0;
    while (FUNC_2( VAR_8, VAR_10++, &VAR_9 ))
    {

    }

    FUNC_8( VAR_4, VAR_10, sizeof(*VAR_6) );
    VAR_4->num_rows = 0;
    VAR_6 = (struct record_pnpentity *)VAR_4->data;

    VAR_10 = 0;
    while (FUNC_2( VAR_8, VAR_10++, &VAR_9 ))
    {
        WCHAR VAR_11[VAR_3];
        if (FUNC_4( VAR_8, &VAR_9, VAR_11,
                    FUNC_0(VAR_11), ((void*)0) ))
        {
            VAR_6->device_id = FUNC_6( VAR_11 );

            VAR_4->num_rows++;
            if (!FUNC_7( VAR_4, VAR_4->num_rows - 1, VAR_5, &VAR_7 ))
            {
                FUNC_5( VAR_4, VAR_4->num_rows - 1 );
                VAR_4->num_rows--;
            }
            else
                VAR_6++;
        }
    }

    FUNC_1( VAR_8 );

    return VAR_7;
}
