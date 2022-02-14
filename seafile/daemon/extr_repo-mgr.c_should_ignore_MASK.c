
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_2__ {int sync_extra_temp_file; } ;
typedef int GPatternSpec ;
typedef int GList ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,char const*,char const*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,int,int *) ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static gboolean
FUNC_8(const char *VAR_6, const char *VAR_7, void *VAR_8)
{
    GPatternSpec **VAR_9 = VAR_3;
    GList *VAR_10 = (GList *)VAR_8;

    if (!FUNC_3 (VAR_7, -1, ((void*)0))) {
        FUNC_5 ("File name %s contains non-UTF8 characters, skip.\n", VAR_7);
        return VAR_2;
    }


    if (FUNC_7(VAR_7) >= VAR_1)
        return VAR_2;

    if (FUNC_6 (VAR_7, '/'))
        return VAR_2;

    while (*VAR_9) {
        if (FUNC_2(*VAR_9, VAR_7))
            return VAR_2;
        VAR_9++;
    }

    if (!VAR_5->sync_extra_temp_file) {
        VAR_9 = VAR_4;
        while (*VAR_9) {
            if (FUNC_2(*VAR_9, VAR_7))
                return VAR_2;
            VAR_9++;
        }
    }

    if (VAR_6) {
        char *VAR_11 = FUNC_0 ("/", VAR_6, VAR_7, ((void*)0));
        if (FUNC_4 (VAR_10, VAR_11)) {
            FUNC_1 (VAR_11);
            return VAR_2;
        }
        FUNC_1 (VAR_11);
    }

    return VAR_0;
}
