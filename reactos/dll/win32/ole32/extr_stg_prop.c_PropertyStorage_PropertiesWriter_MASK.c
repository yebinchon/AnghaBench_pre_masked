
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PropertyClosure {int hr; int sectionOffset; int propNum; } ;
typedef int PropertyStorage_impl ;
typedef int BOOL ;


 int FUNC_0 (int *,int ,int ,void const*,int ) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static BOOL FUNC_4(const void *VAR_0, const void *VAR_1,
 void *VAR_2, void *VAR_3)
{
    PropertyStorage_impl *VAR_4 = VAR_2;
    struct PropertyClosure *VAR_5 = VAR_3;

    FUNC_3(VAR_0);
    FUNC_3(VAR_1);
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    VAR_5->hr = FUNC_0(VAR_4, VAR_5->propNum++,
                                                  FUNC_1(VAR_0), VAR_1, VAR_5->sectionOffset);
    return FUNC_2(VAR_5->hr);
}
