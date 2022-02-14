
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct illinois {int rtt_above; scalar_t__ rtt_low; int alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u32 FUNC_0(struct illinois *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_5 / 100;

 if (VAR_4 <= VAR_6) {

  if (!VAR_3->rtt_above)
   return VAR_0;




  if (++VAR_3->rtt_low < VAR_2)
   return VAR_3->alpha;

  VAR_3->rtt_low = 0;
  VAR_3->rtt_above = 0;
  return VAR_0;
 }

 VAR_3->rtt_above = 1;
 VAR_5 -= VAR_6;
 VAR_4 -= VAR_6;
 return (VAR_5 * VAR_0) /
  (VAR_5 + (VAR_4 * (VAR_0 - VAR_1)) / VAR_1);
}
