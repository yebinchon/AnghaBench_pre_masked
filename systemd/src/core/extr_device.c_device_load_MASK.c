
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int description; int id; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*,int,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(Unit *VAR_0) {
        int VAR_1;

        VAR_1 = FUNC_1(VAR_0, 0);
        if (VAR_1 < 0)
                return VAR_1;

        if (!VAR_0->description) {


                VAR_1 = FUNC_2(VAR_0->id, &VAR_0->description);
                if (VAR_1 < 0)
                        FUNC_0(VAR_0, VAR_1, "Failed to unescape name: %m");
        }

        return 0;
}
