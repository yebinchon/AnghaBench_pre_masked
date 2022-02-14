
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* rep; int workspace; int LLTable; int MLTable; int OFTable; int hufTable; } ;
typedef TYPE_1__ ZSTD_entropyTables_t ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,short*,unsigned int,unsigned int,int ,int) ;
 scalar_t__ FUNC_3 (size_t const) ;
 size_t FUNC_4 (short*,...) ;
 scalar_t__ FUNC_5 (size_t const) ;
 size_t FUNC_6 (int ,int const*,int,int ,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (int const*) ;
 int VAR_6 ;

__attribute__((used)) static size_t FUNC_8(ZSTD_entropyTables_t *VAR_7, const void *const VAR_8, size_t const VAR_9)
{
 const BYTE *VAR_10 = (const BYTE *)VAR_8;
 const BYTE *const VAR_11 = VAR_10 + VAR_9;

 if (VAR_9 <= 8)
  return FUNC_1(VAR_6);
 VAR_10 += 8;

 {
  size_t const VAR_12 = FUNC_6(VAR_7->hufTable, VAR_10, VAR_11 - VAR_10, VAR_7->workspace, sizeof(VAR_7->workspace));
  if (FUNC_5(VAR_12))
   return FUNC_1(VAR_6);
  VAR_10 += VAR_12;
 }

 {
  short VAR_13[VAR_4 + 1];
  U32 VAR_14 = VAR_4, VAR_15;
  size_t const VAR_16 = FUNC_4(VAR_13, &VAR_14, &VAR_15, VAR_10, VAR_11 - VAR_10);
  if (FUNC_3(VAR_16))
   return FUNC_1(VAR_6);
  if (VAR_15 > VAR_5)
   return FUNC_1(VAR_6);
  FUNC_0(FUNC_2(VAR_7->OFTable, VAR_13, VAR_14, VAR_15, VAR_7->workspace, sizeof(VAR_7->workspace)), VAR_6);
  VAR_10 += VAR_16;
 }

 {
  short VAR_17[VAR_3 + 1];
  unsigned VAR_18 = VAR_3, VAR_19;
  size_t const VAR_20 = FUNC_4(VAR_17, &VAR_18, &VAR_19, VAR_10, VAR_11 - VAR_10);
  if (FUNC_3(VAR_20))
   return FUNC_1(VAR_6);
  if (VAR_19 > VAR_1)
   return FUNC_1(VAR_6);
  FUNC_0(FUNC_2(VAR_7->MLTable, VAR_17, VAR_18, VAR_19, VAR_7->workspace, sizeof(VAR_7->workspace)), VAR_6);
  VAR_10 += VAR_20;
 }

 {
  short VAR_21[VAR_2 + 1];
  unsigned VAR_22 = VAR_2, VAR_23;
  size_t const VAR_24 = FUNC_4(VAR_21, &VAR_22, &VAR_23, VAR_10, VAR_11 - VAR_10);
  if (FUNC_3(VAR_24))
   return FUNC_1(VAR_6);
  if (VAR_23 > VAR_0)
   return FUNC_1(VAR_6);
  FUNC_0(FUNC_2(VAR_7->LLTable, VAR_21, VAR_22, VAR_23, VAR_7->workspace, sizeof(VAR_7->workspace)), VAR_6);
  VAR_10 += VAR_24;
 }

 if (VAR_10 + 12 > VAR_11)
  return FUNC_1(VAR_6);
 {
  int VAR_25;
  size_t const VAR_26 = (size_t)(VAR_11 - (VAR_10 + 12));
  for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
   U32 const VAR_27 = FUNC_7(VAR_10);
   VAR_10 += 4;
   if (VAR_27 == 0 || VAR_27 >= VAR_26)
    return FUNC_1(VAR_6);
   VAR_7->rep[VAR_25] = VAR_27;
  }
 }

 return VAR_10 - (const BYTE *)VAR_8;
}
