
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct zyn_mmt_hdr {int csum; void* user_end; void* user_start; scalar_t__ count; } ;
struct fw_mmap {scalar_t__ addr; } ;
struct csum_state {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {int vendor; int model; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,char*,int,...) ;
 int FUNC_6 (int *,char*,int,struct csum_state*) ;

int
FUNC_7(FILE *VAR_2, struct fw_mmap *VAR_3, struct csum_state *VAR_4)
{
 struct zyn_mmt_hdr *VAR_5;
 uint8_t VAR_6[VAR_0];
 uint32_t VAR_7;
 char *VAR_8;
 int VAR_9;

 FUNC_4(VAR_6, 0, sizeof(VAR_6));

 VAR_5 = (struct zyn_mmt_hdr *)VAR_6;


 VAR_5->count=0;


 VAR_8 = VAR_6+sizeof(*VAR_5);
 VAR_8 += FUNC_5(VAR_8, "Vendor 1 %d", VAR_1->vendor);
 *VAR_8++ = '\0';
 VAR_8 += FUNC_5(VAR_8, "Model 1 %d", FUNC_0(VAR_1->model));
 *VAR_8++ = '\0';

 VAR_8 += FUNC_5(VAR_8, "HwVerRange 2 %d %d", 0, 0);
 *VAR_8++ = '\0';

 VAR_7 = (uint8_t *)VAR_8 - VAR_6;
 VAR_5->user_start= FUNC_2(VAR_3->addr+sizeof(*VAR_5));
 VAR_5->user_end= FUNC_2(VAR_3->addr+VAR_7);
 VAR_5->csum = FUNC_1(FUNC_3(VAR_6+sizeof(*VAR_5), VAR_7));

 VAR_9 = FUNC_6(VAR_2, VAR_6, sizeof(VAR_6), VAR_4);

 return VAR_9;
}
