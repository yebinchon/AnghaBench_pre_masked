
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int data; int num_rows; } ;
struct record_logicaldisk {int drivetype; int size; int volumeserialnumber; int volumename; void* name; int freespace; int filesystem; void* device_id; } ;
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
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct table*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (struct table*,int,struct expr const*,int*) ;
 int FUNC_10 (struct table*,int,int) ;
 int FUNC_11 (char*,char const*,char) ;

__attribute__((used)) static enum fill_status FUNC_12( struct table *VAR_5, const struct expr *VAR_6 )
{
    static const WCHAR VAR_7[] = {'%','c',':',0};
    WCHAR VAR_8[3], VAR_9[] = {'A',':','\\',0};
    struct record_logicaldisk *VAR_10;
    UINT VAR_11, VAR_12 = 0, VAR_13 = 0, VAR_14;
    UINT64 VAR_15 = 1024 * 1024 * 1024;
    DWORD VAR_16 = FUNC_1();
    enum fill_status VAR_17 = VAR_4;

    if (!FUNC_10( VAR_5, 4, sizeof(*VAR_10) )) return VAR_3;

    for (VAR_11 = 0; VAR_11 < 26; VAR_11++)
    {
        if (VAR_16 & (1 << VAR_11))
        {
            VAR_9[0] = 'A' + VAR_11;
            VAR_14 = FUNC_0( VAR_9 );
            if (VAR_14 != VAR_1 && VAR_14 != VAR_0 && VAR_14 != VAR_2)
                continue;

            if (!FUNC_10( VAR_5, VAR_12 + 1, sizeof(*VAR_10) )) return VAR_3;

            VAR_10 = (struct record_logicaldisk *)(VAR_5->data + VAR_13);
            FUNC_11( VAR_8, VAR_7, 'A' + VAR_11 );
            VAR_10->device_id = FUNC_8( VAR_8 );
            VAR_10->drivetype = VAR_14;
            VAR_10->filesystem = FUNC_4( VAR_9 );
            VAR_10->freespace = FUNC_5( VAR_9, &VAR_15 );
            VAR_10->name = FUNC_8( VAR_8 );
            VAR_10->size = VAR_15;
            VAR_10->volumename = FUNC_6( VAR_9 );
            VAR_10->volumeserialnumber = FUNC_7( VAR_9 );
            if (!FUNC_9( VAR_5, VAR_12, VAR_6, &VAR_17 ))
            {
                FUNC_3( VAR_5, VAR_12 );
                continue;
            }
            VAR_13 += sizeof(*VAR_10);
            VAR_12++;
        }
    }
    FUNC_2("created %u rows\n", VAR_12);
    VAR_5->num_rows = VAR_12;
    return VAR_17;
}
