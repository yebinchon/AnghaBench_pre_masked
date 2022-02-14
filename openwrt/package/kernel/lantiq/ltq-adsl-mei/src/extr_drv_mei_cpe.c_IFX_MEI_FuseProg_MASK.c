
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ LTQ_FUSE_BASE ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4 (DSL_DEV_Device_t * VAR_9)
{
 u32 VAR_10, VAR_11;
 int VAR_12 = 0;

 FUNC_2 ((u32) VAR_7, &VAR_10);
 while ((VAR_10 & 0x10000000) == 0) {
  FUNC_2 ((u32) VAR_7, &VAR_10);
  VAR_12++;

  if (VAR_12 == 0x4000)
   return;
 }


 FUNC_2 ((u32) VAR_7, &VAR_10);
 FUNC_3 ((u32) VAR_7, VAR_10 | (1 << 24));

 FUNC_1 (VAR_9);
 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  FUNC_2 ((u32) (LTQ_FUSE_BASE) + VAR_12 * 4, &VAR_11);
  switch (VAR_11 & 0xF0000) {
  case 0x80000:
   VAR_10 = ((VAR_11 & VAR_8) |
     (VAR_8 + 0x1));
   FUNC_0 (VAR_9, VAR_0, &VAR_10, 1);
   break;
  case 0x90000:
   VAR_10 = ((VAR_11 & VAR_8) |
     (VAR_8 + 0x1));
   FUNC_0 (VAR_9, VAR_0 + 4, &VAR_10, 1);
   break;
  case 0xA0000:
   VAR_10 = ((VAR_11 & VAR_3) |
     (VAR_3 + 0x1));
   FUNC_0 (VAR_9, VAR_4, &VAR_10, 1);
   break;
  case 0xB0000:
   VAR_10 = ((VAR_11 & VAR_3) |
     (VAR_3 + 0x1));
   FUNC_0 (VAR_9, VAR_4 + 4, &VAR_10, 1);
   break;
  case 0xC0000:
   VAR_10 = ((VAR_11 & VAR_5) |
     (VAR_5 + 0x1));
   FUNC_0 (VAR_9, VAR_6, &VAR_10, 1);
   break;
  case 0xD0000:
   VAR_10 = ((VAR_11 & VAR_5) |
     (VAR_5 + 0x1));
   FUNC_0 (VAR_9, VAR_6 + 4, &VAR_10, 1);
   break;
  case 0xE0000:
   VAR_10 = ((VAR_11 & VAR_1) |
     (VAR_1 + 0x1));
   FUNC_0 (VAR_9, VAR_2, &VAR_10, 1);
   break;
  case 0xF0000:
   VAR_10 = ((VAR_11 & VAR_1) |
     (VAR_1 + 0x1));
   FUNC_0 (VAR_9, VAR_2 + 4, &VAR_10, 1);
   break;
  default:
   break;
  }
 }
 FUNC_2 ((u32) VAR_7, &VAR_10);
 FUNC_3 ((u32) VAR_7, VAR_10 & ~(1 << 24));
 FUNC_2 ((u32) VAR_7, &VAR_10);
}
