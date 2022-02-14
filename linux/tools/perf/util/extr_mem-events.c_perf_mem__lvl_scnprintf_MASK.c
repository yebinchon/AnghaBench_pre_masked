
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mem_lvl; int mem_lvl_num; scalar_t__ mem_remote; } ;
struct mem_info {TYPE_1__ data_src; } ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 scalar_t__ FUNC_1 (char*,size_t,char*,...) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_5, size_t VAR_6, struct mem_info *VAR_7)
{
 size_t VAR_8, VAR_9 = 0;
 u64 VAR_10 = VAR_2;
 u64 VAR_11, VAR_12;
 int VAR_13;

 if (VAR_7)
  VAR_10 = VAR_7->data_src.mem_lvl;

 VAR_6 -= 1;
 VAR_5[0] = '\0';

 VAR_11 = VAR_10 & VAR_0;
 VAR_12 = VAR_10 & VAR_1;


 VAR_10 &= ~(VAR_0|VAR_1);


 if (VAR_7 && VAR_7->data_src.mem_remote) {
  FUNC_2(VAR_5, "Remote ");
  VAR_9 += 7;
 }

 VAR_13 = 0;
 for (VAR_8 = 0; VAR_10 && VAR_8 < FUNC_0(VAR_3); VAR_8++, VAR_10 >>= 1) {
  if (!(VAR_10 & 0x1))
   continue;
  if (VAR_13++) {
   FUNC_2(VAR_5, " or ");
   VAR_9 += 4;
  }
  VAR_9 += FUNC_1(VAR_5 + VAR_9, VAR_6 - VAR_9, VAR_3[VAR_8]);
 }

 if (VAR_7 && VAR_7->data_src.mem_lvl_num) {
  int VAR_14 = VAR_7->data_src.mem_lvl_num;
  if (VAR_13++) {
   FUNC_2(VAR_5, " or ");
   VAR_9 += 4;
  }
  if (VAR_4[VAR_14])
   VAR_9 += FUNC_1(VAR_5 + VAR_9, VAR_6 - VAR_9, VAR_4[VAR_14]);
  else
   VAR_9 += FUNC_1(VAR_5 + VAR_9, VAR_6 - VAR_9, "L%d", VAR_14);
 }

 if (VAR_9 == 0)
  VAR_9 += FUNC_1(VAR_5 + VAR_9, VAR_6 - VAR_9, "N/A");
 if (VAR_11)
  VAR_9 += FUNC_1(VAR_5 + VAR_9, VAR_6 - VAR_9, " hit");
 if (VAR_12)
  VAR_9 += FUNC_1(VAR_5 + VAR_9, VAR_6 - VAR_9, " miss");

 return VAR_9;
}
