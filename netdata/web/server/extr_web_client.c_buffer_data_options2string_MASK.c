
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*) ;

void FUNC_1(BUFFER *VAR_12, uint32_t VAR_13) {
    int VAR_14 = 0;

    if(VAR_13 & VAR_5) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "nonzero");
    }

    if(VAR_13 & VAR_10) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "flip");
    }

    if(VAR_13 & VAR_2) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "jsonwrap");
    }

    if(VAR_13 & VAR_4) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "min2max");
    }

    if(VAR_13 & VAR_3) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "ms");
    }

    if(VAR_13 & VAR_0) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "absolute");
    }

    if(VAR_13 & VAR_11) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "seconds");
    }

    if(VAR_13 & VAR_7) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "null2zero");
    }

    if(VAR_13 & VAR_8) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "objectrows");
    }

    if(VAR_13 & VAR_1) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "google_json");
    }

    if(VAR_13 & VAR_9) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "percentage");
    }

    if(VAR_13 & VAR_6) {
        if(VAR_14++) FUNC_0(VAR_12, " ");
        FUNC_0(VAR_12, "unaligned");
    }
}
