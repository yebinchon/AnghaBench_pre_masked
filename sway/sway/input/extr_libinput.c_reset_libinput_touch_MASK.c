
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libinput_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct libinput_device*,float*) ;
 int FUNC_1 (struct libinput_device*) ;
 int FUNC_2 (struct libinput_device*,float*) ;
 int FUNC_3 (struct libinput_device*,int ) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static bool FUNC_5(struct libinput_device *VAR_1,
  const char *VAR_2) {
 FUNC_4(VAR_0, "reset_libinput_touch(%s)", VAR_2);
 bool VAR_3 = 0;

 VAR_3 |= FUNC_3(VAR_1,
  FUNC_1(VAR_1));

 float VAR_4[6];
 FUNC_0(VAR_1, VAR_4);
 VAR_3 |= FUNC_2(VAR_1, VAR_4);

 return VAR_3;
}
