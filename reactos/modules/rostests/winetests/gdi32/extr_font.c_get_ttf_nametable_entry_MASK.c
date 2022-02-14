
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t name_id; size_t offset; size_t length; } ;
typedef TYPE_1__ sfnt_name ;
typedef scalar_t__ WORD ;
typedef size_t WCHAR ;
typedef size_t USHORT ;
typedef int SIZE_T ;
typedef int LONG ;
typedef int LCID ;
typedef int HDC ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,int ,int *,int) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,int,...) ;

__attribute__((used)) static BOOL FUNC_8(HDC VAR_4, WORD VAR_5, WCHAR *VAR_6, SIZE_T VAR_7, LCID VAR_8)
{
    struct sfnt_name_header
    {
        USHORT format;
        USHORT number_of_record;
        USHORT storage_offset;
    } *VAR_9;
    sfnt_name *VAR_10;
    BOOL VAR_11 = VAR_0;
    LONG VAR_12, VAR_13, VAR_14;
    LONG VAR_15, VAR_16;
    WCHAR *VAR_17;
    BYTE *VAR_18;
    USHORT VAR_19;
    int VAR_20, VAR_21 = 0, VAR_22 = -1;

    VAR_12 = FUNC_1(VAR_4, VAR_2, 0, ((void*)0), 0);
    FUNC_6(VAR_12 != VAR_1, "no name table found\n");
    if(VAR_12 == VAR_1) return VAR_0;

    VAR_18 = FUNC_3(FUNC_2(), 0, VAR_12);
    VAR_16 = FUNC_1(VAR_4, VAR_2, 0, VAR_18, VAR_12);
    FUNC_6(VAR_16 == VAR_12, "GetFontData should return %u not %u\n", VAR_12, VAR_16);

    VAR_9 = (void *)VAR_18;
    VAR_9->format = FUNC_0(VAR_9->format);
    VAR_9->number_of_record = FUNC_0(VAR_9->number_of_record);
    VAR_9->storage_offset = FUNC_0(VAR_9->storage_offset);
    if (VAR_9->format != 0)
    {
        FUNC_7("got format %u\n", VAR_9->format);
        goto out;
    }
    if (VAR_9->number_of_record == 0 || sizeof(*VAR_9) + VAR_9->number_of_record * sizeof(*VAR_10) > VAR_12)
    {
        FUNC_7("number records out of range: %d\n", VAR_9->number_of_record);
        goto out;
    }
    if (VAR_9->storage_offset >= VAR_12)
    {
        FUNC_7("storage_offset %u > size %u\n", VAR_9->storage_offset, VAR_12);
        goto out;
    }

    VAR_10 = (void *)&VAR_9[1];
    for (VAR_19 = 0; VAR_19 < VAR_9->number_of_record; VAR_19++)
    {
        if (FUNC_0(VAR_10[VAR_19].name_id) != VAR_5) continue;
        VAR_20 = FUNC_5( &VAR_10[VAR_19], VAR_8);
        if (VAR_20 > VAR_21)
        {
            VAR_21 = VAR_20;
            VAR_22 = VAR_19;
        }
    }

    VAR_13 = VAR_9->storage_offset + FUNC_0(VAR_10[VAR_22].offset);
    VAR_14 = FUNC_0(VAR_10[VAR_22].length);
    if (VAR_13 + VAR_14 > VAR_12)
    {
        FUNC_7("entry %d is out of range\n", VAR_22);
        goto out;
    }
    if (VAR_14 >= VAR_7)
    {
        FUNC_7("buffer too small for entry %d\n", VAR_22);
        goto out;
    }

    VAR_17 = (WCHAR *)(VAR_18 + VAR_13);
    for (VAR_15 = 0; VAR_15 < VAR_14 / 2; VAR_15++)
        VAR_6[VAR_15] = FUNC_0(VAR_17[VAR_15]);
    VAR_6[VAR_15] = 0;

    VAR_11 = VAR_3;

out:
    FUNC_4(FUNC_2(), 0, VAR_18);
    return VAR_11;
}
