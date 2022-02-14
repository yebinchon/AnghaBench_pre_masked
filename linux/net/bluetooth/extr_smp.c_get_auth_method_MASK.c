
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct smp_chan {int flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t** VAR_3 ;
 size_t** VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static u8 FUNC_1(struct smp_chan *VAR_5, u8 VAR_6, u8 VAR_7)
{



 if (VAR_6 > VAR_2 ||
     VAR_7 > VAR_2)
  return VAR_0;

 if (FUNC_0(VAR_1, &VAR_5->flags))
  return VAR_4[VAR_7][VAR_6];

 return VAR_3[VAR_7][VAR_6];
}
