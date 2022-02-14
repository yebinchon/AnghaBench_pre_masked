
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {char* start; int len; } ;


 struct bstr FUNC_0 (struct bstr,int) ;
 struct bstr FUNC_1 (struct bstr,int ,char*) ;
 int FUNC_2 (struct bstr,char) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static struct bstr FUNC_4(struct bstr *VAR_0, char VAR_1, bool VAR_2)
{
    struct bstr VAR_3 = *VAR_0;
    struct bstr VAR_4 = VAR_3;
    for (;;) {
        int VAR_5 = VAR_1 ? FUNC_2(VAR_3, VAR_1) : -1;
        if (VAR_5 > 0 && VAR_3.start[VAR_5 - 1] == '\\') {
            if (VAR_2) {
                FUNC_3(VAR_3.start + VAR_5 - 1, VAR_3.start + VAR_5, VAR_3.len - VAR_5);
                VAR_3.len--;
                VAR_3 = FUNC_0(VAR_3, VAR_5);
            } else
                VAR_3 = FUNC_0(VAR_3, VAR_5 + 1);
        } else {
            VAR_3 = FUNC_0(VAR_3, VAR_5 < 0 ? VAR_3.len : VAR_5);
            break;
        }
    }
    *VAR_0 = VAR_3;
    return FUNC_1(VAR_4, 0, VAR_3.start - VAR_4.start);
}
