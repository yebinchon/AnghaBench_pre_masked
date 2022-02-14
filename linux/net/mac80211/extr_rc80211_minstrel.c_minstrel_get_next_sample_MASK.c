
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_sta_info {scalar_t__ sample_column; int n_rates; scalar_t__ sample_row; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct minstrel_sta_info*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct minstrel_sta_info *VAR_1)
{
 unsigned int VAR_2;
 VAR_2 = FUNC_0(VAR_1, VAR_1->sample_row, VAR_1->sample_column);
 VAR_1->sample_row++;
 if ((int) VAR_1->sample_row >= VAR_1->n_rates) {
  VAR_1->sample_row = 0;
  VAR_1->sample_column++;
  if (VAR_1->sample_column >= VAR_0)
   VAR_1->sample_column = 0;
 }
 return VAR_2;
}
