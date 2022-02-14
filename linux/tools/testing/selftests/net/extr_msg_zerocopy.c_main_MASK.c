
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int,int ,char*,char const*) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char const*,char*) ;

int FUNC_4(int VAR_9, char **VAR_10)
{
 const char *VAR_11;

 FUNC_2(VAR_9, VAR_10);

 VAR_11 = VAR_10[VAR_9 - 1];

 if (!FUNC_3(VAR_11, "packet"))
  FUNC_0(VAR_2, VAR_5, 0);
 else if (!FUNC_3(VAR_11, "packet_dgram"))
  FUNC_0(VAR_2, VAR_4, 0);
 else if (!FUNC_3(VAR_11, "raw"))
  FUNC_0(VAR_8, VAR_5, VAR_0);
 else if (!FUNC_3(VAR_11, "raw_hdrincl"))
  FUNC_0(VAR_8, VAR_5, VAR_1);
 else if (!FUNC_3(VAR_11, "tcp"))
  FUNC_0(VAR_8, VAR_7, 0);
 else if (!FUNC_3(VAR_11, "udp"))
  FUNC_0(VAR_8, VAR_4, 0);
 else if (!FUNC_3(VAR_11, "rds"))
  FUNC_0(VAR_3, VAR_6, 0);
 else
  FUNC_1(1, 0, "unknown cfg_test %s", VAR_11);

 return 0;
}
