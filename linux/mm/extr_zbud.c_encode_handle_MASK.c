
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zbud_header {int last_chunks; } ;
typedef enum buddy { ____Placeholder_buddy } buddy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static unsigned long FUNC_0(struct zbud_header *VAR_4, enum buddy VAR_5)
{
 unsigned long VAR_6;







 VAR_6 = (unsigned long)VAR_4;
 if (VAR_5 == VAR_1)

  VAR_6 += VAR_3;
 else
  VAR_6 += VAR_2 - (VAR_4->last_chunks << VAR_0);
 return VAR_6;
}
