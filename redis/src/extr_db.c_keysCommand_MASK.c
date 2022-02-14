
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char* sds ;
typedef int robj ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_9__ {TYPE_5__* db; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_10__ {int dict; } ;
struct TYPE_8__ {char* ptr; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 void* FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_2__*,void*,unsigned long) ;
 scalar_t__ FUNC_11 (char*,int,char*,int,int ) ;

void FUNC_12(client *VAR_0) {
    dictIterator *VAR_1;
    dictEntry *VAR_2;
    sds VAR_3 = VAR_0->argv[1]->ptr;
    int VAR_4 = FUNC_9(VAR_3), VAR_5;
    unsigned long VAR_6 = 0;
    void *VAR_7 = FUNC_1(VAR_0);

    VAR_1 = FUNC_5(VAR_0->db->dict);
    VAR_5 = (VAR_3[0] == '*' && VAR_3[1] == '\0');
    while((VAR_2 = FUNC_6(VAR_1)) != ((void*)0)) {
        sds VAR_8 = FUNC_4(VAR_2);
        robj *VAR_9;

        if (VAR_5 || FUNC_11(VAR_3,VAR_4,VAR_8,FUNC_9(VAR_8),0)) {
            VAR_9 = FUNC_2(VAR_8,FUNC_9(VAR_8));
            if (!FUNC_8(VAR_0->db,VAR_9)) {
                FUNC_0(VAR_0,VAR_9);
                VAR_6++;
            }
            FUNC_3(VAR_9);
        }
    }
    FUNC_7(VAR_1);
    FUNC_10(VAR_0,VAR_7,VAR_6);
}
