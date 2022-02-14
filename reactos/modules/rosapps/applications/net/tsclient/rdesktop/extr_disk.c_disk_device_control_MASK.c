
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static NTSTATUS
FUNC_2(RDPCLIENT * VAR_2, NTHANDLE VAR_3, uint32 VAR_4, STREAM VAR_5, STREAM VAR_6)
{
 if (((VAR_4 >> 16) != 20) || ((VAR_4 >> 16) != 9))
  return VAR_0;


 VAR_4 >>= 2;
 VAR_4 &= 0xfff;

 FUNC_0("DISK IOCTL %d\n", VAR_4);

 switch (VAR_4)
 {
  case 25:
  case 42:
  default:
   FUNC_1("DISK IOCTL %d\n", VAR_4);
   return VAR_0;
 }

 return VAR_1;
}
