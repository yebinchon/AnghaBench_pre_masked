
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {void* ih_hcrc; void* ih_size; void* ih_dcrc; } ;
typedef TYPE_1__ image_header_t ;
typedef int Bytef ;


 int FUNC_0 (int ,int *,int) ;
 void* FUNC_1 (int) ;

void
FUNC_2(image_header_t *VAR_0, void *VAR_1, uint32_t VAR_2)
{



 VAR_0->ih_dcrc = FUNC_1(FUNC_0(0, (Bytef *)VAR_1, VAR_2));
 VAR_0->ih_size = FUNC_1(VAR_2);



 VAR_0->ih_hcrc = 0;
 VAR_0->ih_hcrc = FUNC_1(FUNC_0(0, (Bytef *)VAR_0, sizeof(image_header_t)));
}
