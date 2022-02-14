
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_ht_sta {int avg_ampdu_len; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int
FUNC_1(struct minstrel_ht_sta *VAR_1)
{
 if (!VAR_1->avg_ampdu_len)
  return VAR_0;

 return FUNC_0(VAR_1->avg_ampdu_len);
}
