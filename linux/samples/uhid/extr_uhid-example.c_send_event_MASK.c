
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int* data; } ;
struct TYPE_4__ {TYPE_1__ input; } ;
struct uhid_event {TYPE_2__ u; int type; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct uhid_event*,int ,int) ;
 int FUNC_1 (int,struct uhid_event*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(int VAR_7)
{
 struct uhid_event VAR_8;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.type = VAR_0;
 VAR_8.u.input.size = 5;

 VAR_8.u.input.data[0] = 0x1;
 if (VAR_3)
  VAR_8.u.input.data[1] |= 0x1;
 if (VAR_4)
  VAR_8.u.input.data[1] |= 0x2;
 if (VAR_5)
  VAR_8.u.input.data[1] |= 0x4;

 VAR_8.u.input.data[2] = VAR_1;
 VAR_8.u.input.data[3] = VAR_2;
 VAR_8.u.input.data[4] = VAR_6;

 return FUNC_1(VAR_7, &VAR_8);
}
