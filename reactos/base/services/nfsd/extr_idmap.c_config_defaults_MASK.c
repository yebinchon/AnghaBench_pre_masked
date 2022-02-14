
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_config {int dummy; } ;
struct config_option {int offset; scalar_t__ type; int max_len; int def; int key; } ;
typedef int UINT ;


 int FUNC_0 (struct config_option*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ,int ,...) ;
 struct config_option* VAR_4 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(
    struct idmap_config *VAR_5)
{
    const struct config_option *VAR_6;
    const int VAR_7 = FUNC_0(VAR_4);
    char *VAR_8;
    int VAR_9, VAR_10 = VAR_2;

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
        VAR_6 = &VAR_4[VAR_9];
        VAR_8 = (char*)VAR_5 + VAR_6->offset;

        if (VAR_6->type == VAR_3) {
            if (!FUNC_4(VAR_6->def, (UINT*)VAR_8)) {
                VAR_10 = VAR_1;
                FUNC_3("failed to parse default value of %s=\"%s\": "
                    "expected a number\n", VAR_6->key, VAR_6->def);
                break;
            }
        } else {
            if (FUNC_1(FUNC_2(VAR_8, VAR_6->max_len, VAR_6->def))) {
                VAR_10 = VAR_0;
                FUNC_3("failed to parse default value of %s=\"%s\": "
                    "buffer overflow > %u\n", VAR_6->key, VAR_6->def,
                    VAR_6->max_len);
                break;
            }
        }
    }
    return VAR_10;
}
