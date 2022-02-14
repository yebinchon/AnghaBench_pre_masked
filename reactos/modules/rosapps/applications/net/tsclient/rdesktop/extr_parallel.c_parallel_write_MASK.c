
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
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static NTSTATUS
FUNC_3(RDPCLIENT * VAR_6, NTHANDLE VAR_7, uint8 * VAR_8, uint32 VAR_9, uint32 VAR_10, uint32 * VAR_11)
{
 int VAR_12 = VAR_4;

 int VAR_13 = FUNC_2(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
 {




  *VAR_11 = 0;
  switch (VAR_5)
  {
   case 130:
    VAR_12 = VAR_1;
   case 128:
    VAR_12 = VAR_2;
   case 129:
    VAR_12 = VAR_1;
   default:
    VAR_12 = VAR_3;
  }







 }
 *VAR_11 = VAR_13;
 return VAR_12;
}
