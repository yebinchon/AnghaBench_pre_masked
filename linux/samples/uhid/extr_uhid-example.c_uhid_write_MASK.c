
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_event {int dummy; } ;
typedef int ssize_t ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int,struct uhid_event const*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3, const struct uhid_event *VAR_4)
{
 ssize_t VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4, sizeof(*VAR_4));
 if (VAR_5 < 0) {
  FUNC_0(VAR_2, "Cannot write to uhid: %m\n");
  return -VAR_1;
 } else if (VAR_5 != sizeof(*VAR_4)) {
  FUNC_0(VAR_2, "Wrong size written to uhid: %zd != %lu\n",
   VAR_5, sizeof(VAR_4));
  return -VAR_0;
 } else {
  return 0;
 }
}
