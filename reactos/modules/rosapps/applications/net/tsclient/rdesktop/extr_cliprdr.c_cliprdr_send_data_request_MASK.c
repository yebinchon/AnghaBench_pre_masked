
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int buffer ;
typedef int RDPCLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int *,int) ;

void
FUNC_3(RDPCLIENT * VAR_2, uint32 VAR_3)
{
 uint8 VAR_4[4];

 FUNC_0(("cliprdr_send_data_request\n"));
 FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_2, VAR_0, VAR_1, VAR_4, sizeof(VAR_4));
}
