
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* sizecmd; } ;
typedef TYPE_2__ typeinfo ;
struct TYPE_12__ {unsigned int elements; scalar_t__ type; unsigned long long integer; TYPE_1__** element; } ;
typedef TYPE_3__ redisReply ;
struct TYPE_13__ {int err; char* errstr; } ;
struct TYPE_10__ {char* str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,char*,char*,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_4__*,void**) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(redisReply *VAR_4, typeinfo **VAR_5,
                        unsigned long long *VAR_6, int VAR_7,
                        unsigned VAR_8)
{
    redisReply *VAR_9;
    unsigned int VAR_10;


    for(VAR_10=0;VAR_10<VAR_4->elements;VAR_10++) {

        if(!VAR_5[VAR_10] || (!VAR_5[VAR_10]->sizecmd && !VAR_7))
            continue;

        if (!VAR_7)
            FUNC_3(VAR_2, "%s %s",
                VAR_5[VAR_10]->sizecmd, VAR_4->element[VAR_10]->str);
        else if (VAR_8==0)
            FUNC_3(VAR_2, "%s %s %s",
                "MEMORY", "USAGE", VAR_4->element[VAR_10]->str);
        else
            FUNC_3(VAR_2, "%s %s %s SAMPLES %u",
                "MEMORY", "USAGE", VAR_4->element[VAR_10]->str, VAR_8);
    }


    for(VAR_10=0;VAR_10<VAR_4->elements;VAR_10++) {

        if(!VAR_5[VAR_10] || (!VAR_5[VAR_10]->sizecmd && !VAR_7)) {
            VAR_6[VAR_10] = 0;
            continue;
        }


        if(FUNC_4(VAR_2, (void**)&VAR_9)!=VAR_0) {
            FUNC_1(VAR_3, "Error getting size for key '%s' (%d: %s)\n",
                VAR_4->element[VAR_10]->str, VAR_2->err, VAR_2->errstr);
            FUNC_0(1);
        } else if(VAR_9->type != VAR_1) {


            FUNC_1(VAR_3,
                "Warning:  %s on '%s' failed (may have changed type)\n",
                !VAR_7? VAR_5[VAR_10]->sizecmd: "MEMORY USAGE",
                VAR_4->element[VAR_10]->str);
            VAR_6[VAR_10] = 0;
        } else {
            VAR_6[VAR_10] = VAR_9->integer;
        }

        FUNC_2(VAR_9);
    }
}
