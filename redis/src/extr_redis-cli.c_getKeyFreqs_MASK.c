
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int elements; scalar_t__ type; char* str; unsigned long long integer; TYPE_1__** element; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_10__ {int err; char* errstr; } ;
struct TYPE_8__ {char* str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,void**) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(redisReply *VAR_5, unsigned long long *VAR_6) {
    redisReply *VAR_7;
    unsigned int VAR_8;


    for(VAR_8=0;VAR_8<VAR_5->elements;VAR_8++) {
        FUNC_3(VAR_3, "OBJECT freq %s", VAR_5->element[VAR_8]->str);
    }


    for(VAR_8=0;VAR_8<VAR_5->elements;VAR_8++) {
        if(FUNC_4(VAR_3, (void**)&VAR_7)!=VAR_0) {
            FUNC_1(VAR_4, "Error getting freq for key '%s' (%d: %s)\n",
                VAR_5->element[VAR_8]->str, VAR_3->err, VAR_3->errstr);
            FUNC_0(1);
        } else if(VAR_7->type != VAR_2) {
            if(VAR_7->type == VAR_1) {
                FUNC_1(VAR_4, "Error: %s\n", VAR_7->str);
                FUNC_0(1);
            } else {
                FUNC_1(VAR_4, "Warning: OBJECT freq on '%s' failed (may have been deleted)\n", VAR_5->element[VAR_8]->str);
                VAR_6[VAR_8] = 0;
            }
        } else {
            VAR_6[VAR_8] = VAR_7->integer;
        }
        FUNC_2(VAR_7);
    }
}
