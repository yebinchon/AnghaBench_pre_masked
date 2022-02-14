
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int buffer ;
typedef int RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

void
FUNC_4(RDPCLIENT * VAR_0, uint32 VAR_1)
{
 uint8 VAR_2[36];

 FUNC_0(("cliprdr_send_simple_native_format_announce\n"));

 FUNC_1(VAR_2, VAR_1);
 FUNC_3(VAR_2 + 4, 0, sizeof(VAR_2) - 4);
 FUNC_2(VAR_0, VAR_2, sizeof(VAR_2));
}
