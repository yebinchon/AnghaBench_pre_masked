
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int uint32 ;
typedef scalar_t__ XLogRecPtr ;
typedef TYPE_1__* XLogPageHeader ;
struct TYPE_4__ {scalar_t__* xlblocks; char* pages; } ;
struct TYPE_3__ {scalar_t__ xlp_magic; scalar_t__ xlp_pageaddr; } ;
typedef int Size ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 () ;
 int VAR_6 ;

__attribute__((used)) static char *
FUNC_7(XLogRecPtr VAR_7)
{
 int VAR_8;
 XLogRecPtr VAR_9;
 static uint64 VAR_10 = 0;
 static char *VAR_11 = ((void*)0);
 XLogRecPtr VAR_12;





 if (VAR_7 / VAR_3 == VAR_10)
 {
  FUNC_1(((XLogPageHeader) VAR_11)->xlp_magic == VAR_4);
  FUNC_1(((XLogPageHeader) VAR_11)->xlp_pageaddr == VAR_7 - (VAR_7 % VAR_3));
  return VAR_11 + VAR_7 % VAR_3;
 }






 VAR_8 = FUNC_3(VAR_7);
 VAR_12 = VAR_7;
 VAR_12 += VAR_3 - VAR_7 % VAR_3;

 VAR_9 = VAR_5->xlblocks[VAR_8];
 if (VAR_12 != VAR_9)
 {
  XLogRecPtr VAR_13;
  if (VAR_7 % VAR_3 == VAR_2 &&
   FUNC_4(VAR_7, VAR_6) > VAR_3)
   VAR_13 = VAR_7 - VAR_2;
  else if (VAR_7 % VAR_3 == VAR_1 &&
     FUNC_4(VAR_7, VAR_6) < VAR_3)
   VAR_13 = VAR_7 - VAR_1;
  else
   VAR_13 = VAR_7;

  FUNC_2(VAR_13);

  FUNC_0(VAR_7, 0);
  VAR_9 = VAR_5->xlblocks[VAR_8];

  if (VAR_12 != VAR_9)
   FUNC_5(VAR_0, "could not find WAL buffer for %X/%X",
     (uint32) (VAR_7 >> 32), (uint32) VAR_7);
 }
 else
 {




  FUNC_6();
 }





 VAR_10 = VAR_7 / VAR_3;
 VAR_11 = VAR_5->pages + VAR_8 * (Size) VAR_3;

 FUNC_1(((XLogPageHeader) VAR_11)->xlp_magic == VAR_4);
 FUNC_1(((XLogPageHeader) VAR_11)->xlp_pageaddr == VAR_7 - (VAR_7 % VAR_3));

 return VAR_11 + VAR_7 % VAR_3;
}
