
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int gboolean ;
struct TYPE_2__ {int enc_version; int enc_iv; int enc_key; } ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static gboolean
FUNC_2 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    SeafRepo *VAR_3 = VAR_2;
    const char *VAR_4, *VAR_5;

    VAR_4 = (const char *)FUNC_1(VAR_1, 0);
    VAR_5 = (const char *)FUNC_1(VAR_1, 1);

    if (VAR_3->enc_version == 1) {
        FUNC_0 (VAR_4, VAR_3->enc_key, 16);
        FUNC_0 (VAR_5, VAR_3->enc_iv, 16);
    } else if (VAR_3->enc_version >= 2) {
        FUNC_0 (VAR_4, VAR_3->enc_key, 32);
        FUNC_0 (VAR_5, VAR_3->enc_iv, 16);
    }

    return VAR_0;
}
