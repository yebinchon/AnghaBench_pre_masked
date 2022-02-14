
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int devnames_name ;
typedef int WORD ;
struct TYPE_3__ {int wOutputOffset; int wDeviceOffset; int wDriverOffset; } ;
typedef TYPE_1__ DEVNAMES ;


 int FUNC_0 (char*) ;




__attribute__((used)) static inline WORD FUNC_1(const DEVNAMES *VAR_0, devnames_name VAR_1)
{
    switch(VAR_1)
    {
    case 129: return VAR_0->wDriverOffset;
    case 130: return VAR_0->wDeviceOffset;
    case 128: return VAR_0->wOutputOffset;
    }
    FUNC_0("Shouldn't be here\n");
    return 0;
}
