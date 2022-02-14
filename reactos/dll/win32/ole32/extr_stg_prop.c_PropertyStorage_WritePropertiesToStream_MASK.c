
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct PropertyClosure {int hr; int * sectionOffset; int propNum; } ;
struct TYPE_3__ {int propid_to_prop; } ;
typedef TYPE_1__ PropertyStorage_impl ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct PropertyClosure*) ;

__attribute__((used)) static HRESULT FUNC_2(
 PropertyStorage_impl *VAR_2, DWORD VAR_3, DWORD *VAR_4)
{
    struct PropertyClosure VAR_5;

    FUNC_0(VAR_4);
    VAR_5.hr = VAR_1;
    VAR_5.propNum = VAR_3;
    VAR_5.sectionOffset = VAR_4;
    FUNC_1(VAR_2->propid_to_prop, VAR_0,
     &VAR_5);
    return VAR_5.hr;
}
