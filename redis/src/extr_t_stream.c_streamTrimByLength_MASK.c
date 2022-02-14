
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t length; int rax; } ;
typedef TYPE_1__ stream ;
struct TYPE_9__ {unsigned char* data; int key_len; int * key; } ;
typedef TYPE_2__ raxIterator ;
typedef size_t int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 void* FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned char*) ;
 unsigned char* FUNC_4 (unsigned char*,unsigned char**,int) ;
 int FUNC_5 (int ,int *,int ,unsigned char*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (TYPE_2__*,char*,int *,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int) ;

int64_t FUNC_12(stream *VAR_2, size_t VAR_3, int VAR_4) {
    if (VAR_2->length <= VAR_3) return 0;

    raxIterator VAR_5;
    FUNC_9(&VAR_5,VAR_2->rax);
    FUNC_8(&VAR_5,"^",((void*)0),0);

    int64_t VAR_6 = 0;
    while(VAR_2->length > VAR_3 && FUNC_6(&VAR_5)) {
        unsigned char *VAR_7 = VAR_5.data, *VAR_8 = FUNC_0(VAR_7);
        int64_t VAR_9 = FUNC_2(VAR_8);



        if (VAR_2->length - VAR_9 >= VAR_3) {
            FUNC_1(VAR_7);
            FUNC_7(VAR_2->rax,VAR_5.key,VAR_5.key_len,((void*)0));
            FUNC_8(&VAR_5,">=",VAR_5.key,VAR_5.key_len);
            VAR_2->length -= VAR_9;
            VAR_6 += VAR_9;
            continue;
        }



        if (VAR_4) break;



        int64_t VAR_10 = VAR_2->length - VAR_3;
        FUNC_11(VAR_10 < VAR_9);
        VAR_7 = FUNC_4(VAR_7,&VAR_8,VAR_9-VAR_10);
        VAR_8 = FUNC_3(VAR_7,VAR_8);
        int64_t VAR_11 = FUNC_2(VAR_8);
        VAR_7 = FUNC_4(VAR_7,&VAR_8,VAR_11+VAR_10);
        VAR_8 = FUNC_3(VAR_7,VAR_8);


        int64_t VAR_12 = FUNC_2(VAR_8);
        VAR_8 = FUNC_3(VAR_7,VAR_8);
        for (int64_t VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
            VAR_8 = FUNC_3(VAR_7,VAR_8);
        VAR_8 = FUNC_3(VAR_7,VAR_8);




        while(VAR_8) {
            int VAR_14 = FUNC_2(VAR_8);
            int VAR_15;


            if (!(VAR_14 & VAR_0)) {
                VAR_14 |= VAR_0;
                VAR_7 = FUNC_4(VAR_7,&VAR_8,VAR_14);
                VAR_6++;
                VAR_2->length--;
                if (VAR_2->length <= VAR_3) break;
            }

            VAR_8 = FUNC_3(VAR_7,VAR_8);
            VAR_8 = FUNC_3(VAR_7,VAR_8);
            VAR_8 = FUNC_3(VAR_7,VAR_8);
            if (VAR_14 & VAR_1) {
                VAR_15 = VAR_12;
            } else {
                VAR_15 = FUNC_2(VAR_8);
                VAR_15 = 1+(VAR_15*2);
            }

            while(VAR_15--) VAR_8 = FUNC_3(VAR_7,VAR_8);
            VAR_8 = FUNC_3(VAR_7,VAR_8);
        }



        VAR_9 -= VAR_10;
        VAR_11 += VAR_10;
        if (VAR_9 + VAR_11 > 10 && VAR_11 > VAR_9/2) {

        }


        FUNC_5(VAR_2->rax,VAR_5.key,VAR_5.key_len,VAR_7,((void*)0));

        break;

    }

    FUNC_10(&VAR_5);
    return VAR_6;
}
