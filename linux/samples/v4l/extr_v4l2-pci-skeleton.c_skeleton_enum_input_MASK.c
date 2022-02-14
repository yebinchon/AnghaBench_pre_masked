
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int index; int capabilities; int name; scalar_t__ std; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
          struct v4l2_input *VAR_7)
{
 if (VAR_7->index > 1)
  return -VAR_0;

 VAR_7->type = VAR_2;
 if (VAR_7->index == 0) {
  VAR_7->std = VAR_1;
  FUNC_0(VAR_7->name, "S-Video", sizeof(VAR_7->name));
  VAR_7->capabilities = VAR_4;
 } else {
  VAR_7->std = 0;
  FUNC_0(VAR_7->name, "HDMI", sizeof(VAR_7->name));
  VAR_7->capabilities = VAR_3;
 }
 return 0;
}
