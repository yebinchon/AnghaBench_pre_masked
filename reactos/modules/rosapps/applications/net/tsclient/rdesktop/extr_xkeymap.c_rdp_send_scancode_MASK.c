
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int RDPCLIENT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int,int,int ) ;
 int FUNC_2 (int *,int,int) ;

void
FUNC_3(RDPCLIENT * VAR_4, uint32 VAR_5, uint16 VAR_6, uint8 VAR_7)
{
 FUNC_2(VAR_4, VAR_7, !(VAR_6 & VAR_2));

 if (VAR_7 & VAR_3)
 {
  FUNC_0(("Sending extended scancode=0x%x, flags=0x%x\n",
      VAR_7 & ~VAR_3, VAR_6));
  FUNC_1(VAR_4, VAR_5, VAR_1, VAR_6 | VAR_0,
          VAR_7 & ~VAR_3, 0);
 }
 else
 {
  FUNC_0(("Sending scancode=0x%x, flags=0x%x\n", VAR_7, VAR_6));
  FUNC_1(VAR_4, VAR_5, VAR_1, VAR_6, VAR_7, 0);
 }
}
