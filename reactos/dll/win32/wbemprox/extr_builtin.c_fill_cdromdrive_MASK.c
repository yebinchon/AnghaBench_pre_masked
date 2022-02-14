
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int data; int num_rows; } ;
struct record_cdromdrive {void* pnpdevice_id; int name; int mediatype; int drive; void* device_id; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef char WCHAR ;
typedef int UINT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (struct table*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct table*,int,struct expr const*,int*) ;
 int FUNC_6 (struct table*,int,int) ;
 int FUNC_7 (char*,char const*,char) ;

__attribute__((used)) static enum fill_status FUNC_8( struct table *VAR_6, const struct expr *VAR_7 )
{
    static const WCHAR VAR_8[] = {'%','c',':',0};
    WCHAR VAR_9[3], VAR_10[] = {'A',':','\\',0};
    struct record_cdromdrive *VAR_11;
    UINT VAR_12, VAR_13 = 0, VAR_14 = 0;
    DWORD VAR_15 = FUNC_1();
    enum fill_status VAR_16 = VAR_2;

    if (!FUNC_6( VAR_6, 1, sizeof(*VAR_11) )) return VAR_1;

    for (VAR_12 = 0; VAR_12 < 26; VAR_12++)
    {
        if (VAR_15 & (1 << VAR_12))
        {
            VAR_10[0] = 'A' + VAR_12;
            if (FUNC_0( VAR_10 ) != VAR_0)
                continue;

            if (!FUNC_6( VAR_6, VAR_13 + 1, sizeof(*VAR_11) )) return VAR_1;

            VAR_11 = (struct record_cdromdrive *)(VAR_6->data + VAR_14);
            VAR_11->device_id = VAR_5;
            FUNC_7( VAR_9, VAR_8, 'A' + VAR_12 );
            VAR_11->drive = FUNC_4( VAR_9 );
            VAR_11->mediatype = VAR_3;
            VAR_11->name = VAR_4;
            VAR_11->pnpdevice_id = VAR_5;
            if (!FUNC_5( VAR_6, VAR_13, VAR_7, &VAR_16 ))
            {
                FUNC_3( VAR_6, VAR_13 );
                continue;
            }
            VAR_14 += sizeof(*VAR_11);
            VAR_13++;
        }
    }
    FUNC_2("created %u rows\n", VAR_13);
    VAR_6->num_rows = VAR_13;
    return VAR_16;
}
