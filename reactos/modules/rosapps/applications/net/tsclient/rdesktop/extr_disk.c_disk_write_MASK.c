
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static NTSTATUS
FUNC_3(RDPCLIENT * VAR_5, NTHANDLE VAR_6, uint8 * VAR_7, uint32 VAR_8, uint32 VAR_9, uint32 * VAR_10)
{
 int VAR_11;

 FUNC_0(VAR_6, VAR_9, VAR_0);

 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8);

 if (VAR_11 < 0)
 {
  FUNC_1("write");
  *VAR_10 = 0;
  switch (VAR_4)
  {
   case 128:
    return VAR_2;
   default:
    return VAR_1;
  }
 }

 *VAR_10 = VAR_11;

 return VAR_3;
}
