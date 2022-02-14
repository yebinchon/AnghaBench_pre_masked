
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_32__ {scalar_t__** cid_map; size_t** unicode_map; int suppliment; int ordering; int registry; } ;
struct TYPE_31__ {scalar_t__ to_unicode_fn; int attr; } ;
struct TYPE_30__ {int mmgr; int error; int stream; int before_write_fn; int attr; } ;
struct TYPE_29__ {TYPE_5__* map_stream; TYPE_6__* encoder; TYPE_3__* fontdef; } ;
struct TYPE_26__ {scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_28__ {int missing_width; TYPE_1__ font_bbox; int attr; } ;
struct TYPE_27__ {scalar_t__ embedding; } ;
typedef int HPDF_Xref ;
typedef size_t HPDF_UNICODE ;
typedef scalar_t__ HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_INT32 ;
typedef int HPDF_INT16 ;
typedef int HPDF_INT ;
typedef TYPE_3__* HPDF_FontDef ;
typedef TYPE_4__* HPDF_FontAttr ;
typedef TYPE_5__* HPDF_Font ;
typedef TYPE_6__* HPDF_Encoder ;
typedef TYPE_5__* HPDF_Dict ;
typedef TYPE_8__* HPDF_CMapEncoderAttr ;
typedef scalar_t__ HPDF_BYTE ;
typedef TYPE_5__* HPDF_Array ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;
 TYPE_5__* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,char*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,char*,char*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,char*,int) ;
 TYPE_5__* FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_9 (size_t*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__*,scalar_t__) ;
 TYPE_5__* FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_15 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_16 (int ,TYPE_5__*) ;

