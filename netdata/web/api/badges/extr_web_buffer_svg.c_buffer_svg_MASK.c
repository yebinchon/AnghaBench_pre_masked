
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int calculated_number ;
struct TYPE_4__ {int contenttype; } ;
typedef TYPE_1__ BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (char const*,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (double) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int ) ;
 int FUNC_6 (char*,int ,int ,char const*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char const*,double) ;

void FUNC_11(BUFFER *VAR_6, const char *VAR_7, calculated_number VAR_8, const char *VAR_9, const char *VAR_10, const char *VAR_11, int VAR_12, int VAR_13, uint32_t VAR_14, int VAR_15, int VAR_16) {
    char VAR_17[VAR_1 + 1]
            , VAR_18[VAR_5 + 1]
            , VAR_19[VAR_3 + 1]
            , VAR_20[VAR_5 + 1]
            , VAR_21[VAR_1 + 1]
            , VAR_22[VAR_1 + 1];

    double VAR_23 = (double)VAR_15, VAR_24 = (double)VAR_16, VAR_25;
    double VAR_26 = 20.0, VAR_27 = 11.0, VAR_28 = 5.8, VAR_29 = 3.0;

    if(VAR_13 < 100) VAR_13 = 100;

    if(FUNC_9(!VAR_10 || !*VAR_10))
        VAR_10 = "#555";

    if(FUNC_9(!VAR_11 || !*VAR_11))
        VAR_11 = (FUNC_8(VAR_8) || FUNC_7(VAR_8))?"#999":"#4c1";

    FUNC_1(VAR_11, VAR_17, VAR_1, VAR_8);
    FUNC_6(VAR_18, VAR_5, (VAR_14 & VAR_4)?FUNC_2(VAR_8):VAR_8, VAR_9, VAR_12);

    if(VAR_15 <= 0 || VAR_16 <= 0) {
        VAR_23 = FUNC_10(VAR_7, VAR_27) + (VAR_0 * 2);
        VAR_24 = FUNC_10(VAR_18, VAR_27) + (VAR_0 * 2);
    }
    VAR_25 = VAR_23 + VAR_24;

    FUNC_5(VAR_19, VAR_7, VAR_3);
    FUNC_5(VAR_20, VAR_18, VAR_5);
    FUNC_5(VAR_21, FUNC_4(VAR_10), VAR_1);
    FUNC_5(VAR_22, FUNC_4(VAR_17), VAR_1);

    VAR_6->contenttype = VAR_2;

    VAR_25 = VAR_25 * VAR_13 / 100.0;
    VAR_26 = VAR_26 * VAR_13 / 100.0;
    VAR_27 = VAR_27 * VAR_13 / 100.0;
    VAR_28 = VAR_28 * VAR_13 / 100.0;
    VAR_23 = VAR_23 * VAR_13 / 100.0;
    VAR_24 = VAR_24 * VAR_13 / 100.0;
    VAR_29 = VAR_29 * VAR_13 / 100.0;



    FUNC_0(VAR_6,
        "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" width=\"%0.2f\" height=\"%0.2f\">"
            "<linearGradient id=\"smooth\" x2=\"0\" y2=\"100%%\">"
                "<stop offset=\"0\" stop-color=\"#bbb\" stop-opacity=\".1\"/>"
                "<stop offset=\"1\" stop-opacity=\".1\"/>"
            "</linearGradient>"
            "<mask id=\"round\">"
                "<rect class=\"bdge-ttl-width\" width=\"%0.2f\" height=\"%0.2f\" rx=\"%0.2f\" fill=\"#fff\"/>"
            "</mask>"
            "<g mask=\"url(#round)\">"
                "<rect class=\"bdge-rect-lbl\" width=\"%0.2f\" height=\"%0.2f\" fill=\"%s\"/>",
        VAR_25, VAR_26,
        VAR_25, VAR_26, VAR_29,
        VAR_23, VAR_26, VAR_21);

    if(VAR_15 > 0 && VAR_16 > 0) {
        FUNC_0(VAR_6,
                "<clipPath id=\"lbl-rect\">"
                    "<rect class=\"bdge-rect-lbl\" width=\"%0.2f\" height=\"%0.2f\"/>"
                "</clipPath>",
        VAR_23, VAR_26);
    }

    FUNC_0(VAR_6,
                "<rect class=\"bdge-rect-val\" x=\"%0.2f\" width=\"%0.2f\" height=\"%0.2f\" fill=\"%s\"/>",
        VAR_23, VAR_24, VAR_26, VAR_22);

    if(VAR_15 > 0 && VAR_16 > 0) {
        FUNC_0(VAR_6,
                "<clipPath id=\"val-rect\">"
                    "<rect class=\"bdge-rect-val\" x=\"%0.2f\" width=\"%0.2f\" height=\"%0.2f\"/>"
                "</clipPath>",
        VAR_23, VAR_24, VAR_26);
    }

    FUNC_0(VAR_6,
                "<rect class=\"bdge-ttl-width\" width=\"%0.2f\" height=\"%0.2f\" fill=\"url(#smooth)\"/>"
            "</g>"
            "<g fill=\"#fff\" text-anchor=\"middle\" font-family=\"DejaVu Sans,Verdana,Geneva,sans-serif\" font-size=\"%0.2f\">"
                "<text class=\"bdge-lbl-lbl\" x=\"%0.2f\" y=\"%0.0f\" fill=\"#010101\" fill-opacity=\".3\" clip-path=\"url(#lbl-rect)\">%s</text>"
                "<text class=\"bdge-lbl-lbl\" x=\"%0.2f\" y=\"%0.0f\" clip-path=\"url(#lbl-rect)\">%s</text>"
                "<text class=\"bdge-lbl-val\" x=\"%0.2f\" y=\"%0.0f\" fill=\"#010101\" fill-opacity=\".3\" clip-path=\"url(#val-rect)\">%s</text>"
                "<text class=\"bdge-lbl-val\" x=\"%0.2f\" y=\"%0.0f\" clip-path=\"url(#val-rect)\">%s</text>"
            "</g>",
        VAR_25, VAR_26,
        VAR_27,
        VAR_23 / 2, FUNC_3(VAR_26 - VAR_28), VAR_19,
        VAR_23 / 2, FUNC_3(VAR_26 - VAR_28 - 1.0), VAR_19,
        VAR_23 + VAR_24 / 2 -1, FUNC_3(VAR_26 - VAR_28), VAR_20,
        VAR_23 + VAR_24 / 2 -1, FUNC_3(VAR_26 - VAR_28 - 1.0), VAR_20);

    if(VAR_15 <= 0 || VAR_16 <= 0){
        FUNC_0(VAR_6,
            "<script type=\"text/javascript\">"
                "var bdg_horiz_padding = %d;"
                "function netdata_bdge_each(list, attr, value){"
                    "Array.prototype.forEach.call(list, function(el){"
                        "el.setAttribute(attr, value);"
                    "});"
                "};"
                "var this_svg = document.currentScript.closest(\"svg\");"
                "var elem_lbl = this_svg.getElementsByClassName(\"bdge-lbl-lbl\");"
                "var elem_val = this_svg.getElementsByClassName(\"bdge-lbl-val\");"
                "var lbl_size = elem_lbl[0].getBBox();"
                "var val_size = elem_val[0].getBBox();"
                "var width_total = lbl_size.width + bdg_horiz_padding*2;"
                "this_svg.getElementsByClassName(\"bdge-rect-lbl\")[0].setAttribute(\"width\", width_total);"
                "netdata_bdge_each(elem_lbl, \"x\", (lbl_size.width / 2) + bdg_horiz_padding);"
                "netdata_bdge_each(elem_val, \"x\", width_total + (val_size.width / 2) + bdg_horiz_padding);"
                "var val_rect = this_svg.getElementsByClassName(\"bdge-rect-val\")[0];"
                "val_rect.setAttribute(\"width\", val_size.width + bdg_horiz_padding*2);"
                "val_rect.setAttribute(\"x\", width_total);"
                "width_total += val_size.width + bdg_horiz_padding*2;"
                "var width_update_elems = this_svg.getElementsByClassName(\"bdge-ttl-width\");"
                "netdata_bdge_each(width_update_elems, \"width\", width_total);"
                "this_svg.setAttribute(\"width\", width_total);"
                "</script>",
            VAR_0);
    }
    FUNC_0(VAR_6, "</svg>");
}
