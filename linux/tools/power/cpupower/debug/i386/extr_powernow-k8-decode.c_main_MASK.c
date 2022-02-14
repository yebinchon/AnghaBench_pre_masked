
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int *,int ) ;

int FUNC_6 (int VAR_0, char *VAR_1[])
{
 int VAR_2;
 int VAR_3;
 uint32_t VAR_4, VAR_5;

 if (VAR_0 < 2)
  VAR_3 = 0;
 else
  VAR_3 = FUNC_5(VAR_1[1], ((void*)0), 0);

 VAR_2 = FUNC_3(VAR_3, &VAR_4, &VAR_5);

 if (VAR_2) {
  FUNC_4("can't get fid, vid from MSR\n");
  FUNC_4("Possible trouble: you don't run a powernow-k8 capable cpu\n");
  FUNC_4("or you are not root, or the msr driver is not present\n");
  FUNC_0(1);
 }


 FUNC_4("cpu %d currently at %d MHz and %d mV\n",
   VAR_3,
   FUNC_1(VAR_4),
   FUNC_2(VAR_5));

 return 0;
}
