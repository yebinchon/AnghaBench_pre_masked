
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_status; } ;
struct block_desc {TYPE_1__ h1; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_desc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int const) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct block_desc *VAR_2, const int VAR_3)
{
 if ((VAR_2->h1.block_status & VAR_0) == 0) {
  FUNC_2(VAR_1, "\nblock %u: not in TP_STATUS_USER\n", VAR_3);
  FUNC_1(1);
 }

 FUNC_0(VAR_2);
}
