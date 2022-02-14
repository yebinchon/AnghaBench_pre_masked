
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int xmlChar ;
typedef int * xmlBufPtr ;
struct TYPE_3__ {int * encoder; int * raw; int * buffer; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int const,int const,int const,int const) ;
 int FUNC_1 (int *,int) ;
 size_t FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int*,int*,int*,int) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ,char*,int,int,...) ;
 int VAR_1 ;

int
FUNC_11(xmlParserInputBufferPtr VAR_2, int VAR_3)
{
    int VAR_4;
    size_t VAR_5;
    size_t VAR_6;
    int VAR_7;
    int VAR_8;
    xmlBufPtr VAR_9;
    xmlBufPtr VAR_10;

    if ((VAR_2 == ((void*)0)) || (VAR_2->encoder == ((void*)0)) ||
        (VAR_2->buffer == ((void*)0)) || (VAR_2->raw == ((void*)0)))
        return (-1);
    VAR_10 = VAR_2->buffer;
    VAR_9 = VAR_2->raw;

    VAR_6 = FUNC_7(VAR_9);
    if (VAR_6 == 0)
        return (0);
    if ((VAR_6 > 64 * 1024) && (VAR_3 == 0))
        VAR_6 = 64 * 1024;
    VAR_5 = FUNC_2(VAR_10);
    if (VAR_5 > 0)
        VAR_5--;
    if (VAR_6 * 2 >= VAR_5) {
        FUNC_5(VAR_10, VAR_6 * 2);
        VAR_5 = FUNC_2(VAR_10);
        if (VAR_5 > 0)
            VAR_5--;
    }
    if ((VAR_5 > 128 * 1024) && (VAR_3 == 0))
        VAR_5 = 128 * 1024;

    VAR_7 = VAR_6;
    VAR_8 = VAR_5;
    VAR_4 = FUNC_8(VAR_2->encoder, FUNC_4(VAR_10), &VAR_8,
                           FUNC_3(VAR_9), &VAR_7, VAR_3);
    FUNC_6(VAR_9, VAR_7);
    FUNC_1(VAR_10, VAR_8);
    if (VAR_4 == -1)
        VAR_4 = -3;

    switch (VAR_4) {
        case 0:





            break;
        case -1:





            break;
        case -3:





            break;
        case -2: {
            char VAR_11[50];
            const xmlChar *VAR_12 = FUNC_3(VAR_9);

     FUNC_0(&VAR_11[0], 49, "0x%02X 0x%02X 0x%02X 0x%02X",
       VAR_12[0], VAR_12[1],
       VAR_12[2], VAR_12[3]);
     VAR_11[49] = 0;
     FUNC_9(VAR_0,
      "input conversion failed due to input error, bytes %s\n",
             VAR_11);
        }
    }



    if (VAR_4 == -3)
        VAR_4 = 0;
    return (VAR_8? VAR_8 : VAR_4);
}
