
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
struct unit_times {double activating; double activated; double deactivating; double deactivated; int name; int time; } ;


 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (char*,double,double,int) ;
 int FUNC_2 (int,double,int,char*,int ,...) ;

__attribute__((used)) static int FUNC_3(struct unit_times *VAR_3, double VAR_4, int VAR_5) {
        char VAR_6[VAR_0];
        bool VAR_7;

        if (!VAR_3->name)
                return 0;

        FUNC_1("activating", VAR_3->activating, VAR_3->activated, VAR_5);
        FUNC_1("active", VAR_3->activated, VAR_3->deactivating, VAR_5);
        FUNC_1("deactivating", VAR_3->deactivating, VAR_3->deactivated, VAR_5);


        VAR_7 = VAR_3->activating * VAR_1 < VAR_4 / 2;
        if (VAR_3->time)
                FUNC_2(VAR_7, VAR_3->activating, VAR_5, "%s (%s)",
                         VAR_3->name, FUNC_0(VAR_6, sizeof(VAR_6), VAR_3->time, VAR_2));
        else
                FUNC_2(VAR_7, VAR_3->activating, VAR_5, "%s", VAR_3->name);

        return 1;
}
