
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t USHORT ;
struct TYPE_2__ {scalar_t__ DiskSize; } ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int,int ,int,int ,int ,int) ;
 int FUNC_2 (int,int ,int,int ,int ,int) ;
 int FUNC_3 (int,int ,int,int ,int ,int) ;
 int FUNC_4 (int,int ,int,int ,int ,int) ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static BOOL FUNC_5(DWORD VAR_14, uint64_t VAR_15, DWORD VAR_16, USHORT VAR_17, LPCSTR VAR_18, DWORD VAR_19)
{
 if ((VAR_14 < 0x80) || (VAR_14 > 0x100) || (VAR_17 >= VAR_7) ||

  ((VAR_16 != 0) && (VAR_16 & (VAR_16 - 1)))) {
  VAR_1 | FUNC_0(VAR_2) | VAR_0;
  return VAR_3;
 }
 VAR_11 = VAR_17;
 if ((VAR_17 == VAR_6) && ((VAR_10.DiskSize > VAR_9) || (VAR_12) || (VAR_19 & VAR_4)))
  return FUNC_2(VAR_14, VAR_15, VAR_16, VAR_8[VAR_17], VAR_18, VAR_19);
 else if (VAR_17 >= VAR_5)
  return FUNC_1(VAR_14, VAR_15, VAR_16, VAR_8[VAR_17], VAR_18, VAR_19);
 else if (VAR_13)
  return FUNC_4(VAR_14, VAR_15, VAR_16, VAR_8[VAR_17], VAR_18, VAR_19);
 else
  return FUNC_3(VAR_14, VAR_15, VAR_16, VAR_8[VAR_17], VAR_18, VAR_19);
}
