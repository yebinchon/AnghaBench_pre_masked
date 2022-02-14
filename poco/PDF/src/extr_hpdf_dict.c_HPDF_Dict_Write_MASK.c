
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_18__ ;


struct TYPE_26__ {int obj_class; } ;
struct TYPE_32__ {scalar_t__ (* before_write_fn ) (TYPE_7__*) ;int filter; scalar_t__ (* write_fn ) (TYPE_7__*,TYPE_3__*) ;scalar_t__ (* after_write_fn ) (TYPE_7__*) ;scalar_t__ stream; int error; TYPE_18__* list; int * filterParams; int mmgr; TYPE_1__ header; } ;
struct TYPE_31__ {scalar_t__ value; int key; } ;
struct TYPE_27__ {int obj_id; } ;
struct TYPE_30__ {TYPE_2__ header; } ;
struct TYPE_29__ {int obj_id; } ;
struct TYPE_28__ {scalar_t__ size; } ;
struct TYPE_25__ {scalar_t__ count; } ;
typedef scalar_t__ HPDF_UINT32 ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_3__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_4__ HPDF_Obj_Header ;
typedef TYPE_5__* HPDF_Number ;
typedef int * HPDF_Encrypt ;
typedef TYPE_6__* HPDF_DictElement ;
typedef TYPE_7__* HPDF_Dict ;
typedef scalar_t__ HPDF_Array ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_7__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_7__*,char*,int ) ;
 int FUNC_6 (TYPE_7__*,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (TYPE_18__*,scalar_t__) ;
 int FUNC_10 (TYPE_5__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (scalar_t__,TYPE_3__*,int *) ;
 int FUNC_12 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*,char) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_16 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_17 (scalar_t__,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_18 (TYPE_7__*) ;
 scalar_t__ FUNC_19 (TYPE_7__*,TYPE_3__*) ;
 scalar_t__ FUNC_20 (TYPE_7__*) ;

HPDF_STATUS
FUNC_21 (HPDF_Dict VAR_14,
                  HPDF_Stream VAR_15,
                  HPDF_Encrypt VAR_16)
{
    HPDF_UINT VAR_17;
    HPDF_STATUS VAR_18;

    VAR_18 = FUNC_16 (VAR_15, "<<\012");
    if (VAR_18 != VAR_6)
        return VAR_18;

    if (VAR_14->before_write_fn) {
        if ((VAR_18 = VAR_14->before_write_fn (VAR_14)) != VAR_6)
            return VAR_18;
    }


    if (VAR_14->header.obj_class == (VAR_4 | VAR_7))
        VAR_16 = ((void*)0);

    if (VAR_14->stream) {

        if (VAR_14->filter == VAR_13)
            FUNC_6 (VAR_14, "Filter");
        else {
            HPDF_Array VAR_19 = FUNC_5 (VAR_14, "Filter",
                        VAR_3);

            if (!VAR_19) {
                VAR_19 = FUNC_2 (VAR_14->mmgr);
                if (!VAR_19)
                    return FUNC_8 (VAR_14->error);

                VAR_18 = FUNC_3 (VAR_14, "Filter", VAR_19);
                if (VAR_18 != VAR_6)
                    return VAR_18;
            }

            FUNC_1 (VAR_19);


            if (VAR_14->filter & VAR_12)
                FUNC_0 (VAR_19, "FlateDecode");


            if (VAR_14->filter & VAR_11)
                FUNC_0 (VAR_19, "DCTDecode");

            if(VAR_14->filter & VAR_10)
                FUNC_0 (VAR_19, "CCITTFaxDecode");

            if(VAR_14->filterParams!=((void*)0))
            {
                FUNC_4(VAR_14, VAR_14->filterParams);
            }
        }
    }

    for (VAR_17 = 0; VAR_17 < VAR_14->list->count; VAR_17++) {
        HPDF_DictElement VAR_20 =
                (HPDF_DictElement)FUNC_9 (VAR_14->list, VAR_17);
        HPDF_Obj_Header *VAR_21 = (HPDF_Obj_Header *)(VAR_20->value);

        if (!VAR_20->value)
            return FUNC_13 (VAR_14->error, VAR_2, 0);

        if (VAR_21->obj_id & VAR_8) {
            FUNC_12((" HPDF_Dict_Write obj=%p skipped obj_id=0x%08X\n",
                    VAR_20->value, (HPDF_UINT)VAR_21->obj_id));
        } else {
            VAR_18 = FUNC_15 (VAR_15, VAR_20->key);
            if (VAR_18 != VAR_6)
                return VAR_18;

            VAR_18 = FUNC_14 (VAR_15, ' ');
            if (VAR_18 != VAR_6)
                return VAR_18;

            VAR_18 = FUNC_11 (VAR_20->value, VAR_15, VAR_16);
            if (VAR_18 != VAR_6)
                return VAR_18;

            VAR_18 = FUNC_16 (VAR_15, "\012");
            if (VAR_18 != VAR_6)
                return VAR_18;
        }
    }

    if (VAR_14->write_fn) {
        if ((VAR_18 = VAR_14->write_fn (VAR_14, VAR_15)) != VAR_6)
            return VAR_18;
    }

    if ((VAR_18 = FUNC_16 (VAR_15, ">>")) != VAR_6)
        return VAR_18;

    if (VAR_14->stream) {
        HPDF_UINT32 VAR_22;
        HPDF_Number VAR_23;


        VAR_23 = (HPDF_Number)FUNC_5 (VAR_14, "Length",
                VAR_5);
        if (!VAR_23)
            return FUNC_13 (VAR_14->error,
                    VAR_1, 0);


        if (!(VAR_23->header.obj_id & VAR_9)) {
            return FUNC_13 (VAR_14->error, VAR_0,
                    0);
        }

        if ((VAR_18 = FUNC_16 (VAR_15, "\012stream\015\012"))
                != VAR_6)
            return VAR_18;

        VAR_22 = VAR_15->size;

        if (VAR_16)
            FUNC_7 (VAR_16);

        if ((VAR_18 = FUNC_17 (VAR_14->stream, VAR_15,
                        VAR_14->filter, VAR_16)) != VAR_6)
            return VAR_18;

        FUNC_10 (VAR_23, VAR_15->size - VAR_22);

        VAR_18 = FUNC_16 (VAR_15, "\012endstream");
    }


    if (VAR_14->after_write_fn) {
        if ((VAR_18 = VAR_14->after_write_fn (VAR_14)) != VAR_6)
            return VAR_18;
    }

    return VAR_18;
}
