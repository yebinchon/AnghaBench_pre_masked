
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void*) ;
 int VAR_10 ;
 int * FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ,float,float,float) ;
 int * FUNC_3 (int *,char*,int ,int,int,int) ;
 int * FUNC_4 (int *,char*,int ,int ,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static obs_properties_t *FUNC_9(void *VAR_11)
{
 FUNC_0(VAR_11);

 obs_properties_t *VAR_12 = FUNC_5();
 obs_property_t *VAR_13;

 VAR_13 = FUNC_3(VAR_12, "bitrate", VAR_3, 50, 10000000,
       50);
 FUNC_6(VAR_13, " Kbps");

 VAR_13 = FUNC_1(VAR_12, "limit_bitrate",
        VAR_9);
 FUNC_8(VAR_13, VAR_10);

 VAR_13 = FUNC_3(VAR_12, "max_bitrate", VAR_5, 50,
       10000000, 50);
 FUNC_6(VAR_13, " Kbps");

 FUNC_2(VAR_12, "max_bitrate_window",
     VAR_6, 0.10f, 10.0f, 0.25f);

 FUNC_3(VAR_12, "keyint_sec", VAR_4, 0, 20, 1);

 VAR_13 = FUNC_4(VAR_12, "profile", VAR_8,
        VAR_1,
        VAR_0);
 FUNC_7(VAR_13, VAR_7, "");
 FUNC_7(VAR_13, "baseline", "baseline");
 FUNC_7(VAR_13, "main", "main");
 FUNC_7(VAR_13, "high", "high");

 FUNC_1(VAR_12, "bframes", VAR_2);

 return VAR_12;
}
