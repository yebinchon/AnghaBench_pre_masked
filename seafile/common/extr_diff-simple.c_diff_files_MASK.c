
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int files ;
struct TYPE_8__ {int (* file_cb ) (int,char const*,TYPE_1__**,int ) ;int data; } ;
struct TYPE_7__ {int mode; } ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ DiffOptions ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**,int ,int) ;
 int FUNC_2 (int,char const*,TYPE_1__**,int ) ;

__attribute__((used)) static int
FUNC_3 (int VAR_0, SeafDirent *VAR_1[], const char *VAR_2, DiffOptions *VAR_3)
{
    SeafDirent *VAR_4[3];
    int VAR_5, VAR_6 = 0;

    FUNC_1 (VAR_4, 0, sizeof(VAR_4[0])*VAR_0);
    for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
        if (VAR_1[VAR_5] && FUNC_0(VAR_1[VAR_5]->mode)) {
            VAR_4[VAR_5] = VAR_1[VAR_5];
            ++VAR_6;
        }
    }

    if (VAR_6 == 0)
        return 0;

    return VAR_3->file_cb (VAR_0, VAR_2, VAR_4, VAR_3->data);
}
