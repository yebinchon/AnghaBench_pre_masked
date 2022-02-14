
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

bool FUNC_4(void)
{
 if (!FUNC_1()) {
  FUNC_0(VAR_0, "Couldn't find VLC installation, VLC video "
          "source disabled");
  return 1;
 }

 if (!FUNC_2())
  return 1;

 FUNC_0(VAR_0, "VLC found, VLC video source enabled");

 FUNC_3(&VAR_1);
 return 1;
}
