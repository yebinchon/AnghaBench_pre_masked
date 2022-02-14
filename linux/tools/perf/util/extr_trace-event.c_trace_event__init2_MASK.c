
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tep_handle {int dummy; } ;
struct TYPE_3__ {struct tep_handle* pevent; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct tep_handle*,int) ;
 int FUNC_2 (struct tep_handle*,int ) ;
 int FUNC_3 (struct tep_handle*,int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_3 = FUNC_0();
 struct tep_handle *VAR_4;

 if (FUNC_4(&VAR_1))
  return -1;

 VAR_4 = VAR_1.pevent;
 FUNC_2(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_3);
 FUNC_3(VAR_4, VAR_3);
 VAR_2 = 1;
 return 0;
}
