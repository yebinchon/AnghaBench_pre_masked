
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next_object_id; } ;
typedef TYPE_1__ GpMetafile ;
typedef int DWORD ;


 int VAR_0 ;

__attribute__((used)) static DWORD FUNC_0(GpMetafile *VAR_1)
{
    return (VAR_1->next_object_id++) % VAR_0;
}
