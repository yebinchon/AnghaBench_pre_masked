
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ u; } ;
struct wgl_dc_data {struct wgl_dc_data* next; int nb_sw_formats; scalar_t__ nb_icd_formats; TYPE_2__* icd_data; int * sw_data; scalar_t__ pixelformat; int flags; TYPE_1__ owner; } ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_4__ {int * DriverName; scalar_t__ (* DrvDescribePixelFormat ) (int ,int ,int ,int *) ;} ;
typedef int PIXELFORMATDESCRIPTOR ;
typedef int INT ;
typedef int * HWND ;
typedef int HDC ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct wgl_dc_data* FUNC_3 (int ,int ,int) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*,int *,scalar_t__,int ) ;
 int VAR_2 ;
 int * FUNC_7 (int ) ;
 int VAR_3 ;
 struct wgl_dc_data* VAR_4 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ,int *) ;

__attribute__((used)) static
struct wgl_dc_data*
FUNC_10(HDC VAR_5, INT VAR_6, UINT VAR_7, PIXELFORMATDESCRIPTOR *VAR_8)
{
    HWND VAR_9 = ((void*)0);
    struct wgl_dc_data* VAR_10;
    DWORD VAR_11 = FUNC_1(VAR_5);
    ULONG VAR_12 = 0;
    union
    {
        HWND hwnd;
        HDC hdc;
        HANDLE u;
    } VAR_13;


    if(VAR_11 == VAR_0)
    {
        VAR_9 = FUNC_7(VAR_5);
        if(!VAR_9)
            return ((void*)0);
        VAR_13.hwnd = VAR_9;
        VAR_12 = VAR_2;
    }
    else if(VAR_11 == VAR_1)
    {
        VAR_13.hdc = VAR_5;
    }
    else
    {
        return ((void*)0);
    }

    FUNC_0(&VAR_3);
    VAR_10 = VAR_4;
    while(VAR_10)
    {
        if(VAR_10->owner.u == VAR_13.u)
        {
            FUNC_5(&VAR_3);
            return VAR_10;
        }
        VAR_10 = VAR_10->next;
    }
    VAR_10= FUNC_3(FUNC_2(), 0, sizeof(*VAR_10));
    if(!VAR_10)
    {
        FUNC_5(&VAR_3);
        return ((void*)0);
    }

    VAR_10->owner.u = VAR_13.u;
    VAR_10->flags = VAR_12;
    VAR_10->pixelformat = 0;
    VAR_10->sw_data = ((void*)0);

    VAR_10->icd_data = FUNC_4(VAR_5);

    if(VAR_10->icd_data)
        VAR_10->nb_icd_formats = VAR_10->icd_data->DrvDescribePixelFormat(VAR_5, VAR_6, VAR_7, VAR_8);
    else
        VAR_10->nb_icd_formats = 0;
    FUNC_6("ICD %S has %u formats for HDC %x.\n", VAR_10->icd_data ? VAR_10->icd_data->DriverName : ((void*)0), VAR_10->nb_icd_formats, VAR_5);
    VAR_10->nb_sw_formats = FUNC_9(VAR_5, 0, 0, ((void*)0));
    VAR_10->next = VAR_4;
    VAR_4 = VAR_10;
    FUNC_5(&VAR_3);
    return VAR_10;
}
