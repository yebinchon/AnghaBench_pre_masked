
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct table {void* num_rows; scalar_t__ data; } ;
struct record_videocontroller {int availability; int current_bitsperpixel; int current_scanmode; int videoarchitecture; int videomemorytype; void* videoprocessor; void* videomodedescription; int status; int pnpdevice_id; void* name; int installeddriver; int driverversion; int driverdate; void* device_id; void* description; void* current_verticalres; scalar_t__ current_refreshrate; void* current_horizontalres; void* caption; scalar_t__ config_errorcode; void* adapter_ram; int adapter_dactype; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef int desc ;
typedef char WCHAR ;
typedef int UINT64 ;
typedef void* UINT ;
struct TYPE_5__ {char* Description; int VendorId; void* DedicatedVideoMemory; } ;
typedef int IDXGIFactory ;
typedef int IDXGIAdapter ;
typedef int HRESULT ;
typedef TYPE_1__ DXGI_ADAPTER_DESC ;


 int FUNC_0 (int *,void**) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int **) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,void*) ;
 int FUNC_8 (struct table*,void*) ;
 int FUNC_9 (void**,void**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 void* FUNC_12 (char const*) ;
 int FUNC_13 (struct table*,void*,struct expr const*,int*) ;
 int FUNC_14 (TYPE_1__*,int ,int) ;
 int FUNC_15 (struct table*,int,int) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (char*,char const*,void*,void*,int) ;

__attribute__((used)) static enum fill_status FUNC_17( struct table *VAR_8, const struct expr *VAR_9 )
{
    static const WCHAR VAR_10[] = {'%','u',' ','x',' ','%','u',' ','x',' ','%','I','6','4','u',' ','c','o','l','o','r','s',0};
    struct record_videocontroller *VAR_11;
    HRESULT VAR_12;
    IDXGIFactory *VAR_13 = ((void*)0);
    IDXGIAdapter *VAR_14 = ((void*)0);
    DXGI_ADAPTER_DESC VAR_15;
    UINT VAR_16 = 0, VAR_17 = 1024, VAR_18 = 768, VAR_19 = 512 * 1024 * 1024;
    const WCHAR *VAR_20 = VAR_4;
    enum fill_status VAR_21 = VAR_1;
    WCHAR VAR_22[44];

    if (!FUNC_15( VAR_8, 1, sizeof(*VAR_11) )) return VAR_0;

    FUNC_14 (&VAR_15, 0, sizeof(VAR_15));
    VAR_12 = FUNC_0( &VAR_2, (void **)&VAR_13 );
    if (FUNC_1(VAR_12)) goto done;

    VAR_12 = FUNC_4( VAR_13, 0, &VAR_14 );
    if (FUNC_1(VAR_12)) goto done;

    VAR_12 = FUNC_2( VAR_14, &VAR_15 );
    if (FUNC_6(VAR_12))
    {
        VAR_19 = VAR_15.DedicatedVideoMemory;
        VAR_20 = VAR_15.Description;
    }

done:
    VAR_11 = (struct record_videocontroller *)VAR_8->data;
    VAR_11->adapter_dactype = VAR_3;
    VAR_11->adapter_ram = VAR_19;
    VAR_11->availability = 3;
    VAR_11->config_errorcode = 0;
    VAR_11->caption = FUNC_12( VAR_20 );
    VAR_11->current_bitsperpixel = FUNC_9( &VAR_17, &VAR_18 );
    VAR_11->current_horizontalres = VAR_17;
    VAR_11->current_refreshrate = 0;
    VAR_11->current_scanmode = 2;
    VAR_11->current_verticalres = VAR_18;
    VAR_11->description = FUNC_12( VAR_20 );
    VAR_11->device_id = VAR_4;
    VAR_11->driverdate = VAR_5;
    VAR_11->driverversion = VAR_6;
    VAR_11->installeddriver = FUNC_10( VAR_15.VendorId );
    VAR_11->name = FUNC_12( VAR_20 );
    VAR_11->pnpdevice_id = FUNC_11( &VAR_15 );
    VAR_11->status = VAR_7;
    VAR_11->videoarchitecture = 2;
    VAR_11->videomemorytype = 2;
    FUNC_16( VAR_22, VAR_10, VAR_17, VAR_18, (UINT64)1 << VAR_11->current_bitsperpixel );
    VAR_11->videomodedescription = FUNC_12( VAR_22 );
    VAR_11->videoprocessor = FUNC_12( VAR_20 );
    if (!FUNC_13( VAR_8, VAR_16, VAR_9, &VAR_21 )) FUNC_8( VAR_8, VAR_16 );
    else VAR_16++;

    FUNC_7("created %u rows\n", VAR_16);
    VAR_8->num_rows = VAR_16;

    if (VAR_14) FUNC_3( VAR_14 );
    if (VAR_13) FUNC_5( VAR_13 );
    return VAR_21;
}
