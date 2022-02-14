
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int line; char* text; } ;
typedef TYPE_1__ json_error_t ;


 int FUNC_0 (int ,char*,int,char*) ;
 int * FUNC_1 (char const*,int ,TYPE_1__*) ;
 int VAR_0 ;

json_t *FUNC_2(const char *VAR_1) {
    json_t *VAR_2;
    json_error_t VAR_3;

    VAR_2 = FUNC_1(VAR_1, 0, &VAR_3);

    if (VAR_2) {
        return VAR_2;
    } else {
        FUNC_0(VAR_0, "json error on line %d: %s\n", VAR_3.line, VAR_3.text);
        return (json_t *)0;
    }
}
