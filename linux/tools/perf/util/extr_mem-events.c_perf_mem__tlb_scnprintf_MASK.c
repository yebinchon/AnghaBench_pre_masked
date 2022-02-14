
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mem_dtlb; } ;
struct mem_info {TYPE_1__ data_src; } ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,size_t,char*) ;
 int FUNC_2 (char*,char*) ;
 char** VAR_3 ;

int FUNC_3(char *VAR_4, size_t VAR_5, struct mem_info *VAR_6)
{
 size_t VAR_7 = 0, VAR_8;
 u64 VAR_9 = VAR_2;
 u64 VAR_10, VAR_11;

 VAR_5 -= 1;
 VAR_4[0] = '\0';

 if (VAR_6)
  VAR_9 = VAR_6->data_src.mem_dtlb;

 VAR_10 = VAR_9 & VAR_0;
 VAR_11 = VAR_9 & VAR_1;


 VAR_9 &= ~(VAR_0|VAR_1);

 for (VAR_8 = 0; VAR_9 && VAR_8 < FUNC_0(VAR_3); VAR_8++, VAR_9 >>= 1) {
  if (!(VAR_9 & 0x1))
   continue;
  if (VAR_7) {
   FUNC_2(VAR_4, " or ");
   VAR_7 += 4;
  }
  VAR_7 += FUNC_1(VAR_4 + VAR_7, VAR_5 - VAR_7, VAR_3[VAR_8]);
 }
 if (*VAR_4 == '\0')
  VAR_7 += FUNC_1(VAR_4, VAR_5 - VAR_7, "N/A");
 if (VAR_10)
  VAR_7 += FUNC_1(VAR_4 + VAR_7, VAR_5 - VAR_7, " hit");
 if (VAR_11)
  VAR_7 += FUNC_1(VAR_4 + VAR_7, VAR_5 - VAR_7, " miss");

 return VAR_7;
}
