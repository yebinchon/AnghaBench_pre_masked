
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static NTSTATUS
FUNC_2(RDPCLIENT * VAR_3, NTHANDLE VAR_4, uint32 VAR_5, STREAM VAR_6, STREAM VAR_7)
{
 if ((VAR_5 >> 16) != VAR_0)
  return VAR_1;


 VAR_5 >>= 2;
 VAR_5 &= 0xfff;

 FUNC_0("PARALLEL IOCTL %d: ", VAR_5);

 switch (VAR_5)
 {
  case 128:

  default:

   FUNC_0("\n");
   FUNC_1("UNKNOWN IOCTL %d\n", VAR_5);
 }
 return VAR_2;
}
