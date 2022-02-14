
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32 ;
struct TYPE_2__ {int hasho_page_id; void* hasho_flag; void* hasho_bucket; int hasho_nextblkno; void* hasho_prevblkno; } ;
typedef int Page ;
typedef TYPE_1__* HashPageOpaque ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(Buffer VAR_2, uint32 VAR_3, uint32 VAR_4, uint32 VAR_5,
     bool VAR_6)
{
 HashPageOpaque VAR_7;
 Page VAR_8;

 VAR_8 = FUNC_0(VAR_2);


 if (VAR_6)
  FUNC_3(VAR_8, FUNC_1(VAR_2));

 VAR_7 = (HashPageOpaque) FUNC_2(VAR_8);






 VAR_7->hasho_prevblkno = VAR_3;
 VAR_7->hasho_nextblkno = VAR_1;
 VAR_7->hasho_bucket = VAR_4;
 VAR_7->hasho_flag = VAR_5;
 VAR_7->hasho_page_id = VAR_0;
}
