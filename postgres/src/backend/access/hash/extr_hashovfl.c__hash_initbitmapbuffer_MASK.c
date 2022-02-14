
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {int hasho_bucket; int hasho_page_id; int hasho_flag; void* hasho_nextblkno; void* hasho_prevblkno; } ;
struct TYPE_3__ {int pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef TYPE_2__* HashPageOpaque ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * FUNC_2 (scalar_t__) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;

void
FUNC_6(Buffer VAR_3, uint16 VAR_4, bool VAR_5)
{
 Page VAR_6;
 HashPageOpaque VAR_7;
 uint32 *VAR_8;

 VAR_6 = FUNC_0(VAR_3);


 if (VAR_5)
  FUNC_5(VAR_6, FUNC_1(VAR_3));


 VAR_7 = (HashPageOpaque) FUNC_4(VAR_6);
 VAR_7->hasho_prevblkno = VAR_1;
 VAR_7->hasho_nextblkno = VAR_1;
 VAR_7->hasho_bucket = -1;
 VAR_7->hasho_flag = VAR_2;
 VAR_7->hasho_page_id = VAR_0;


 VAR_8 = FUNC_2(VAR_6);
 FUNC_3(VAR_8, 0xFF, VAR_4);






 ((PageHeader) VAR_6)->pd_lower = ((char *) VAR_8 + VAR_4) - (char *) VAR_6;
}
