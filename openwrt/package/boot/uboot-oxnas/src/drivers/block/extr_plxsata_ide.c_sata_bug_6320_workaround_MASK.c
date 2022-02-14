
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_8, ulong *VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;


 VAR_10 = !(*((unsigned long*) VAR_7)
  & (VAR_8 ? VAR_2 : VAR_1));



 VAR_11 = *((unsigned long*) (
  VAR_8 ? VAR_4 : VAR_3));

 VAR_12 = VAR_11 & 0x7f;
 VAR_13 = VAR_12 ? (0x80 - VAR_12) : 0;

 if (VAR_10 && (VAR_13 == 2)) {
  FUNC_0("SATA read fixup, only transfered %d quads, "
   "sector_quads_remaining %d, port %d\n",
   VAR_11, VAR_13, VAR_8);

  int VAR_14 = VAR_0;
  ulong *VAR_15 = (void*) (
   VAR_8 ? VAR_6 : VAR_5)
   + ((VAR_14 - 8) % 2048);

  *VAR_9 = *VAR_15;
  *(VAR_9 + 1) = *(VAR_15 + 1);
 }
}
