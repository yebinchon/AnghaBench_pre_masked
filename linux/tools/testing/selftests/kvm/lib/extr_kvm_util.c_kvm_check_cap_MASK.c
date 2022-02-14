
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,long) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(long VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 if (VAR_7 < 0)
  FUNC_2(VAR_0);

 VAR_6 = FUNC_3(VAR_7, VAR_1, VAR_5);
 FUNC_0(VAR_6 != -1, "KVM_CHECK_EXTENSION IOCTL failed,\n"
  "  rc: %i errno: %i", VAR_6, VAR_4);

 FUNC_1(VAR_7);

 return VAR_6;
}
