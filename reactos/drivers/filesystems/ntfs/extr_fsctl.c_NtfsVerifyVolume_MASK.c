
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PIRP ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_2(PDEVICE_OBJECT VAR_1,
                 PIRP VAR_2)
{
    FUNC_1(VAR_1);
    FUNC_1(VAR_2);
    FUNC_0("NtfsVerifyVolume() called\n");
    return VAR_0;
}
