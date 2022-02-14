
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Window ;
typedef int RDPCLIENT ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,int ,char*,int,unsigned long*,unsigned char**,int ) ;
 int VAR_0 ;

int
FUNC_3(RDPCLIENT * VAR_1, Window VAR_2)
{
 unsigned long VAR_3;
 unsigned char *VAR_4;
 int VAR_5;

 if (FUNC_2(VAR_1, VAR_2, "_NET_WM_DESKTOP", 1, &VAR_3, &VAR_4, 0) < 0)
  return (-1);

 if (VAR_3 != 1)
 {
  FUNC_1(VAR_0, "_NET_WM_DESKTOP has bad length\n");
  return (-1);
 }

 VAR_5 = *VAR_4;
 FUNC_0(VAR_4);
 return VAR_5;
}
