
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef scalar_t__ gint64 ;
typedef int GHashTable ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,size_t,int ,TYPE_1__*) ;
 void* FUNC_6 (int *) ;
 char* FUNC_7 (void*) ;
 void* FUNC_8 (int *,void*) ;
 int * FUNC_9 (void*) ;
 char const* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static GHashTable *
FUNC_13 (const char *VAR_4, gint64 VAR_5)
{
    json_t *VAR_6;
    json_error_t VAR_7;
    GHashTable *VAR_8;

    VAR_6 = FUNC_5 (VAR_4, (size_t)VAR_5, 0, &VAR_7);
    if (!VAR_6) {
        FUNC_12 ("Failed to load json: %s\n", VAR_7.text);
        return ((void*)0);
    }

    VAR_8 = FUNC_1 (VAR_3, VAR_2, VAR_1, VAR_1);

    void *VAR_9 = FUNC_6 (VAR_6);
    const char *VAR_10;
    json_t *VAR_11;
    while (VAR_9) {
        VAR_10 = FUNC_7 (VAR_9);
        VAR_11 = FUNC_9 (VAR_9);
        if (FUNC_11(VAR_11) != VAR_0) {
            FUNC_12 ("Bad json object format when parsing head commit id map.\n");
            FUNC_0 (VAR_8);
            goto out;
        }
        FUNC_2 (VAR_8, FUNC_3 (VAR_10), FUNC_3(FUNC_10(VAR_11)));
        VAR_9 = FUNC_8 (VAR_6, VAR_9);
    }

out:
    FUNC_4 (VAR_6);
    return VAR_8;
}
