
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_t {scalar_t__ len; int str; } ;
typedef int VARTYPE ;
typedef size_t UINT ;
struct TYPE_3__ {scalar_t__ len; int vt; int str; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static VARTYPE FUNC_4(struct string_t *VAR_5)
{
    UINT VAR_6;

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++)
    {
        if (VAR_4[VAR_6].len == VAR_5->len)
        {
            if (FUNC_1(VAR_1, VAR_2,
                VAR_5->str, VAR_5->len, VAR_4[VAR_6].str, VAR_4[VAR_6].len) == VAR_0)
                return VAR_4[VAR_6].vt;
        }
    }

    FUNC_2("type %s is not recognized\n", FUNC_3(VAR_5->str, VAR_5->len));

    return VAR_3;
}
