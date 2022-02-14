
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class_categories {int size; int impl_offset; int req_offset; } ;
typedef int WCHAR ;
typedef int ULONG ;
typedef int CATID ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct class_categories* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static struct class_categories *FUNC_3(
    ULONG VAR_1, const CATID *VAR_2, ULONG VAR_3, const CATID *VAR_4)
{
    struct class_categories *VAR_5;
    WCHAR *VAR_6;
    ULONG VAR_7;

    VAR_7 = sizeof(struct class_categories) + ((VAR_1 + VAR_3)*VAR_0 + 2)*sizeof(WCHAR);
    VAR_5 = FUNC_1(FUNC_0(), 0, VAR_7);
    if (VAR_5 == ((void*)0)) return VAR_5;

    VAR_5->size = VAR_7;
    VAR_5->impl_offset = sizeof(struct class_categories);
    VAR_5->req_offset = VAR_5->impl_offset + (VAR_1*VAR_0 + 1)*sizeof(WCHAR);

    VAR_6 = (WCHAR *)(VAR_5 + 1);
    while (VAR_1--) {
 FUNC_2(VAR_2++, VAR_6, VAR_0);
 VAR_6 += VAR_0;
    }
    *VAR_6++ = 0;

    while (VAR_3--) {
 FUNC_2(VAR_4++, VAR_6, VAR_0);
 VAR_6 += VAR_0;
    }
    *VAR_6++ = 0;

    return VAR_5;
}
