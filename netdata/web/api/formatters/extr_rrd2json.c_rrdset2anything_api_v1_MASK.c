
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int uint32_t ;
typedef int time_t ;
struct TYPE_27__ {void* contenttype; } ;
struct TYPE_26__ {int result_options; int before; } ;
struct TYPE_25__ {int last_accessed_time; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDR ;
typedef TYPE_3__ BUFFER ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int * FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 (TYPE_1__*,long,long long,long long,int,long,int,int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int,int,char*,char*,char*,char*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,int,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int,char*,char*,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*,int,int,int) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,int,int,int) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;

int FUNC_13(
          RRDSET *VAR_10
        , BUFFER *VAR_11
        , BUFFER *VAR_12
        , uint32_t VAR_13
        , long VAR_14
        , long long VAR_15
        , long long VAR_16
        , int VAR_17
        , long VAR_18
        , uint32_t VAR_19
        , time_t *VAR_20
) {
    VAR_10->last_accessed_time = FUNC_4();

    RRDR *VAR_21 = FUNC_5(VAR_10, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_12?FUNC_3(VAR_12):((void*)0));
    if(!VAR_21) {
        FUNC_2(VAR_11, "Cannot generate output with these parameters on this chart.");
        return VAR_4;
    }

    if(VAR_21->result_options & VAR_9)
        FUNC_1(VAR_11);
    else if(VAR_21->result_options & VAR_8)
        FUNC_0(VAR_11);

    if(VAR_20 && FUNC_12(VAR_21) > 0)
        *VAR_20 = VAR_21->before;

    switch(VAR_13) {
    case 130:
        if(VAR_19 & VAR_6) {
            VAR_11->contenttype = VAR_0;
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 1);
            FUNC_8(VAR_21, VAR_11, VAR_19, "", " ", "");
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 1);
        }
        else {
            VAR_11->contenttype = VAR_3;
            FUNC_8(VAR_21, VAR_11, VAR_19, "", " ", "");
        }
        break;

    case 129:
        if(VAR_19 & VAR_6) {
            VAR_11->contenttype = VAR_0;
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 1);
            FUNC_8(VAR_21, VAR_11, VAR_19, "", ",", "");
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 1);
        }
        else {
            VAR_11->contenttype = VAR_3;
            FUNC_8(VAR_21, VAR_11, VAR_19, "", ",", "");
        }
        break;

    case 131:
        if(VAR_19 & VAR_6) {
            VAR_11->contenttype = VAR_0;
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 0);
            FUNC_8(VAR_21, VAR_11, VAR_19, "[", ",", "]");
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 0);
        }
        else {
            VAR_11->contenttype = VAR_0;
            FUNC_8(VAR_21, VAR_11, VAR_19, "[", ",", "]");
        }
        break;

    case 139:
        if(VAR_19 & VAR_6) {
            VAR_11->contenttype = VAR_0;
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 1);
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19, "", ",", "\\n", "");
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 1);
        }
        else {
            VAR_11->contenttype = VAR_3;
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19, "", ",", "\r\n", "");
        }
        break;

    case 137:
        if(VAR_19 & VAR_6) {
            VAR_11->contenttype = VAR_0;
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 1);
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19, "", "|", "\\n", "");
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 1);
        }
        else {
            VAR_11->contenttype = VAR_3;
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19, "", "|", "\r\n", "");
        }
        break;

    case 138:
        VAR_11->contenttype = VAR_0;
        if(VAR_19 & VAR_6) {
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 0);
            FUNC_2(VAR_11, "[\n");
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19 + VAR_7, "[", ",", "]", ",\n");
            FUNC_2(VAR_11, "\n]");
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 0);
        }
        else {
            VAR_11->contenttype = VAR_0;
            FUNC_2(VAR_11, "[\n");
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19 + VAR_7, "[", ",", "]", ",\n");
            FUNC_2(VAR_11, "\n]");
        }
        break;

    case 128:
        if(VAR_19 & VAR_6) {
            VAR_11->contenttype = VAR_0;
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 1);
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19, "", "\t", "\\n", "");
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 1);
        }
        else {
            VAR_11->contenttype = VAR_3;
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19, "", "\t", "\r\n", "");
        }
        break;

    case 134:
        if(VAR_19 & VAR_6) {
            VAR_11->contenttype = VAR_0;
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 1);
            FUNC_2(VAR_11, "<html>\\n<center>\\n<table border=\\\"0\\\" cellpadding=\\\"5\\\" cellspacing=\\\"5\\\">\\n");
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19, "<tr><td>", "</td><td>", "</td></tr>\\n", "");
            FUNC_2(VAR_11, "</table>\\n</center>\\n</html>\\n");
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 1);
        }
        else {
            VAR_11->contenttype = VAR_2;
            FUNC_2(VAR_11, "<html>\n<center>\n<table border=\"0\" cellpadding=\"5\" cellspacing=\"5\">\n");
            FUNC_6(VAR_21, VAR_11, VAR_13, VAR_19, "<tr><td>", "</td><td>", "</td></tr>\n", "");
            FUNC_2(VAR_11, "</table>\n</center>\n</html>\n");
        }
        break;

    case 135:
        VAR_11->contenttype = VAR_1;

        if(VAR_19 & VAR_6)
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 0);

        FUNC_7(VAR_21, VAR_11, VAR_19, 1);

        if(VAR_19 & VAR_6)
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 0);
        break;

    case 136:
        VAR_11->contenttype = VAR_0;

        if(VAR_19 & VAR_6)
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 0);

        FUNC_7(VAR_21, VAR_11, VAR_19, 1);

        if(VAR_19 & VAR_6)
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 0);
        break;

    case 132:
        VAR_11->contenttype = VAR_1;
        if(VAR_19 & VAR_6)
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 0);

        FUNC_7(VAR_21, VAR_11, VAR_19, 0);

        if(VAR_19 & VAR_6)
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 0);
        break;

    case 133:
    default:
        VAR_11->contenttype = VAR_0;

        if(VAR_19 & VAR_6)
            FUNC_10(VAR_21, VAR_11, VAR_13, VAR_19, 0);

        FUNC_7(VAR_21, VAR_11, VAR_19, 0);

        if(VAR_19 & VAR_6)
            FUNC_11(VAR_21, VAR_11, VAR_13, VAR_19, 0);
        break;
    }

    FUNC_9(VAR_21);
    return VAR_5;
}
