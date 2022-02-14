
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct netlbl_audit {int dummy; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (struct audit_buffer*,char*,int ,int ) ;
 int VAR_1 ;
 struct audit_buffer* FUNC_2 (int ,struct netlbl_audit*) ;

__attribute__((used)) static void FUNC_3(u8 VAR_2,
      struct netlbl_audit *VAR_3)
{
 struct audit_buffer *VAR_4;
 u8 VAR_5;

 VAR_5 = VAR_1;
 VAR_1 = VAR_2;
 VAR_4 = FUNC_2(VAR_0,
           VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_4,
     " unlbl_accept=%u old=%u", VAR_2, VAR_5);
  FUNC_0(VAR_4);
 }
}
