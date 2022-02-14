
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlCharEncodingHandlerPtr ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (char*,int *,int *) ;
 int FUNC_4 () ;
 void* VAR_15 ;
 void* VAR_16 ;

void
FUNC_5(void) {
    unsigned short int VAR_17 = 0x1234;
    unsigned char *VAR_18 = (unsigned char *) &VAR_17;

    if (VAR_12 != ((void*)0)) return;

    VAR_12 = (xmlCharEncodingHandlerPtr *)
        FUNC_2(VAR_0 * sizeof(xmlCharEncodingHandlerPtr));

    if (*VAR_18 == 0x12) VAR_14 = 0;
    else if (*VAR_18 == 0x34) VAR_14 = 1;
    else {
        FUNC_0(VAR_10,
                "Odd problem at endianness detection\n", ((void*)0));
    }

    if (VAR_12 == ((void*)0)) {
        FUNC_1("xmlInitCharEncodingHandlers : out of memory !\n");
 return;
    }
    FUNC_3("UTF-8", VAR_7, VAR_7);
    VAR_16 =
          FUNC_3("UTF-16LE", VAR_2, ((void*)0));
    VAR_15 =
          FUNC_3("UTF-16BE", VAR_1, ((void*)0));
    FUNC_3("UTF-16", VAR_2, ((void*)0));
    FUNC_3("ISO-8859-1", VAR_13, ((void*)0));
    FUNC_3("ASCII", VAR_11, ((void*)0));
    FUNC_3("US-ASCII", VAR_11, ((void*)0));







}
