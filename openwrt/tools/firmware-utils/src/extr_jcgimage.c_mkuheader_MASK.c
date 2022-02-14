
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uLong ;
struct uimage_header {int ih_os; int ih_arch; int ih_type; int ih_comp; void* ih_hcrc; void* ih_dcrc; void* ih_size; scalar_t__ ih_name; void* ih_fsoff; void* ih_ep; void* ih_load; void* ih_time; void* ih_magic; } ;


 long VAR_0 ;
 void* VAR_1 ;
 long FUNC_0 (long,void*,int) ;
 void* FUNC_1 (long) ;
 int FUNC_2 (struct uimage_header*,int ,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,long) ;
 int FUNC_5 (char*,char*) ;
 long FUNC_6 (int *) ;

void
FUNC_7(struct uimage_header *VAR_2, size_t VAR_3, size_t VAR_4)
{
 uLong VAR_5;
 void *VAR_6 = (void *)VAR_2 + sizeof(*VAR_2);


 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->ih_magic = FUNC_1(VAR_0);
 VAR_2->ih_time = FUNC_1(FUNC_6(((void*)0)));
 VAR_2->ih_size = FUNC_1(VAR_3 + VAR_4);
 VAR_2->ih_load = FUNC_1(0x80000000);
 VAR_2->ih_ep = FUNC_1(0x80292000);
 VAR_2->ih_os = 0x05;
 VAR_2->ih_arch = 0x05;
 VAR_2->ih_type = 0x02;
 VAR_2->ih_comp = 0x03;
 VAR_2->ih_fsoff = FUNC_1(sizeof(*VAR_2) + VAR_3);
 FUNC_5((char *)VAR_2->ih_name, "Linux Kernel Image");


 VAR_5 = FUNC_0(0L, VAR_1, 0);
 VAR_5 = FUNC_0(VAR_5, VAR_6, FUNC_3(VAR_2->ih_size));
 VAR_2->ih_dcrc = FUNC_1(VAR_5);
 FUNC_4("CRC1: %08lx\n", VAR_5);


 VAR_5 = FUNC_0(0L, VAR_1, 0);
 VAR_5 = FUNC_0(VAR_5, (void *)VAR_2, sizeof(*VAR_2));
 VAR_2->ih_hcrc = FUNC_1(VAR_5);
 FUNC_4("CRC2: %08lx\n", VAR_5);
}
