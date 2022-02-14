
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* get ) (TYPE_2__*) ;} ;
struct TYPE_9__ {TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;
typedef enum json_type { ____Placeholder_json_type } json_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static enum json_type
FUNC_7(json_stream *VAR_3)
{
    if (FUNC_1(VAR_3) != 0)
        return VAR_1;
    while (1) {
        int VAR_4 = VAR_3->source.get(&VAR_3->source);
        if (VAR_4 == VAR_0) {
            FUNC_2(VAR_3, "%s", "unterminated string literal");
            return VAR_1;
        } else if (VAR_4 == '"') {
            if (FUNC_3(VAR_3, '\0') == 0)
                return VAR_2;
            else
                return VAR_1;
        } else if (VAR_4 == '\\') {
            if (FUNC_4(VAR_3) != 0)
                return VAR_1;
        } else if ((unsigned) VAR_4 >= 0x80) {
            if (FUNC_5(VAR_3, VAR_4) != 0)
                return VAR_1;
        } else {
            if (FUNC_0(VAR_4)) {
                FUNC_2(VAR_3, "%s", "unescaped control character in string");
                return VAR_1;
            }

            if (FUNC_3(VAR_3, VAR_4) != 0)
                return VAR_1;
        }
    }
    return VAR_1;
}
