
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_4__ {scalar_t__ fd; size_t st_size; } ;
typedef TYPE_1__ ps_files ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 size_t FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,char*,unsigned int) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int *,int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 size_t FUNC_8 (scalar_t__,char*,size_t,int ) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (scalar_t__,char*,size_t) ;

__attribute__((used)) static int FUNC_11(ps_files *VAR_6, zend_string *VAR_7, zend_string *VAR_8)
{
 size_t VAR_9 = 0;




 FUNC_7(VAR_6, FUNC_1(VAR_7));
 if (VAR_6->fd < 0) {
  return VAR_1;
 }


 if (FUNC_0(VAR_8) < VAR_6->st_size) {
  FUNC_6(FUNC_3(VAR_6->fd, 0));
 }




 FUNC_4(VAR_6->fd, 0, VAR_2);
 VAR_9 = FUNC_10(VAR_6->fd, FUNC_1(VAR_8), FUNC_0(VAR_8));



 if (VAR_9 != FUNC_0(VAR_8)) {
  if (VAR_9 == (size_t)-1) {
   FUNC_5(((void*)0), VAR_0, "write failed: %s (%d)", FUNC_9(VAR_5), VAR_5);
  } else {
   FUNC_5(((void*)0), VAR_0, "write wrote less bytes than requested");
  }
  return VAR_1;
 }

 return VAR_3;
}
