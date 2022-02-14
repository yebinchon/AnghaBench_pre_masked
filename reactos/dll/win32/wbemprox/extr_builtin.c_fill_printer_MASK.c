
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct table {size_t data; size_t num_rows; } ;
struct record_printer {int local; void* portname; scalar_t__ network; void* name; void* location; int horizontalresolution; void* drivername; void* device_id; int attributes; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef char WCHAR ;
struct TYPE_10__ {char* pDriverName; char* pLocation; char* pPrinterName; char* pPortName; TYPE_3__* pDevMode; int Attributes; } ;
struct TYPE_7__ {int dmPrintQuality; } ;
struct TYPE_8__ {TYPE_1__ s1; } ;
struct TYPE_9__ {TYPE_2__ u1; } ;
typedef TYPE_4__ PRINTER_INFO_2W ;
typedef size_t DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int,int *,size_t,size_t*,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (struct table*,size_t) ;
 TYPE_4__* FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_4__*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (struct table*,size_t,struct expr const*,int*) ;
 int FUNC_8 (struct table*,size_t,int) ;
 int FUNC_9 (char*,char const*,size_t) ;

__attribute__((used)) static enum fill_status FUNC_10( struct table *VAR_4, const struct expr *VAR_5 )
{
    static const WCHAR VAR_6[] = {'P','r','i','n','t','e','r','%','d',0};
    struct record_printer *VAR_7;
    enum fill_status VAR_8 = VAR_2;
    PRINTER_INFO_2W *VAR_9;
    DWORD VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
    WCHAR VAR_15[20];

    FUNC_0( VAR_3, ((void*)0), 2, ((void*)0), 0, &VAR_13, &VAR_12 );
    if (FUNC_1() != VAR_0) return VAR_1;

    if (!(VAR_9 = FUNC_4( VAR_13 ))) return VAR_1;
    if (!FUNC_0( VAR_3, ((void*)0), 2, (BYTE *)VAR_9, VAR_13, &VAR_13, &VAR_12 ))
    {
        FUNC_5( VAR_9 );
        return VAR_1;
    }
    if (!FUNC_8( VAR_4, VAR_12, sizeof(*VAR_7) ))
    {
        FUNC_5( VAR_9 );
        return VAR_1;
    }

    for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
    {
        VAR_7 = (struct record_printer *)(VAR_4->data + VAR_11);
        VAR_7->attributes = VAR_9[VAR_10].Attributes;
        FUNC_9( VAR_15, VAR_6, VAR_10 );
        VAR_7->device_id = FUNC_6( VAR_15 );
        VAR_7->drivername = FUNC_6( VAR_9[VAR_10].pDriverName );
        VAR_7->horizontalresolution = VAR_9[VAR_10].pDevMode->u1.s1.dmPrintQuality;
        VAR_7->local = -1;
        VAR_7->location = FUNC_6( VAR_9[VAR_10].pLocation );
        VAR_7->name = FUNC_6( VAR_9[VAR_10].pPrinterName );
        VAR_7->network = 0;
        VAR_7->portname = FUNC_6( VAR_9[VAR_10].pPortName );
        if (!FUNC_7( VAR_4, VAR_10, VAR_5, &VAR_8 ))
        {
            FUNC_3( VAR_4, VAR_10 );
            continue;
        }
        VAR_11 += sizeof(*VAR_7);
        VAR_14++;
    }
    FUNC_2("created %u rows\n", VAR_14);
    VAR_4->num_rows = VAR_14;

    FUNC_5( VAR_9 );
    return VAR_8;
}
