
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct priv {int entry_size; int entry_name; struct mp_archive* mpa; int src; } ;
struct mp_archive {int entry; int locale; int entry_filename; } ;
struct TYPE_4__ {int log; scalar_t__ pos; struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int locale_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mp_archive*) ;
 struct mp_archive* FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct mp_archive*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(stream_t *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;
    FUNC_3(VAR_4->mpa);
    VAR_3->pos = 0;
    VAR_4->mpa = FUNC_4(VAR_3->log, VAR_4->src, VAR_0);
    if (!VAR_4->mpa)
        return VAR_1;


    struct mp_archive *VAR_5 = VAR_4->mpa;
    while (FUNC_5(VAR_5)) {
        if (FUNC_6(VAR_4->entry_name, VAR_5->entry_filename) == 0) {
            locale_t VAR_6 = FUNC_7(VAR_5->locale);
            VAR_4->entry_size = -1;
            if (FUNC_2(VAR_5->entry))
                VAR_4->entry_size = FUNC_1(VAR_5->entry);
            FUNC_7(VAR_6);
            return VAR_2;
        }
    }

    FUNC_3(VAR_4->mpa);
    VAR_4->mpa = ((void*)0);
    FUNC_0(VAR_3, "archive entry not found. '%s'\n", VAR_4->entry_name);
    return VAR_1;
}
