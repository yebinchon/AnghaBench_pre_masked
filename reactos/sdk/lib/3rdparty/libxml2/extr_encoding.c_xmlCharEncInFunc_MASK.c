
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xmlCharEncodingHandler ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_6__ {int use; int size; int* content; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int*,int*,int*,int*,int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,int,int,...) ;
 int VAR_1 ;

int
FUNC_6(xmlCharEncodingHandler * VAR_2, xmlBufferPtr VAR_3,
                 xmlBufferPtr VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7;

    if (VAR_2 == ((void*)0))
        return (-1);
    if (VAR_3 == ((void*)0))
        return (-1);
    if (VAR_4 == ((void*)0))
        return (-1);

    VAR_7 = VAR_4->use;
    if (VAR_7 == 0)
        return (0);
    VAR_6 = VAR_3->size - VAR_3->use -1;
    if (VAR_7 * 2 >= VAR_6) {
        FUNC_1(VAR_3, VAR_3->size + VAR_7 * 2);
        VAR_6 = VAR_3->size - VAR_3->use - 1;
    }
    VAR_5 = FUNC_3(VAR_2, &VAR_3->content[VAR_3->use], &VAR_6,
                           VAR_4->content, &VAR_7, 1);
    FUNC_2(VAR_4, VAR_7);
    VAR_3->use += VAR_6;
    VAR_3->content[VAR_3->use] = 0;
    if (VAR_5 == -1)
        VAR_5 = -3;

    switch (VAR_5) {
        case 0:





            break;
        case -1:





            break;
        case -3:





            break;
        case -2: {
            char VAR_8[50];

     FUNC_0(&VAR_8[0], 49, "0x%02X 0x%02X 0x%02X 0x%02X",
       VAR_4->content[0], VAR_4->content[1],
       VAR_4->content[2], VAR_4->content[3]);
     VAR_8[49] = 0;
     FUNC_4(VAR_0,
      "input conversion failed due to input error, bytes %s\n",
             VAR_8);
        }
    }



    if (VAR_5 == -3)
        VAR_5 = 0;
    return (VAR_6? VAR_6 : VAR_5);
}
