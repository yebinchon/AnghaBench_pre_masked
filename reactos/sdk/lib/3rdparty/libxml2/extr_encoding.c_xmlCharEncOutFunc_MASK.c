
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xmlCharEncodingHandler ;
typedef int xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
typedef int charref ;
struct TYPE_6__ {int size; int use; int* content; int alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,int,...) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int*,int*,int*,int*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_6 (int const*,int*) ;

int
FUNC_7(xmlCharEncodingHandler *VAR_4, xmlBufferPtr VAR_5,
                  xmlBufferPtr VAR_6) {
    int VAR_7;
    int VAR_8;
    int VAR_9 = 0;
    int VAR_10;
    int VAR_11 = 0;

    if (VAR_4 == ((void*)0)) return(-1);
    if (VAR_5 == ((void*)0)) return(-1);

retry:

    VAR_8 = VAR_5->size - VAR_5->use;

    if (VAR_8 > 0)
 VAR_8--;




    if (VAR_6 == ((void*)0)) {
        VAR_10 = 0;

        FUNC_3(VAR_4, &VAR_5->content[VAR_5->use], &VAR_8,
                          ((void*)0), &VAR_10);
        VAR_5->use += VAR_8;
        VAR_5->content[VAR_5->use] = 0;




        return(0);
    }




    VAR_10 = VAR_6->use;
    if (VAR_10 == 0)
 return(0);
    if (VAR_10 * 4 >= VAR_8) {
        FUNC_1(VAR_5, VAR_10 * 4);
 VAR_8 = VAR_5->size - VAR_5->use - 1;
    }
    VAR_7 = FUNC_3(VAR_4, &VAR_5->content[VAR_5->use], &VAR_8,
                            VAR_6->content, &VAR_10);
    FUNC_2(VAR_6, VAR_10);
    VAR_5->use += VAR_8;
    VAR_9 += VAR_8;
    VAR_5->content[VAR_5->use] = 0;
    if (VAR_7 == -1) {
        if (VAR_8 > 0) {

            goto retry;
        }
        VAR_7 = -3;
    }

    if (VAR_7 >= 0) VAR_11 += VAR_7;




    switch (VAR_7) {
        case 0:





     break;
        case -1:




     break;
        case -3:




     break;
        case -4:
     FUNC_4(VAR_2,
             "xmlCharEncOutFunc: no output function !\n", ((void*)0));
     VAR_7 = -1;
            break;
        case -2: {
     xmlChar VAR_12[20];
     int VAR_13 = VAR_6->use;
     const xmlChar *VAR_14 = (const xmlChar *) VAR_6->content;
     int VAR_15, VAR_16;

     VAR_15 = FUNC_6(VAR_14, &VAR_13);
     if (VAR_15 <= 0)
                break;
            VAR_16 = FUNC_0((char *) &VAR_12[0], sizeof(VAR_12),
                             "&#%d;", VAR_15);
            FUNC_2(VAR_6, VAR_13);
            FUNC_1(VAR_5, VAR_16 * 4);
     VAR_8 = VAR_5->size - VAR_5->use - 1;
            VAR_10 = VAR_16;
            VAR_7 = FUNC_3(VAR_4, &VAR_5->content[VAR_5->use], &VAR_8,
                                    VAR_12, &VAR_10);

     if ((VAR_7 < 0) || (VAR_10 != VAR_16)) {
  char VAR_17[50];

  FUNC_0(&VAR_17[0], 49, "0x%02X 0x%02X 0x%02X 0x%02X",
    VAR_6->content[0], VAR_6->content[1],
    VAR_6->content[2], VAR_6->content[3]);
  VAR_17[49] = 0;
  FUNC_4(VAR_1,
      "output conversion failed due to conv error, bytes %s\n",
          VAR_17);
  if (VAR_6->alloc != VAR_0)
      VAR_6->content[0] = ' ';
         break;
     }

            VAR_5->use += VAR_8;
            VAR_9 += VAR_8;
            VAR_5->content[VAR_5->use] = 0;
            goto retry;
 }
    }
    return(VAR_7);
}
