
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int offset ;
typedef int length ;
typedef int XLogReaderState ;
typedef int StringInfo ;
typedef scalar_t__ Pointer ;
typedef scalar_t__ OffsetNumber ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__,int) ;

void
FUNC_4(StringInfo VAR_0, XLogReaderState *VAR_1)
{
 Pointer VAR_2 = FUNC_0(VAR_1),
    VAR_3 = VAR_2 + FUNC_1(VAR_1);

 while (VAR_2 < VAR_3)
 {
  OffsetNumber VAR_4,
     VAR_5;

  FUNC_3(&VAR_4, VAR_2, sizeof(VAR_4));
  VAR_2 += sizeof(VAR_4);
  FUNC_3(&VAR_5, VAR_2, sizeof(VAR_5));
  VAR_2 += sizeof(VAR_5);
  VAR_2 += VAR_5;

  if (VAR_2 < VAR_3)
   FUNC_2(VAR_0, "offset %u, length %u; ", VAR_4, VAR_5);
  else
   FUNC_2(VAR_0, "offset %u, length %u", VAR_4, VAR_5);
 }

 return;
}
