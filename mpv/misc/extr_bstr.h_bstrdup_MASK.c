
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {unsigned char* start; int len; int member_1; int * member_0; } ;


 scalar_t__ FUNC_0 (void*,unsigned char*,int ) ;

__attribute__((used)) static inline struct bstr FUNC_1(void *VAR_0, struct bstr VAR_1)
{
    struct bstr VAR_2 = { ((void*)0), VAR_1.len };
    if (VAR_1.start)
        VAR_2.start = (unsigned char *)FUNC_0(VAR_0, VAR_1.start, VAR_1.len);
    return VAR_2;
}
