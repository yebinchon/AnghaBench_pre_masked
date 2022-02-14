
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int dummy; } ;
struct hid_device {struct hidp_session* driver_data; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hidp_session*,int,int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_2, __u8 *VAR_3, size_t VAR_4)
{
 struct hidp_session *VAR_5 = VAR_2->driver_data;

 return FUNC_0(VAR_5,
          VAR_1 | VAR_0,
          VAR_3, VAR_4);
}
