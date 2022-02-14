
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlwriter ;
struct element {int len; scalar_t__* qname; } ;
typedef char WCHAR ;


 int FUNC_0 (scalar_t__*,char const*) ;
 int FUNC_1 (scalar_t__*,char const*) ;
 int FUNC_2 (char const*) ;
 void* FUNC_3 (int *,int) ;

__attribute__((used)) static struct element *FUNC_4(xmlwriter *VAR_0, const WCHAR *VAR_1, const WCHAR *VAR_2)
{
    struct element *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_3(VAR_0, sizeof(*VAR_3));
    if (!VAR_3) return VAR_3;

    VAR_4 = VAR_1 ? FUNC_2(VAR_1) + 1 : 0;
    VAR_4 += FUNC_2(VAR_2);

    VAR_3->qname = FUNC_3(VAR_0, (VAR_4 + 1)*sizeof(WCHAR));
    VAR_3->len = VAR_4;
    if (VAR_1) {
        static const WCHAR VAR_5[] = {':',0};
        FUNC_1(VAR_3->qname, VAR_1);
        FUNC_0(VAR_3->qname, VAR_5);
    }
    else
        VAR_3->qname[0] = 0;
    FUNC_0(VAR_3->qname, VAR_2);

    return VAR_3;
}
