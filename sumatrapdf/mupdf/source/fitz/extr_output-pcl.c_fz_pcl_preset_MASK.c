
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_pcl_options ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 (char const*,char*) ;

void FUNC_3(fz_context *VAR_14, fz_pcl_options *VAR_15, const char *VAR_16)
{
 if (VAR_16 == ((void*)0) || *VAR_16 == 0 || !FUNC_2(VAR_16, "generic"))
  FUNC_0(VAR_15, &VAR_3);
 else if (!FUNC_2(VAR_16, "ljet4"))
  FUNC_0(VAR_15, &VAR_11);
 else if (!FUNC_2(VAR_16, "dj500"))
  FUNC_0(VAR_15, &VAR_1);
 else if (!FUNC_2(VAR_16, "fs600"))
  FUNC_0(VAR_15, &VAR_2);
 else if (!FUNC_2(VAR_16, "lj"))
  FUNC_0(VAR_15, &VAR_4);
 else if (!FUNC_2(VAR_16, "lj2"))
  FUNC_0(VAR_15, &VAR_5);
 else if (!FUNC_2(VAR_16, "lj3"))
  FUNC_0(VAR_15, &VAR_6);
 else if (!FUNC_2(VAR_16, "lj3d"))
  FUNC_0(VAR_15, &VAR_7);
 else if (!FUNC_2(VAR_16, "lj4"))
  FUNC_0(VAR_15, &VAR_8);
 else if (!FUNC_2(VAR_16, "lj4pl"))
  FUNC_0(VAR_15, &VAR_10);
 else if (!FUNC_2(VAR_16, "lj4d"))
  FUNC_0(VAR_15, &VAR_9);
 else if (!FUNC_2(VAR_16, "lp2563b"))
  FUNC_0(VAR_15, &VAR_12);
 else if (!FUNC_2(VAR_16, "oce9050"))
  FUNC_0(VAR_15, &VAR_13);
 else
  FUNC_1(VAR_14, VAR_0, "Unknown preset '%s'", VAR_16);
}
