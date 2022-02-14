
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int data; int num_rows; } ;
struct record_diskpartition {int bootable; int bootpartition; int diskindex; int size; int type; scalar_t__ startingoffset; void* pnpdevice_id; scalar_t__ index; void* device_id; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef char WCHAR ;
typedef int UINT64 ;
typedef int UINT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct table*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (struct table*,int,struct expr const*,int*) ;
 int FUNC_8 (struct table*,int,int) ;
 int FUNC_9 (char*,char const*,int) ;

__attribute__((used)) static enum fill_status FUNC_10( struct table *VAR_4, const struct expr *VAR_5 )
{
    static const WCHAR VAR_6[] =
        {'D','i','s','k',' ','#','%','u',',',' ','P','a','r','t','i','t','i','o','n',' ','#','0',0};
    WCHAR VAR_7[32], VAR_8[] = {'A',':','\\',0};
    struct record_diskpartition *VAR_9;
    UINT VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13, VAR_14 = 0;
    UINT64 VAR_15 = 1024 * 1024 * 1024;
    DWORD VAR_16 = FUNC_1();
    enum fill_status VAR_17 = VAR_3;

    if (!FUNC_8( VAR_4, 4, sizeof(*VAR_9) )) return VAR_2;

    for (VAR_10 = 0; VAR_10 < 26; VAR_10++)
    {
        if (VAR_16 & (1 << VAR_10))
        {
            VAR_8[0] = 'A' + VAR_10;
            VAR_13 = FUNC_0( VAR_8 );
            if (VAR_13 != VAR_0 && VAR_13 != VAR_1)
                continue;

            if (!FUNC_8( VAR_4, VAR_11 + 1, sizeof(*VAR_9) )) return VAR_2;

            VAR_9 = (struct record_diskpartition *)(VAR_4->data + VAR_12);
            VAR_9->bootable = (VAR_10 == 2) ? -1 : 0;
            VAR_9->bootpartition = (VAR_10 == 2) ? -1 : 0;
            FUNC_9( VAR_7, VAR_6, VAR_14 );
            VAR_9->device_id = FUNC_6( VAR_7 );
            VAR_9->diskindex = VAR_14;
            VAR_9->index = 0;
            VAR_9->pnpdevice_id = FUNC_6( VAR_7 );
            FUNC_5( VAR_8, &VAR_15 );
            VAR_9->size = VAR_15;
            VAR_9->startingoffset = 0;
            VAR_9->type = FUNC_4( VAR_8 );
            if (!FUNC_7( VAR_4, VAR_11, VAR_5, &VAR_17 ))
            {
                FUNC_3( VAR_4, VAR_11 );
                continue;
            }
            VAR_12 += sizeof(*VAR_9);
            VAR_11++;
            VAR_14++;
        }
    }
    FUNC_2("created %u rows\n", VAR_11);
    VAR_4->num_rows = VAR_11;
    return VAR_17;
}
