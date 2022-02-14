
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int type; int id; } ;
struct TYPE_4__ {TYPE_2__* unit; } ;
typedef TYPE_1__ Job ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(const void *VAR_0, const void *VAR_1) {
        const Job *VAR_2 = VAR_0, *VAR_3 = VAR_1;
        int VAR_4, VAR_5;
        uint64_t VAR_6, VAR_7;
        int VAR_8;

        if ((VAR_8 = FUNC_0(VAR_2->unit->type, VAR_3->unit->type)) != 0)
                return -VAR_8;

        VAR_6 = FUNC_2(VAR_2->unit);
        VAR_7 = FUNC_2(VAR_3->unit);

        if ((VAR_8 = FUNC_0(VAR_6, VAR_7)) != 0)
                return -VAR_8;

        VAR_4 = FUNC_3(VAR_2->unit);
        VAR_5 = FUNC_3(VAR_3->unit);

        if ((VAR_8 = FUNC_0(VAR_4, VAR_5)) != 0)
                return VAR_8;

        return FUNC_1(VAR_2->unit->id, VAR_3->unit->id);
}
