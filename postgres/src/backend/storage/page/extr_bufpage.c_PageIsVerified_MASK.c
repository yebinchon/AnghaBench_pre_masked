
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_2__ {scalar_t__ pd_checksum; int pd_flags; scalar_t__ pd_lower; scalar_t__ pd_upper; scalar_t__ pd_special; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef int BlockNumber ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 () ;

bool
FUNC_8(Page VAR_5, BlockNumber VAR_6)
{
 PageHeader VAR_7 = (PageHeader) VAR_5;
 size_t *VAR_8;
 int VAR_9;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 uint16 VAR_13 = 0;




 if (!FUNC_2(VAR_5))
 {
  if (FUNC_0())
  {
   VAR_13 = FUNC_6((char *) VAR_5, VAR_6);

   if (VAR_13 != VAR_7->pd_checksum)
    VAR_10 = 1;
  }







  if ((VAR_7->pd_flags & ~VAR_2) == 0 &&
   VAR_7->pd_lower <= VAR_7->pd_upper &&
   VAR_7->pd_upper <= VAR_7->pd_special &&
   VAR_7->pd_special <= VAR_0 &&
   VAR_7->pd_special == FUNC_1(VAR_7->pd_special))
   VAR_11 = 1;

  if (VAR_11 && !VAR_10)
   return 1;
 }






 FUNC_3(VAR_0 == (VAR_0 / sizeof(size_t)) * sizeof(size_t),
      "BLCKSZ has to be a multiple of sizeof(size_t)");

 VAR_12 = 1;
 VAR_8 = (size_t *) VAR_5;
 for (VAR_9 = 0; VAR_9 < (VAR_0 / sizeof(size_t)); VAR_9++)
 {
  if (VAR_8[VAR_9] != 0)
  {
   VAR_12 = 0;
   break;
  }
 }

 if (VAR_12)
  return 1;





 if (VAR_10)
 {
  FUNC_4(VAR_3,
    (VAR_1,
     FUNC_5("page verification failed, calculated checksum %u but expected %u",
      VAR_13, VAR_7->pd_checksum)));

  FUNC_7();

  if (VAR_11 && VAR_4)
   return 1;
 }

 return 0;
}
