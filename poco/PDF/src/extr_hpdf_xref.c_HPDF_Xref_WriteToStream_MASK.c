
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_16__ {int size; } ;
struct TYPE_15__ {scalar_t__ start_offset; int addr; struct TYPE_15__* prev; TYPE_12__* entries; } ;
struct TYPE_14__ {int gen_no; int byte_offset; int entry_typ; int obj; } ;
struct TYPE_13__ {int count; } ;
typedef TYPE_1__* HPDF_XrefEntry ;
typedef TYPE_2__* HPDF_Xref ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_3__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_Encrypt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char*,int,char*) ;
 char* FUNC_2 (char*,int,scalar_t__) ;
 int FUNC_3 (TYPE_12__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*,char*,char*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*) ;

HPDF_STATUS
FUNC_10 (HPDF_Xref VAR_4,
                          HPDF_Stream VAR_5,
                          HPDF_Encrypt VAR_6)
{
    HPDF_STATUS VAR_7;
    HPDF_UINT VAR_8;
    char VAR_9[VAR_3];
    char* VAR_10;
    char* VAR_11 = VAR_9 + VAR_3 - 1;
    HPDF_UINT VAR_12;
    HPDF_Xref VAR_13 = VAR_4;



    FUNC_5((" HPDF_Xref_WriteToStream\n"));

    while (VAR_13) {
        if (VAR_13->start_offset == 0)
            VAR_12 = 1;
        else
            VAR_12 = 0;

        for (VAR_8 = VAR_12; VAR_8 < VAR_13->entries->count; VAR_8++) {
            HPDF_XrefEntry VAR_14 =
                        (HPDF_XrefEntry)FUNC_3 (VAR_13->entries, VAR_8);
            HPDF_UINT VAR_15 = VAR_13->start_offset + VAR_8;
            HPDF_UINT16 VAR_16 = VAR_14->gen_no;

            VAR_14->byte_offset = VAR_5->size;

            VAR_10 = VAR_9;
            VAR_10 = FUNC_1 (VAR_10, VAR_15, VAR_11);
            *VAR_10++ = ' ';
            VAR_10 = FUNC_1 (VAR_10, VAR_16, VAR_11);
            FUNC_6(VAR_10, " obj\012", VAR_11);

            if ((VAR_7 = FUNC_7 (VAR_5, VAR_9)) != VAR_2)
               return VAR_7;

            if (VAR_6)
                FUNC_0 (VAR_6, VAR_15, VAR_16);

            if ((VAR_7 = FUNC_4 (VAR_14->obj, VAR_5, VAR_6)) != VAR_2)
                return VAR_7;

            if ((VAR_7 = FUNC_7 (VAR_5, "\012endobj\012"))
                    != VAR_2)
                return VAR_7;
       }

       VAR_13 = VAR_13->prev;
    }



    VAR_13 = VAR_4;

    while (VAR_13) {
        VAR_13->addr = VAR_5->size;

        VAR_10 = VAR_9;
        VAR_10 = (char *)FUNC_6 (VAR_10, "xref\012", VAR_11);
        VAR_10 = FUNC_1 (VAR_10, VAR_13->start_offset, VAR_11);
        *VAR_10++ = ' ';
        VAR_10 = FUNC_1 (VAR_10, VAR_13->entries->count, VAR_11);
        FUNC_6 (VAR_10, "\012", VAR_11);
        VAR_7 = FUNC_7 (VAR_5, VAR_9);
        if (VAR_7 != VAR_2)
            return VAR_7;

        for (VAR_8 = 0; VAR_8 < VAR_13->entries->count; VAR_8++) {
            HPDF_XrefEntry VAR_17 = FUNC_8(VAR_13, VAR_8);

            VAR_10 = VAR_9;
            VAR_10 = FUNC_2 (VAR_10, VAR_17->byte_offset, VAR_0 +
                    1);
            *VAR_10++ = ' ';
            VAR_10 = FUNC_2 (VAR_10, VAR_17->gen_no, VAR_1 + 1);
            *VAR_10++ = ' ';
            *VAR_10++ = VAR_17->entry_typ;
            FUNC_6 (VAR_10, "\015\012", VAR_11);
            VAR_7 = FUNC_7 (VAR_5, VAR_9);
            if (VAR_7 != VAR_2)
                return VAR_7;
        }

        VAR_13 = VAR_13->prev;
    }


    VAR_7 = FUNC_9 (VAR_4, VAR_5);

    return VAR_7;
}
