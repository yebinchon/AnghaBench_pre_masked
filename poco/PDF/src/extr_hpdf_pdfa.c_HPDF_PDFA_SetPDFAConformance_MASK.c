
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int catalog; int pdf_version; int xref; int mmgr; } ;
struct TYPE_10__ {int stream; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_PDFAType ;
typedef TYPE_1__* HPDF_OutputIntent ;
typedef TYPE_2__* HPDF_Doc ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;


 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,char const*) ;
 int VAR_21 ;
 char const* VAR_22 ;
 char const* VAR_23 ;
 char const* VAR_24 ;
 char const* VAR_25 ;
 char const* VAR_26 ;
 char const* VAR_27 ;
 char const* VAR_28 ;
 char const* VAR_29 ;
 char const* VAR_30 ;
 char const* VAR_31 ;
 char const* VAR_32 ;
 char const* VAR_33 ;
 char const* VAR_34 ;
 char const* VAR_35 ;
 char const* VAR_36 ;
 char const* VAR_37 ;

HPDF_STATUS
FUNC_8 (HPDF_Doc VAR_38,HPDF_PDFAType VAR_39)
{
    HPDF_OutputIntent VAR_40;
    HPDF_STATUS VAR_41;

    const char *VAR_42 = ((void*)0);
    const char *VAR_43 = ((void*)0);
    const char *VAR_44 = ((void*)0);

    const char *VAR_45 = ((void*)0);
    const char *VAR_46 = ((void*)0);
    const char *VAR_47 = ((void*)0);

    const char *VAR_48 = ((void*)0);
    const char *VAR_49 = ((void*)0);

    const char *VAR_50 = ((void*)0);

    if (!FUNC_5(VAR_38)) {
      return VAR_18;
    }

    VAR_42 = (const char *)FUNC_4(VAR_38, VAR_17);
    VAR_43 = (const char *)FUNC_4(VAR_38, VAR_10);
    VAR_44 = (const char *)FUNC_4(VAR_38, VAR_16);

    VAR_46 = (const char *)FUNC_4(VAR_38, VAR_11);
    VAR_47 = (const char *)FUNC_4(VAR_38, VAR_14);
    VAR_45 = (const char *)FUNC_4(VAR_38, VAR_12);

    VAR_48 = (const char *)FUNC_4(VAR_38, VAR_13);
    VAR_49 = (const char *)FUNC_4(VAR_38, VAR_15);

    if((VAR_42 != ((void*)0)) || (VAR_43 != ((void*)0)) || (VAR_44 != ((void*)0))
       || (VAR_46 != ((void*)0)) || (VAR_47 != ((void*)0)) || (VAR_45 != ((void*)0))
       || (VAR_48 != ((void*)0))) {

        VAR_40 = FUNC_1(VAR_38->mmgr,VAR_38->xref);
        if (!VAR_40) {
          return VAR_19;
        }


        VAR_38->pdf_version = VAR_21;

        FUNC_3(VAR_40,"Type","Metadata");
        FUNC_3(VAR_40,"SubType","XML");

        VAR_41 = VAR_20;
        VAR_41 += FUNC_7(VAR_40->stream, VAR_9);


        if((VAR_42 != ((void*)0)) || (VAR_43 != ((void*)0)) || (VAR_44 != ((void*)0))) {
            VAR_41 += FUNC_7(VAR_40->stream, VAR_5);

            if(VAR_42 != ((void*)0)) {
                VAR_41 += FUNC_7(VAR_40->stream, VAR_7);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_42);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_6);
            }

            if(VAR_43 != ((void*)0)) {
                VAR_41 += FUNC_7(VAR_40->stream, VAR_1);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_43);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_0);
            }

            if(VAR_44 != ((void*)0)) {
                VAR_41 += FUNC_7(VAR_40->stream, VAR_3);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_44);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_2);
            }

            VAR_41 += FUNC_7(VAR_40->stream, VAR_4);
        }


        if((VAR_46 != ((void*)0)) || (VAR_47 != ((void*)0)) || (VAR_45 != ((void*)0))) {
            VAR_41 += FUNC_7(VAR_40->stream, VAR_35);


            if(VAR_45 != ((void*)0)) {
                VAR_41 += FUNC_7(VAR_40->stream, VAR_33);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_45);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_32);
            }

            if(VAR_46 != ((void*)0)) {
                VAR_41 += FUNC_7(VAR_40->stream, VAR_31);

                VAR_41 += FUNC_0(VAR_40->stream, VAR_46);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_30);
            }

            if(VAR_47 != ((void*)0)) {
                VAR_41 += FUNC_7(VAR_40->stream, VAR_37);
                VAR_41 += FUNC_0(VAR_40->stream, VAR_47);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_36);
            }

            VAR_41 += FUNC_7(VAR_40->stream, VAR_34);
        }


        if((VAR_48 != ((void*)0)) || (VAR_49 != ((void*)0))) {
            VAR_41 += FUNC_7(VAR_40->stream, VAR_25);

            if(VAR_48 != ((void*)0)) {
                VAR_41 += FUNC_7(VAR_40->stream, VAR_27);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_48);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_26);
            }

            if(VAR_49 != ((void*)0)) {
                VAR_41 += FUNC_7(VAR_40->stream, VAR_29);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_49);
                VAR_41 += FUNC_7(VAR_40->stream, VAR_28);
            }

            VAR_41 += FUNC_7(VAR_40->stream, VAR_24);
        }


        switch(VAR_39) {
          case 129:
            VAR_41 += FUNC_7(VAR_40->stream, VAR_22);
            break;
          case 128:
            VAR_41 += FUNC_7(VAR_40->stream, VAR_23);
            break;
        }

        VAR_41 += FUNC_7(VAR_40->stream, VAR_8);

        if (VAR_41 != VAR_20) {
          return VAR_19;
        }

        if ((VAR_41 = FUNC_2(VAR_38->catalog, "Metadata", VAR_40)) != VAR_20) {
          return VAR_41;
        }

        return FUNC_6(VAR_38);
    }

    return VAR_20;
}
