
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axg_spdifin {TYPE_1__* conf; int map; } ;
struct TYPE_2__ {unsigned int* mode_rates; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct axg_spdifin *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7 = 0;

 FUNC_1(VAR_4->map, VAR_1, &VAR_5);
 VAR_6 = FUNC_0(VAR_3, VAR_5);






 if (FUNC_0(VAR_2, VAR_5) &&
     VAR_6 < VAR_0)
  VAR_7 = VAR_4->conf->mode_rates[VAR_6];

 return VAR_7;
}
