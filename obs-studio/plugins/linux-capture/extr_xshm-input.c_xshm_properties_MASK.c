
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;
struct TYPE_2__ {int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ,int ,int ) ;
 int * FUNC_5 (int *,char*,int ,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static obs_properties_t *FUNC_10(void *VAR_6)
{
 FUNC_0(VAR_6);

 obs_properties_t *VAR_7 = FUNC_6();

 FUNC_4(VAR_7, "screen", FUNC_2("Screen"),
    VAR_1, VAR_0);
 FUNC_3(VAR_7, "show_cursor",
    FUNC_2("CaptureCursor"));
 obs_property_t *VAR_8 = FUNC_3(
  VAR_7, "advanced", FUNC_2("AdvancedSettings"));
 obs_property_t *VAR_9 = FUNC_5(
  VAR_7, "server", FUNC_2("XServer"), VAR_2);

 FUNC_8(VAR_8, VAR_5);
 FUNC_8(VAR_9, VAR_4);


 obs_data_t *VAR_10 = FUNC_9(VAR_3->source);
 FUNC_7(VAR_9, VAR_10);
 FUNC_1(VAR_10);

 return VAR_7;
}
