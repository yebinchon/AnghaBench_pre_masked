
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mount_point {scalar_t__ hash; char const* name; struct mount_point* next; int len; } ;


 struct mount_point* FUNC_0 (int,int) ;
 int VAR_0 ;
 struct mount_point* VAR_1 ;
 struct mount_point* VAR_2 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*) ;
 char const* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct mount_point *FUNC_6(const char *VAR_3) {
    struct mount_point *VAR_4;

    uint32_t VAR_5 = FUNC_1(VAR_3);


    for(VAR_4 = VAR_1 ; VAR_4 ; VAR_4 = VAR_4->next) {
        if (FUNC_5(VAR_5 == VAR_4->hash && !FUNC_2(VAR_3, VAR_4->name))) {
            VAR_1 = VAR_4->next;
            return VAR_4;
        }
    }


    for(VAR_4 = VAR_2 ; VAR_4 != VAR_1 ; VAR_4 = VAR_4->next) {
        if (FUNC_5(VAR_5 == VAR_4->hash && !FUNC_2(VAR_3, VAR_4->name))) {
            VAR_1 = VAR_4->next;
            return VAR_4;
        }
    }


    VAR_4 = FUNC_0(1, sizeof(struct mount_point));
    VAR_4->name = FUNC_3(VAR_3);
    VAR_4->hash = FUNC_1(VAR_4->name);
    VAR_4->len = FUNC_4(VAR_4->name);
    VAR_0++;


    if (VAR_2) {
        struct mount_point *VAR_6;
        for(VAR_6 = VAR_2; VAR_6->next ; VAR_6 = VAR_6->next) ;
        VAR_6->next = VAR_4;
    }
    else
        VAR_2 = VAR_4;

    return VAR_4;
}