__attribute__((used)) static HPDF_Font
FUNC_17 (HPDF_Font VAR_4, HPDF_Xref VAR_5)
{
    HPDF_STATUS VAR_6 = VAR_3;
    HPDF_FontAttr VAR_7 = (HPDF_FontAttr)VAR_4->attr;
    HPDF_FontDef VAR_8 = VAR_7->fontdef;
    HPDF_TTFontDefAttr VAR_9 = (HPDF_TTFontDefAttr)VAR_8->attr;
    HPDF_Encoder VAR_10 = VAR_7->encoder;
    HPDF_CMapEncoderAttr VAR_11 =
                (HPDF_CMapEncoderAttr)VAR_10->attr;

    HPDF_Font VAR_12;
    HPDF_Array VAR_13;
    HPDF_UINT VAR_14;
    HPDF_UNICODE VAR_15[65536];
    HPDF_Dict VAR_16;

    HPDF_UINT16 VAR_17 = 0;

    FUNC_10 ((" HPDF_CIDFontType2_New\n"));

    VAR_12 = FUNC_7 (VAR_4->mmgr);
    if (!VAR_12)
        return ((void*)0);

    if (FUNC_16 (VAR_5, VAR_12) != VAR_3)
        return ((void*)0);

    VAR_4->before_write_fn = VAR_0;

    VAR_6 += FUNC_5 (VAR_12, "Type", "Font");
    VAR_6 += FUNC_5 (VAR_12, "Subtype", "CIDFontType2");
    VAR_6 += FUNC_6 (VAR_12, "DW", VAR_8->missing_width);
    if (VAR_6 != VAR_3)
        return ((void*)0);


    VAR_13 = FUNC_2 (VAR_12->mmgr);
    if (!VAR_13)
        return ((void*)0);

    if (FUNC_4 (VAR_12, "DW2", VAR_13) != VAR_3)
        return ((void*)0);

    VAR_6 += FUNC_1 (VAR_13, (HPDF_INT32)(VAR_8->font_bbox.bottom));
    VAR_6 += FUNC_1 (VAR_13, (HPDF_INT32)(VAR_8->font_bbox.bottom -
                VAR_8->font_bbox.top));

    FUNC_9 (VAR_15, 0, sizeof(HPDF_UNICODE) * 65536);

    if (VAR_6 != VAR_3)
        return ((void*)0);

    for (VAR_14 = 0; VAR_14 < 256; VAR_14++) {
        HPDF_UINT VAR_18;

        for (VAR_18 = 0; VAR_18 < 256; VAR_18++) {
     if (VAR_10->to_unicode_fn == VAR_1) {
  HPDF_UINT16 VAR_19 = VAR_11->cid_map[VAR_14][VAR_18];
  if (VAR_19 != 0) {
      HPDF_UNICODE VAR_20 = VAR_11->unicode_map[VAR_14][VAR_18];
      HPDF_UINT16 VAR_21 = FUNC_15 (VAR_8,
         VAR_20);
      VAR_15[VAR_19] = VAR_21;
      if (VAR_17 < VAR_19)
   VAR_17 = VAR_19;
  }
     } else {
  HPDF_UNICODE VAR_22 = (VAR_14 << 8) | VAR_18;
  HPDF_UINT16 VAR_23 = FUNC_15 (VAR_8,
            VAR_22);
  VAR_15[VAR_22] = VAR_23;
  if (VAR_17 < VAR_22)
      VAR_17 = VAR_22;
     }
 }
    }

    if (VAR_17 > 0) {
        HPDF_INT16 VAR_24 = VAR_8->missing_width;
        HPDF_UNICODE *VAR_25 = VAR_15;
        HPDF_Array VAR_26 = ((void*)0);


        VAR_13 = FUNC_2 (VAR_12->mmgr);
        if (!VAR_13)
            return ((void*)0);

        if (FUNC_4 (VAR_12, "W", VAR_13) != VAR_3)
            return ((void*)0);

        for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++, VAR_25++) {
            HPDF_INT VAR_27 = FUNC_14 (VAR_8, *VAR_25);

            if (VAR_27 != VAR_24) {
                if (!VAR_26) {
                    if (FUNC_1 (VAR_13, VAR_14) != VAR_3)
                        return ((void*)0);

                    VAR_26 = FUNC_2 (VAR_12->mmgr);
                    if (!VAR_26)
                        return ((void*)0);

                    if (FUNC_0 (VAR_13, VAR_26) != VAR_3)
                        return ((void*)0);
                }

                if ((VAR_6 = FUNC_1 (VAR_26, VAR_27)) != VAR_3)
                    return ((void*)0);
            } else
                  VAR_26 = ((void*)0);
        }


        if (VAR_9->embedding) {
            VAR_7->map_stream = FUNC_3 (VAR_12->mmgr, VAR_5);
            if (!VAR_7->map_stream)
                return ((void*)0);

            if (FUNC_4 (VAR_12, "CIDToGIDMap", VAR_7->map_stream) != VAR_3)
                return ((void*)0);

            for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
                HPDF_BYTE VAR_28[2];
                HPDF_UINT16 VAR_29 = VAR_15[VAR_14];

                VAR_28[0] = (HPDF_BYTE)(VAR_29 >> 8);
                VAR_28[1] = (HPDF_BYTE)VAR_29;

                FUNC_8 ((HPDF_BYTE *)(VAR_15 + VAR_14), VAR_28, 2);
            }

            if ((VAR_6 = FUNC_12 (VAR_7->map_stream->stream,
                            (HPDF_BYTE *)VAR_15, VAR_17 * 2)) != VAR_3)
                return ((void*)0);
        }
    } else {
        FUNC_11 (VAR_12->error, VAR_2, 0);
        return 0;
    }


    VAR_16 = FUNC_7 (VAR_4->mmgr);
    if (!VAR_16)
        return ((void*)0);

    if (FUNC_4 (VAR_12, "CIDSystemInfo", VAR_16) != VAR_3)
        return ((void*)0);

    VAR_6 += FUNC_4 (VAR_16, "Registry",
            FUNC_13 (VAR_4->mmgr, VAR_11->registry, ((void*)0)));
    VAR_6 += FUNC_4 (VAR_16, "Ordering",
            FUNC_13 (VAR_4->mmgr, VAR_11->ordering, ((void*)0)));
    VAR_6 += FUNC_6 (VAR_16, "Supplement",
            VAR_11->suppliment);

    if (VAR_6 != VAR_3)
        return ((void*)0);

    return VAR_12;
}
