
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_standard {int id; scalar_t__ index; scalar_t__ name; } ;
typedef int obs_property_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int ,struct v4l2_standard*) ;

__attribute__((used)) static void FUNC_4(int VAR_1, obs_property_t *VAR_2)
{
 struct v4l2_standard VAR_3;
 VAR_3.index = 0;

 FUNC_2(VAR_2);

 FUNC_1(VAR_2, FUNC_0("LeaveUnchanged"), -1);

 while (FUNC_3(VAR_1, VAR_0, &VAR_3) == 0) {
  FUNC_1(VAR_2, (char *)VAR_3.name, VAR_3.id);
  VAR_3.index++;
 }
}
