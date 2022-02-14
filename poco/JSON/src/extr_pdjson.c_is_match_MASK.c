
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const (* get ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;
typedef enum json_type { ____Placeholder_json_type } json_type ;


 int VAR_0 ;
 char const FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static enum json_type
FUNC_1(json_stream *VAR_1, const char *VAR_2, enum json_type VAR_3)
{
    for (const char *VAR_4 = VAR_2; *VAR_4; VAR_4++)
        if (*VAR_4 != VAR_1->source.get(&VAR_1->source))
            return VAR_0;
    return VAR_3;
}
