
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int data; int num_rows; } ;
struct record_diskdrive {int index; int size; int serialnumber; int pnpdevice_id; int model; int mediatype; int manufacturer; int interfacetype; int device_id; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef char WCHAR ;
typedef int UINT64 ;
typedef int UINT ;
typedef int DWORD ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct table*,int) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct table*,int,struct expr const*,int*) ;
 int FUNC_8 (struct table*,int,int) ;
 int FUNC_9 (char*,char const*,int) ;

__attribute__((used)) static enum fill_status FUNC_10( struct table *VAR_11, const struct expr *VAR_12 )
{
    static const WCHAR VAR_13[] =
        {'\\','\\','\\','\\','.','\\','\\','P','H','Y','S','I','C','A','L','D','R','I','V','E','%','u',0};
    WCHAR VAR_14[FUNC_0( VAR_13 ) + 10], VAR_15[] = {'A',':','\\',0};
    struct record_diskdrive *VAR_16;
    UINT VAR_17, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21;
    UINT64 VAR_22 = 1024 * 1024 * 1024;
    DWORD VAR_23 = FUNC_2();
    enum fill_status VAR_24 = VAR_3;

    if (!FUNC_8( VAR_11, 2, sizeof(*VAR_16) )) return VAR_2;

    for (VAR_17 = 0; VAR_17 < 26; VAR_17++)
    {
        if (VAR_23 & (1 << VAR_17))
        {
            VAR_15[0] = 'A' + VAR_17;
            VAR_21 = FUNC_1( VAR_15 );
            if (VAR_21 != VAR_0 && VAR_21 != VAR_1)
                continue;

            if (!FUNC_8( VAR_11, VAR_18 + 1, sizeof(*VAR_16) )) return VAR_2;

            VAR_16 = (struct record_diskdrive *)(VAR_11->data + VAR_19);
            FUNC_9( VAR_14, VAR_13, VAR_20 );
            VAR_16->device_id = FUNC_6( VAR_14 );
            VAR_16->index = VAR_20;
            VAR_16->interfacetype = VAR_4;
            VAR_16->manufacturer = VAR_5;
            if (VAR_21 == VAR_0)
                VAR_16->mediatype = VAR_6;
            else
                VAR_16->mediatype = VAR_7;
            VAR_16->model = VAR_8;
            VAR_16->pnpdevice_id = VAR_9;
            VAR_16->serialnumber = VAR_10;
            FUNC_5( VAR_15, &VAR_22 );
            VAR_16->size = VAR_22;
            if (!FUNC_7( VAR_11, VAR_18, VAR_12, &VAR_24 ))
            {
                FUNC_4( VAR_11, VAR_18 );
                continue;
            }
            VAR_19 += sizeof(*VAR_16);
            VAR_20++;
            VAR_18++;
        }
    }
    FUNC_3("created %u rows\n", VAR_18);
    VAR_11->num_rows = VAR_18;
    return VAR_24;
}
