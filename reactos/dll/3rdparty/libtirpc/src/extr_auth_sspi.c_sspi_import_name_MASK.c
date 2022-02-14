
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int * sspi_name_t ;
struct TYPE_3__ {scalar_t__ length; int value; } ;
typedef TYPE_1__ sspi_buffer_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

uint32_t FUNC_4(sspi_buffer_desc *VAR_2, sspi_name_t *VAR_3)
{
    *VAR_3 = FUNC_0(VAR_2->length + 5, sizeof(char));
    if (*VAR_3 == ((void*)0))
        return VAR_0;

    FUNC_2(*VAR_3, "nfs/");
    FUNC_3(*VAR_3, VAR_2->value, VAR_2->length);

    FUNC_1("imported service name is: %s\n", *VAR_3);

    return VAR_1;
}
