
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mem_snoop; int mem_snoopx; } ;
struct mem_info {TYPE_1__ data_src; } ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,size_t,char*) ;
 char** VAR_2 ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_3, size_t VAR_4, struct mem_info *VAR_5)
{
 size_t VAR_6, VAR_7 = 0;
 u64 VAR_8 = VAR_1;

 VAR_4 -= 1;
 VAR_3[0] = '\0';

 if (VAR_5)
  VAR_8 = VAR_5->data_src.mem_snoop;

 for (VAR_6 = 0; VAR_8 && VAR_6 < FUNC_0(VAR_2); VAR_6++, VAR_8 >>= 1) {
  if (!(VAR_8 & 0x1))
   continue;
  if (VAR_7) {
   FUNC_2(VAR_3, " or ");
   VAR_7 += 4;
  }
  VAR_7 += FUNC_1(VAR_3 + VAR_7, VAR_4 - VAR_7, VAR_2[VAR_6]);
 }
 if (VAR_5 &&
      (VAR_5->data_src.mem_snoopx & VAR_0)) {
  if (VAR_7) {
   FUNC_2(VAR_3, " or ");
   VAR_7 += 4;
  }
  VAR_7 += FUNC_1(VAR_3 + VAR_7, VAR_4 - VAR_7, "Fwd");
 }

 if (*VAR_3 == '\0')
  VAR_7 += FUNC_1(VAR_3, VAR_4 - VAR_7, "N/A");

 return VAR_7;
}
