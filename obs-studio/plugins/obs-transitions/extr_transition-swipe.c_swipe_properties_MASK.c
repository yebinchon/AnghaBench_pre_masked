
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
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ,int ,int ,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;

__attribute__((used)) static obs_properties_t *FUNC_6(void *VAR_4)
{
 obs_properties_t *VAR_5 = FUNC_4();
 obs_property_t *VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_2,
        FUNC_1("Direction"),
        VAR_1,
        VAR_0);
 FUNC_5(VAR_6, FUNC_1("Direction.Left"),
         "left");
 FUNC_5(VAR_6, FUNC_1("Direction.Right"),
         "right");
 FUNC_5(VAR_6, FUNC_1("Direction.Up"), "up");
 FUNC_5(VAR_6, FUNC_1("Direction.Down"),
         "down");

 FUNC_2(VAR_5, VAR_3, FUNC_1("SwipeIn"));

 FUNC_0(VAR_4);
 return VAR_5;
}
