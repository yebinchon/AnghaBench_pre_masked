
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cluster_size; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2 (int VAR_4, unsigned int VAR_5)
{
  int VAR_6;

  VAR_6 = (VAR_4 - VAR_3) / (int) (VAR_1.cluster_size) /
     (VAR_2/VAR_0);
  if (VAR_6 < 0)
    FUNC_0 ("Invalid cluster number in mark_FAT_sector: probably bug!");

  FUNC_1 (VAR_6, VAR_5);
}
