
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {int number; int * hash_table; scalar_t__ ref_count; scalar_t__ offset; scalar_t__ type; void* colname; void* tablename; } ;
struct TYPE_17__ {int strings; } ;
struct TYPE_16__ {scalar_t__ row_count; TYPE_1__* colinfo; int data; } ;
struct TYPE_15__ {int offset; } ;
typedef TYPE_2__ MSITABLE ;
typedef TYPE_3__ MSIDATABASE ;
typedef TYPE_4__ MSICOLUMNINFO ;
typedef int LPCWSTR ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,TYPE_4__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,TYPE_2__**) ;
 int FUNC_6 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ,int,scalar_t__*) ;
 void* FUNC_9 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int ,int) ;
 int VAR_3 ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_12( MSIDATABASE *VAR_4, LPCWSTR VAR_5, MSICOLUMNINFO *VAR_6, UINT *VAR_7 )
{
    UINT VAR_8, VAR_9, VAR_10 = 0, VAR_11, VAR_12, VAR_13 = *VAR_7;
    MSITABLE *VAR_14 = ((void*)0);

    FUNC_1("%s\n", FUNC_3(VAR_5));


    VAR_8 = FUNC_4( VAR_4, VAR_5, VAR_6, VAR_7 );
    if (VAR_8 == VAR_1 && *VAR_7)
        return VAR_8;

    VAR_8 = FUNC_5( VAR_4, VAR_3, &VAR_14 );
    if (VAR_8 != VAR_1)
    {
        FUNC_0("couldn't load _Columns table\n");
        return VAR_0;
    }


    VAR_8 = FUNC_8( VAR_4->strings, VAR_5, -1, &VAR_11 );
    if (VAR_8 != VAR_1)
    {
        FUNC_2("Couldn't find id for %s\n", FUNC_3(VAR_5));
        return VAR_8;
    }
    FUNC_1("Table id is %d, row count is %d\n", VAR_11, VAR_14->row_count);




    if (VAR_6) FUNC_6( VAR_6, 0, VAR_13 * sizeof(*VAR_6) );
    VAR_12 = VAR_14->row_count;
    for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
    {
        if (FUNC_10( VAR_14->data, VAR_9, 0, VAR_2) != VAR_11) continue;
        if (VAR_6)
        {
            UINT VAR_15 = FUNC_10( VAR_14->data, VAR_9, VAR_14->colinfo[2].offset, VAR_2 );
            UINT VAR_16 = FUNC_10( VAR_14->data, VAR_9, VAR_14->colinfo[1].offset, sizeof(USHORT) ) - (1 << 15);


            if (VAR_16 < 1 || VAR_16 > VAR_13)
            {
                FUNC_0("column %d out of range (maxcount: %d)\n", VAR_16, VAR_13);
                continue;
            }

            if (VAR_6[VAR_16 - 1].number)
            {
                FUNC_0("duplicate column %d\n", VAR_16);
                continue;
            }
            VAR_6[VAR_16 - 1].tablename = FUNC_9( VAR_4->strings, VAR_11, ((void*)0) );
            VAR_6[VAR_16 - 1].number = VAR_16;
            VAR_6[VAR_16 - 1].colname = FUNC_9( VAR_4->strings, VAR_15, ((void*)0) );
            VAR_6[VAR_16 - 1].type = FUNC_10( VAR_14->data, VAR_9, VAR_14->colinfo[3].offset,
                                                    sizeof(USHORT) ) - (1 << 15);
            VAR_6[VAR_16 - 1].offset = 0;
            VAR_6[VAR_16 - 1].ref_count = 0;
            VAR_6[VAR_16 - 1].hash_table = ((void*)0);
        }
        VAR_10++;
    }
    FUNC_1("%s has %d columns\n", FUNC_3(VAR_5), VAR_10);

    if (VAR_6 && VAR_10 != VAR_13)
    {
        FUNC_0("missing column in table %s\n", FUNC_3(VAR_5));
        FUNC_7( VAR_6, VAR_13 );
        return VAR_0;
    }
    FUNC_11( VAR_4, VAR_6, VAR_10 );
    *VAR_7 = VAR_10;
    return VAR_1;
}
