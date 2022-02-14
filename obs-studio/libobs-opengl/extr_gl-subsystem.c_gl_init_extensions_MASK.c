
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_device {int copy_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(struct gs_device *VAR_9)
{
 if (!VAR_5) {
  FUNC_0(VAR_8,
       "obs-studio requires OpenGL version 3.3 or higher.");
  return 0;
 }

 FUNC_2();

 FUNC_1(VAR_7);

 if (VAR_6 || VAR_3)
  VAR_9->copy_type = VAR_0;
 else if (VAR_4)
  VAR_9->copy_type = VAR_2;
 else
  VAR_9->copy_type = VAR_1;

 return 1;
}
