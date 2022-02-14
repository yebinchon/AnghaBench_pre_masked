
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct csys_header {void* size; void* addr; int sig; } ;
struct csys_block {scalar_t__ size_hdr; scalar_t__ addr; scalar_t__ size; scalar_t__ size_csum; int sig; } ;
typedef int hdr ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int *,int,int *) ;

int
FUNC_4(FILE *VAR_0, struct csys_block *VAR_1)
{
 struct csys_header VAR_2;
 int VAR_3;

 if (VAR_1->size_hdr == 0)
  return 0;


 FUNC_2(VAR_2.sig, VAR_1->sig, 4);
 VAR_2.addr = FUNC_1(VAR_1->addr);
 VAR_2.size = FUNC_1(VAR_1->size - VAR_1->size_hdr - VAR_1->size_csum);

 FUNC_0(1,"writing header for block");
 VAR_3 = FUNC_3(VAR_0, (uint8_t *)&VAR_2, sizeof(VAR_2),((void*)0));
 return VAR_3;

}
