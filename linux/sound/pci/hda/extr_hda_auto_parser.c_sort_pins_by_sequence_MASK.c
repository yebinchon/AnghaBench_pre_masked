
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auto_out_pin {int pin; } ;
typedef int list ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct auto_out_pin*,int,int,int ,int *) ;

__attribute__((used)) static void FUNC_1(hda_nid_t *VAR_1, struct auto_out_pin *VAR_2,
      int VAR_3)
{
 int VAR_4;
 FUNC_0(VAR_2, VAR_3, sizeof(VAR_2[0]), VAR_0, ((void*)0));
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_1[VAR_4] = VAR_2[VAR_4].pin;
}
