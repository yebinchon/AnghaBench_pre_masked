
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {scalar_t__ nextkey; int * scantid; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Buffer ;
typedef TYPE_1__* BTScanInsert ;
typedef scalar_t__ BTPageOpaque ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static OffsetNumber
FUNC_9(Relation VAR_0,
   BTScanInsert VAR_1,
   Buffer VAR_2)
{
 Page VAR_3;
 BTPageOpaque VAR_4;
 OffsetNumber VAR_5,
    VAR_6;
 int32 VAR_7,
    VAR_8;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = (BTPageOpaque) FUNC_6(VAR_3);


 FUNC_0(!VAR_1->nextkey || VAR_1->scantid == ((void*)0));

 FUNC_0(!FUNC_4(VAR_4) || VAR_1->scantid == ((void*)0));

 VAR_5 = FUNC_3(VAR_4);
 VAR_6 = FUNC_5(VAR_3);
 if (FUNC_8(VAR_6 < VAR_5))
  return VAR_5;
 VAR_6++;

 VAR_8 = VAR_1->nextkey ? 0 : 1;

 while (VAR_6 > VAR_5)
 {
  OffsetNumber VAR_9 = VAR_5 + ((VAR_6 - VAR_5) / 2);



  VAR_7 = FUNC_7(VAR_0, VAR_1, VAR_3, VAR_9);

  if (VAR_7 >= VAR_8)
   VAR_5 = VAR_9 + 1;
  else
   VAR_6 = VAR_9;
 }
 if (FUNC_4(VAR_4))
  return VAR_5;





 FUNC_0(VAR_5 > FUNC_3(VAR_4));

 return FUNC_2(VAR_5);
}
