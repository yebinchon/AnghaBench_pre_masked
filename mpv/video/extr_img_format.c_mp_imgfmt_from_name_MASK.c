
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_imgfmt_entry {int fmt; scalar_t__ name; } ;
typedef int bstr ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 char* FUNC_2 (int *,int ) ;
 struct mp_imgfmt_entry* VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(bstr VAR_1)
{
    int VAR_2 = 0;
    for (const struct mp_imgfmt_entry *VAR_3 = VAR_0; VAR_3->name; ++VAR_3) {
        if (FUNC_1(VAR_1, VAR_3->name)) {
            VAR_2 = VAR_3->fmt;
            break;
        }
    }
    if (!VAR_2) {
        char *VAR_4 = FUNC_2(((void*)0), VAR_1);
        VAR_2 = FUNC_3(FUNC_0(VAR_4));
        FUNC_4(VAR_4);
    }
    return VAR_2;
}
