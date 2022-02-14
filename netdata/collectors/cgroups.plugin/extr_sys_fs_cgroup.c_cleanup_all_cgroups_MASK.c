
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int enabled; int options; scalar_t__ hash_chart; struct cgroup* next; int id; int chart_id; scalar_t__ available; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgroup*) ;
 struct cgroup* VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3() {
    struct cgroup *VAR_3 = VAR_2, *VAR_4 = ((void*)0);

    for(; VAR_3 ;) {
        if(!VAR_3->available) {

            {
                struct cgroup *VAR_5;
                for(VAR_5 = VAR_2; VAR_5 ; VAR_5 = VAR_5->next) {
                    if(VAR_5 != VAR_3 && VAR_5->available && !VAR_5->enabled && VAR_5->options & VAR_0 && VAR_5->hash_chart == VAR_3->hash_chart && !FUNC_2(VAR_5->chart_id, VAR_3->chart_id)) {
                        FUNC_1(VAR_1, "Enabling duplicate of cgroup '%s' with id '%s', because the original with id '%s' stopped.", VAR_5->chart_id, VAR_5->id, VAR_3->id);
                        VAR_5->enabled = 1;
                        VAR_5->options &= ~VAR_0;
                        break;
                    }
                }
            }

            if(!VAR_4)
                VAR_2 = VAR_3->next;
            else
                VAR_4->next = VAR_3->next;

            FUNC_0(VAR_3);

            if(!VAR_4)
                VAR_3 = VAR_2;
            else
                VAR_3 = VAR_4->next;
        }
        else {
            VAR_4 = VAR_3;
            VAR_3 = VAR_3->next;
        }
    }
}
