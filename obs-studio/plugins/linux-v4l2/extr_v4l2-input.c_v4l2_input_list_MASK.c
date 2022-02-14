
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int index; scalar_t__ name; } ;
typedef int obs_property_t ;
typedef int int_fast32_t ;
typedef int in ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (struct v4l2_input*,int ,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,struct v4l2_input*) ;

__attribute__((used)) static void FUNC_5(int_fast32_t VAR_2, obs_property_t *VAR_3)
{
 struct v4l2_input VAR_4;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 FUNC_3(VAR_3);

 while (FUNC_4(VAR_2, VAR_1, &VAR_4) == 0) {
  FUNC_2(VAR_3, (char *)VAR_4.name, VAR_4.index);
  FUNC_0(VAR_0, "Found input '%s' (Index %d)", VAR_4.name,
       VAR_4.index);
  VAR_4.index++;
 }
}
